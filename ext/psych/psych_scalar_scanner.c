
#line 1 "ext/psych/psych_scalar_scanner.rl"
/*
 * THIS FILE IS AUTOMATICALLY GENERATED.  EDIT psych_scalar_scanner.rl INSTEAD
 *
 * To compile:      ragel psych_scalar_scanner.rl
 * To generate svg: ragel -V -p psych_scalar_scanner.rl | dot -Tsvg -o psych_scalar_scanner.svg
 */


#line 12 "ext/psych/psych_scalar_scanner.c"
static const char _psych_scalar_scanner_actions[] = {
	0, 1, 0, 1, 1, 1, 2, 1, 
	3, 1, 4, 1, 5, 1, 6, 1, 
	7, 1, 8, 1, 9, 1, 10, 1, 
	11, 1, 12, 1, 13, 1, 14, 1, 
	15, 1, 16
};

static const short _psych_scalar_scanner_key_offsets[] = {
	0, 0, 18, 22, 24, 26, 28, 29, 
	30, 31, 36, 42, 46, 49, 57, 59, 
	60, 61, 62, 66, 69, 74, 78, 81, 
	82, 84, 86, 87, 89, 91, 96, 98, 
	100, 102, 104, 108, 109, 114, 115, 117, 
	123, 126, 133, 139, 145, 147, 149, 150, 
	151, 152, 153, 154, 155, 159, 160, 161, 
	162, 163, 167, 168, 169, 171, 172, 173, 
	174, 175, 177, 178, 179, 180, 182, 184, 
	185, 186, 192, 196, 198, 198, 208, 216, 
	220, 223, 225, 228, 236, 242, 247, 255, 
	255, 265, 273, 281, 290, 296, 302, 305, 
	308, 310, 310, 317, 321, 329, 335, 341, 
	347, 353, 360, 360, 360, 360
};

static const char _psych_scalar_scanner_trans_keys[] = {
	43, 45, 46, 48, 58, 70, 78, 79, 
	84, 89, 102, 110, 111, 116, 121, 126, 
	49, 57, 46, 48, 49, 57, 43, 45, 
	48, 57, 78, 110, 70, 102, 110, 44, 
	46, 95, 48, 57, 44, 46, 58, 95, 
	48, 57, 48, 53, 54, 57, 95, 48, 
	49, 44, 95, 48, 57, 65, 70, 97, 
	102, 65, 97, 78, 97, 110, 48, 49, 
	50, 57, 45, 48, 57, 51, 48, 50, 
	52, 57, 9, 32, 48, 57, 58, 48, 
	57, 58, 48, 57, 48, 57, 58, 48, 
	57, 48, 57, 9, 32, 43, 45, 90, 
	48, 57, 48, 57, 48, 57, 48, 57, 
	9, 32, 84, 116, 45, 45, 48, 50, 
	51, 57, 45, 48, 57, 9, 32, 84, 
	116, 48, 57, 45, 48, 57, 44, 45, 
	46, 58, 95, 48, 57, 44, 46, 58, 
	95, 48, 57, 44, 46, 58, 95, 48, 
	57, 34, 39, 65, 97, 76, 83, 69, 
	108, 115, 101, 79, 85, 111, 117, 76, 
	76, 108, 108, 70, 78, 102, 110, 70, 
	102, 82, 114, 85, 69, 117, 101, 69, 
	101, 83, 115, 97, 111, 117, 102, 110, 
	114, 101, 69, 73, 101, 105, 48, 57, 
	69, 101, 48, 57, 48, 57, 44, 46, 
	58, 95, 98, 120, 48, 55, 56, 57, 
	44, 46, 58, 95, 48, 55, 56, 57, 
	46, 58, 48, 57, 95, 48, 57, 46, 
	58, 95, 48, 49, 44, 95, 48, 57, 
	65, 70, 97, 102, 44, 46, 58, 95, 
	48, 57, 44, 46, 95, 48, 57, 69, 
	73, 78, 101, 105, 110, 48, 57, 44, 
	46, 58, 95, 98, 120, 48, 55, 56, 
	57, 44, 46, 58, 95, 48, 55, 56, 
	57, 44, 46, 58, 95, 48, 55, 56, 
	57, 44, 45, 46, 58, 95, 48, 55, 
	56, 57, 9, 32, 84, 116, 48, 57, 
	9, 32, 43, 45, 46, 90, 58, 48, 
	57, 58, 48, 57, 48, 57, 9, 32, 
	43, 45, 90, 48, 57, 9, 32, 84, 
	116, 9, 32, 84, 116, 48, 49, 50, 
	57, 9, 32, 84, 116, 48, 57, 44, 
	46, 58, 95, 48, 57, 44, 46, 58, 
	95, 48, 57, 44, 46, 58, 95, 48, 
	57, 44, 45, 46, 58, 95, 48, 57, 
	0
};

