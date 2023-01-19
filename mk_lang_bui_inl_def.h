#ifndef mk_include_guard_lang_bui_inl_def
#define mk_include_guard_lang_bui_inl_def


#include "mk_lang_concat.h"


#if !defined mk_lang_bui_btn
#define mk_lang_bui_btn uint
#if !defined mk_lang_bui_n
#define mk_lang_bui_n zzzzzzzzzz
#endif
#endif
#if !defined mk_lang_bui_n
#define mk_lang_bui_n mk_lang_bui_btn
#endif


#define mk_lang_bui_t mk_lang_concat(mk_lang_concat(mk_lang_bi_, mk_lang_bui_btn), _t)

#define mk_lang_bui_set_zero mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _set_zero)
#define mk_lang_bui_set_one mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _set_one)
#define mk_lang_bui_set_bit mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _set_bit)
#define mk_lang_bui_set_mask mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _set_mask)

#define mk_lang_bui_is_zero mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _is_zero)
#define mk_lang_bui_is_max mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _is_max)
#define mk_lang_bui_eq mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _eq)
#define mk_lang_bui_ne mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _ne)
#define mk_lang_bui_lt mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _lt)
#define mk_lang_bui_le mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _le)
#define mk_lang_bui_gt mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _gt)
#define mk_lang_bui_ge mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _ge)

#define mk_lang_bui_inc2 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _inc2)
#define mk_lang_bui_dec2 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _dec2)
#define mk_lang_bui_inc1 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _inc1)
#define mk_lang_bui_dec1 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _dec1)

#define mk_lang_bui_not2 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _not2)
#define mk_lang_bui_or3 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _or3)
#define mk_lang_bui_and3 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _and3)
#define mk_lang_bui_xor3 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _xor3)
#define mk_lang_bui_not1 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _not1)
#define mk_lang_bui_or2 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _or2)
#define mk_lang_bui_and2 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _and2)
#define mk_lang_bui_xor2 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _xor2)

#define mk_lang_bui_shl3 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _shl3)
#define mk_lang_bui_shr3 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _shr3)
#define mk_lang_bui_rotl3 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _rotl2)
#define mk_lang_bui_rotr3 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _totr2)
#define mk_lang_bui_shl2 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _shl2)
#define mk_lang_bui_shr2 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _shr2)
#define mk_lang_bui_rotl2 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _rotl1)
#define mk_lang_bui_rotr2 mk_lang_concat(mk_lang_concat(mk_lang_bui_, mk_lang_bui_n), _totr1)


#endif
