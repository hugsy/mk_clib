#ifndef mk_include_guard_mk_lib_crypto_serpent_fuzz
#define mk_include_guard_mk_lib_crypto_serpent_fuzz


#include "mk_lang_jumbo.h"
#include "mk_lang_noexcept.h"
#include "mk_lang_types.h"


mk_lang_jumbo void mk_lib_crypto_serpent_fuzz(mk_lang_types_uchar_pct const data, mk_lang_types_usize_t const size) mk_lang_noexcept;


#if mk_lang_jumbo_want == 1
#include "mk_lib_crypto_serpent_fuzz.c"
#endif
#endif