static const char _psych_scalar_scanner_single_lengths[] = {
	0, 16, 2, 2, 0, 2, 1, 1, 
	1, 3, 4, 0, 1, 2, 2, 1, 
	1, 1, 2, 1, 1, 2, 1, 1, 
	0, 0, 1, 0, 0, 5, 0, 0, 
	0, 0, 4, 1, 1, 1, 0, 4, 
	1, 5, 4, 4, 2, 2, 1, 1, 
	1, 1, 1, 1, 4, 1, 1, 1, 
	1, 4, 1, 1, 2, 1, 1, 1, 
	1, 2, 1, 1, 1, 2, 2, 1, 
	1, 4, 2, 0, 0, 6, 4, 2, 
	1, 2, 1, 2, 4, 3, 6, 0, 
	6, 4, 4, 5, 4, 6, 1, 1, 
	0, 0, 5, 4, 4, 4, 4, 4, 
	4, 5, 0, 0, 0, 0
};

static const char _psych_scalar_scanner_range_lengths[] = {
	0, 1, 1, 0, 1, 0, 0, 0, 
	0, 1, 1, 2, 1, 3, 0, 0, 
	0, 0, 1, 1, 2, 1, 1, 0, 
	1, 1, 0, 1, 1, 0, 1, 1, 
	1, 1, 0, 0, 2, 0, 1, 1, 
	1, 1, 1, 1, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 1, 1, 1, 0, 2, 2, 1, 
	1, 0, 1, 3, 1, 1, 1, 0, 
	2, 2, 2, 2, 1, 0, 1, 1, 
	1, 0, 1, 0, 2, 1, 1, 1, 
	1, 1, 0, 0, 0, 0
};

static const short _psych_scalar_scanner_index_offsets[] = {
	0, 0, 18, 22, 25, 27, 30, 32, 
	34, 36, 41, 47, 50, 53, 59, 62, 
	64, 66, 68, 72, 75, 79, 83, 86, 
	88, 90, 92, 94, 96, 98, 104, 106, 
	108, 110, 112, 117, 119, 123, 125, 127, 
	133, 136, 143, 149, 155, 158, 161, 163, 
	165, 167, 169, 171, 173, 178, 180, 182, 
	184, 186, 191, 193, 195, 198, 200, 202, 
	204, 206, 209, 211, 213, 215, 218, 221, 
	223, 225, 231, 235, 237, 238, 247, 254, 
	258, 261, 264, 267, 273, 279, 284, 292, 
	293, 302, 309, 316, 324, 330, 337, 340, 
	343, 345, 346, 353, 358, 365, 371, 377, 
	383, 389, 396, 397, 398, 399
};

