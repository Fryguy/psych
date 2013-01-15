module Psych
  ###
  # Scan scalars for built in types
  class ScalarScanner
    def initialize
      @string_cache = {}
      @symbol_cache = {}
    end

    def tokenize string
      return nil if string.empty?
      return string if @string_cache.key?(string)
      return @symbol_cache[string] if @symbol_cache.key?(string)
      raw_tokenize string
    end

    def parse_time string
      parse_time_full string
    end

    private

    def parse_null_value string
      nil
    end

    def parse_bool_true string
      true
    end

    def parse_bool_false string
      false
    end

    def parse_int_base_10 string
      Integer(string.gsub(/[,_]/, ''))
    rescue
      parse_string string
    end
    alias parse_int_base_2  parse_int_base_10
    alias parse_int_base_8  parse_int_base_10
    alias parse_int_base_16 parse_int_base_10

    def parse_int_base_60 string
      i = 0
      string.split(':').each_with_index do |n,e|
        i += (n.to_i * 60 ** (e - 2).abs)
      end
      i
    end

    def parse_float_base_10 string
      Float(string.gsub(/[,_]|\.$/, ''))
    rescue
      parse_string string
    end

    def parse_float_base_60 string
      i = 0
      string.split(':').each_with_index do |n,e|
        i += (n.to_f * 60 ** (e - 2).abs)
      end
      i
    end

    def parse_float_inf string
      if string[0] == '-'
        -1 / 0.0
      else
        1 / 0.0
      end
    end

    def parse_float_nan string
      0.0 / 0.0
    end

    def parse_time_ymd string
      require 'date'
      Date.strptime(string, '%Y-%m-%d')
    rescue
      parse_string string
    end

    def parse_time_full string
      date, time = *(string.split(/[ tT]/, 2))
      (yy, m, dd) = date.split('-').map { |x| x.to_i }
      md = time.match(/(\d+:\d+:\d+)(?:\.(\d*))?\s*(Z|[-+]\d+(:\d\d)?)?/)

      (hh, mm, ss) = md[1].split(':').map { |x| x.to_i }
      us = (md[2] ? Rational("0.#{md[2]}") : 0) * 1000000

      time = Time.utc(yy, m, dd, hh, mm, ss, us)

      return time if 'Z' == md[3]
      return Time.at(time.to_i, us) unless md[3]

      tz = md[3].match(/^([+\-]?\d{1,2})\:?(\d{1,2})?$/)[1..-1].compact.map { |digit| Integer(digit, 10) }
      offset = tz.first * 3600

      if offset < 0
        offset -= ((tz[1] || 0) * 60)
      else
        offset += ((tz[1] || 0) * 60)
      end

      Time.at((time - offset).to_i, us)
    rescue
      parse_string string
    end

    def parse_symbol_quoted string
      last = string[-1]
      return string unless last == '"' || last == "'"
      @symbol_cache[string] = string[2..-2].to_sym
    rescue
      parse_string string
    end

    def parse_symbol_unquoted string
      @symbol_cache[string] = string[1..-1].to_sym
    rescue
      parse_string string
    end

    def parse_string string
      @string_cache[string] = true
      string
    end
  end
end

if $0 == __FILE__
  scanner = Psych::ScalarScanner.new
  loop do
    print "> "
    string = gets.strip
    break if string == "exit"
    puts " => #{scanner.tokenize(string).inspect}"
  end
end