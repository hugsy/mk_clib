#ifndef mk_include_guard_mk_sl_sort_merge_fuzz
#define mk_include_guard_mk_sl_sort_merge_fuzz


#include "mk_lang_jumbo.h"
#include "mk_lang_noexcept.h"
#include "mk_lang_sizet.h"


mk_lang_jumbo void mk_sl_sort_merge_fuzz(unsigned char const* const data, mk_lang_size_t const size) mk_lang_noexcept;


#if mk_lang_jumbo_want == 1
#include "mk_sl_sort_merge_fuzz.c"
#endif
#endif