static const char _psych_scalar_scanner_indicies[] = {
	1, 1, 2, 3, 5, 6, 7, 8, 
	9, 10, 11, 12, 13, 14, 15, 16, 
	4, 0, 17, 18, 19, 0, 20, 20, 
	0, 21, 0, 22, 23, 0, 24, 0, 
	24, 0, 23, 0, 25, 26, 25, 25, 
	0, 25, 26, 28, 27, 27, 0, 29, 
	30, 0, 31, 31, 0, 32, 32, 32, 
	32, 32, 0, 33, 33, 0, 34, 0, 
	35, 0, 34, 0, 36, 37, 38, 0, 
	39, 40, 0, 42, 41, 43, 0, 44, 
	44, 45, 0, 47, 46, 0, 47, 0, 
	48, 0, 49, 0, 50, 0, 51, 0, 
	52, 0, 53, 53, 54, 54, 55, 0, 
	56, 0, 57, 0, 55, 0, 45, 0, 
	44, 44, 58, 58, 0, 39, 0, 39, 
	40, 59, 0, 60, 0, 61, 0, 44, 
	44, 58, 58, 62, 0, 39, 59, 0, 
	25, 63, 26, 28, 27, 27, 0, 25, 
	26, 28, 27, 64, 0, 25, 26, 28, 
	27, 65, 0, 67, 67, 66, 68, 69, 
	0, 70, 0, 71, 0, 72, 0, 73, 
	0, 74, 0, 72, 0, 72, 75, 72, 
	76, 0, 77, 0, 16, 0, 78, 0, 
	16, 0, 79, 80, 81, 80, 0, 72, 
	0, 72, 0, 82, 83, 0, 84, 0, 
	80, 0, 85, 0, 80, 0, 86, 87, 
	0, 80, 0, 80, 0, 69, 0, 72, 
	76, 0, 81, 80, 0, 83, 0, 87, 
	0, 88, 89, 88, 90, 26, 0, 88, 
	88, 26, 0, 21, 0, 0, 25, 26, 
	28, 91, 92, 93, 91, 27, 0, 25, 
	26, 28, 91, 91, 27, 0, 94, 28, 
	30, 0, 94, 94, 0, 94, 28, 0, 
	31, 31, 0, 32, 32, 32, 32, 32, 
	0, 95, 26, 28, 19, 19, 0, 95, 
	26, 95, 95, 0, 88, 89, 96, 88, 
	90, 97, 26, 0, 0, 25, 26, 28, 
	91, 92, 93, 98, 99, 0, 25, 26, 
	28, 91, 100, 65, 0, 25, 26, 28, 
	91, 101, 64, 0, 25, 63, 26, 28, 
	91, 91, 27, 0, 44, 44, 58, 58, 
	102, 0, 53, 53, 54, 54, 103, 55, 
	0, 105, 104, 0, 105, 106, 0, 55, 
	0, 0, 53, 53, 54, 54, 55, 103, 
	0, 44, 44, 58, 58, 0, 44, 44, 
	58, 58, 102, 62, 0, 44, 44, 58, 
	58, 62, 0, 95, 26, 28, 19, 107, 
	0, 95, 26, 28, 19, 108, 0, 95, 
	26, 28, 19, 109, 0, 95, 63, 26, 
	28, 19, 19, 0, 0, 0, 0, 0, 
	0
};

static const char _psych_scalar_scanner_trans_targs[] = {
	0, 2, 86, 88, 102, 44, 45, 52, 
	57, 60, 65, 68, 69, 70, 71, 72, 
	108, 73, 77, 84, 4, 75, 6, 7, 
	76, 9, 74, 10, 11, 79, 81, 82, 
	83, 15, 87, 17, 19, 36, 40, 20, 
	35, 92, 100, 101, 21, 22, 23, 24, 
	25, 26, 27, 28, 93, 29, 30, 97, 
	94, 32, 33, 37, 38, 39, 34, 18, 
	41, 42, 106, 106, 46, 49, 47, 48, 
	107, 50, 51, 53, 55, 54, 56, 58, 
	109, 59, 61, 63, 62, 64, 66, 67, 
	3, 5, 8, 78, 12, 13, 80, 85, 
	14, 16, 89, 43, 90, 91, 99, 98, 
	95, 31, 96, 103, 104, 105
};

