#ifndef mk_include_guard_mk_lib_crypto_mode_ecb_aes_128
#define mk_include_guard_mk_lib_crypto_mode_ecb_aes_128


#include "mk_lang_jumbo.h"
#include "mk_lib_crypto_alg_aes_128.h"


#define mk_lib_crypto_mode_ecb_t_alg aes_128
#include "mk_lib_crypto_mode_ecb_inl_fileh.h"
#undef mk_lib_crypto_mode_ecb_t_alg


#if mk_lang_jumbo_want == 1
#include "mk_lib_crypto_mode_ecb_aes_128.c"
#endif
#endif