static const char _psych_scalar_scanner_trans_actions[] = {
	33, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 31, 29, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0
};

static const char _psych_scalar_scanner_eof_actions[] = {
	0, 33, 33, 33, 33, 33, 33, 33, 
	33, 33, 33, 33, 33, 33, 33, 33, 
	33, 33, 33, 33, 33, 33, 33, 33, 
	33, 33, 33, 33, 33, 33, 33, 33, 
	33, 33, 33, 33, 33, 33, 33, 33, 
	33, 33, 33, 33, 33, 33, 33, 33, 
	33, 33, 33, 33, 33, 33, 33, 33, 
	33, 33, 33, 33, 33, 33, 33, 33, 
	33, 33, 33, 33, 33, 33, 33, 33, 
	33, 17, 17, 17, 21, 11, 9, 15, 
	19, 15, 7, 13, 11, 11, 17, 23, 
	11, 9, 9, 9, 25, 27, 27, 27, 
	27, 27, 27, 25, 25, 25, 11, 11, 
	11, 11, 0, 5, 1, 3
};

static const int psych_scalar_scanner_start = 1;
static const int psych_scalar_scanner_first_final = 73;
static const int psych_scalar_scanner_error = 0;

static const int psych_scalar_scanner_en_main = 1;


#line 85 "ext/psych/psych_scalar_scanner.rl"



#include <psych.h>

VALUE cPsychScalarScanner;
ID id_parse_null_value;
ID id_parse_bool_true;
ID id_parse_bool_false;
ID id_parse_int_base_2;
ID id_parse_int_base_8;
ID id_parse_int_base_10;
ID id_parse_int_base_16;
ID id_parse_int_base_60;
ID id_parse_float_base_10;
ID id_parse_float_base_60;
ID id_parse_float_inf;
ID id_parse_float_nan;
ID id_parse_time_ymd;
ID id_parse_time_full;
ID id_parse_symbol_quoted;
ID id_parse_symbol_unquoted;
ID id_parse_string;

static VALUE ss_raw_tokenize(VALUE self, VALUE string)
{
  int cs;
  char* p = StringValuePtr(string);
  char* pe = p + RSTRING_LEN(string);
  char* eof = pe;

  
#line 283 "ext/psych/psych_scalar_scanner.c"
	{
	cs = psych_scalar_scanner_start;
	}

#line 117 "ext/psych/psych_scalar_scanner.rl"
  
#line 290 "ext/psych/psych_scalar_scanner.c"
	{
	int _klen;
	unsigned int _trans;
	const char *_acts;
	unsigned int _nacts;
	const char *_keys;

	if ( p == pe )
		goto _test_eof;
	if ( cs == 0 )
		goto _out;
_resume:
	_keys = _psych_scalar_scanner_trans_keys + _psych_scalar_scanner_key_offsets[cs];
	_trans = _psych_scalar_scanner_index_offsets[cs];

	_klen = _psych_scalar_scanner_single_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + _klen - 1;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + ((_upper-_lower) >> 1);
			if ( (*p) < *_mid )
				_upper = _mid - 1;
			else if ( (*p) > *_mid )
				_lower = _mid + 1;
			else {
				_trans += (unsigned int)(_mid - _keys);
				goto _match;
			}
		}
		_keys += _klen;
		_trans += _klen;
	}

	_klen = _psych_scalar_scanner_range_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + (_klen<<1) - 2;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + (((_upper-_lower) >> 1) & ~1);
			if ( (*p) < _mid[0] )
				_upper = _mid - 2;
			else if ( (*p) > _mid[1] )
				_lower = _mid + 2;
			else {
				_trans += (unsigned int)((_mid - _keys)>>1);
				goto _match;
			}
		}
		_trans += _klen;
	}

_match:
	_trans = _psych_scalar_scanner_indicies[_trans];
	cs = _psych_scalar_scanner_trans_targs[_trans];

	if ( _psych_scalar_scanner_trans_actions[_trans] == 0 )
		goto _again;

	_acts = _psych_scalar_scanner_actions + _psych_scalar_scanner_trans_actions[_trans];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 )
	{
		switch ( *_acts++ )
		{
	case 14:
#line 27 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_symbol_quoted,   1, string)); }
	break;
	case 15:
#line 28 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_symbol_unquoted, 1, string)); }
	break;
	case 16:
#line 29 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_string,          1, string)); }
	break;
#line 376 "ext/psych/psych_scalar_scanner.c"
		}
	}

_again:
	if ( cs == 0 )
		goto _out;
	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	const char *__acts = _psych_scalar_scanner_actions + _psych_scalar_scanner_eof_actions[cs];
	unsigned int __nacts = (unsigned int) *__acts++;
	while ( __nacts-- > 0 ) {
		switch ( *__acts++ ) {
	case 0:
#line 13 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_null_value,      1, string)); }
	break;
	case 1:
#line 14 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_bool_true,       1, string)); }
	break;
	case 2:
#line 15 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_bool_false,      1, string)); }
	break;
	case 3:
#line 16 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_int_base_2,      1, string)); }
	break;
	case 4:
#line 17 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_int_base_8,      1, string)); }
	break;
	case 5:
#line 18 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_int_base_10,     1, string)); }
	break;
	case 6:
#line 19 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_int_base_16,     1, string)); }
	break;
	case 7:
#line 20 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_int_base_60,     1, string)); }
	break;
	case 8:
#line 21 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_float_base_10,   1, string)); }
	break;
	case 9:
#line 22 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_float_base_60,   1, string)); }
	break;
	case 10:
#line 23 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_float_inf,       1, string)); }
	break;
	case 11:
#line 24 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_float_nan,       1, string)); }
	break;
	case 12:
#line 25 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_time_ymd,        1, string)); }
	break;
	case 13:
#line 26 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_time_full,       1, string)); }
	break;
	case 16:
#line 29 "ext/psych/psych_scalar_scanner.rl"
	{ return(rb_funcall(self, id_parse_string,          1, string)); }
	break;
#line 452 "ext/psych/psych_scalar_scanner.c"
		}
	}
	}

	_out: {}
	}

#line 118 "ext/psych/psych_scalar_scanner.rl"

  return string;
}

void Init_psych_scalar_scanner()
{
    VALUE psych         = rb_define_module("Psych");
    cPsychScalarScanner = rb_define_class_under(psych, "ScalarScanner", rb_cObject);

    rb_define_private_method(cPsychScalarScanner, "raw_tokenize", ss_raw_tokenize, 1);

    id_parse_null_value      = rb_intern("parse_null_value");
    id_parse_bool_true       = rb_intern("parse_bool_true");
    id_parse_bool_false      = rb_intern("parse_bool_false");
    id_parse_int_base_2      = rb_intern("parse_int_base_2");
    id_parse_int_base_8      = rb_intern("parse_int_base_8");
    id_parse_int_base_10     = rb_intern("parse_int_base_10");
    id_parse_int_base_16     = rb_intern("parse_int_base_16");
    id_parse_int_base_60     = rb_intern("parse_int_base_60");
    id_parse_float_base_10   = rb_intern("parse_float_base_10");
    id_parse_float_base_60   = rb_intern("parse_float_base_60");
    id_parse_float_inf       = rb_intern("parse_float_inf");
    id_parse_float_nan       = rb_intern("parse_float_nan");
    id_parse_time_ymd        = rb_intern("parse_time_ymd");
    id_parse_time_full       = rb_intern("parse_time_full");
    id_parse_symbol_quoted   = rb_intern("parse_symbol_quoted");
    id_parse_symbol_unquoted = rb_intern("parse_symbol_unquoted");
    id_parse_string          = rb_intern("parse_string");
}

/* vim: set noet sws=4 sw=4: */
