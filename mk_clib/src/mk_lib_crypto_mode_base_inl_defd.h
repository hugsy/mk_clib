#include "mk_lang_concat.h"


#ifndef mk_lib_crypto_mode_base_t_name
#define mk_lib_crypto_mode_base_inl_defd_name mk_lib_crypto_mode_base_t_len
#else
#define mk_lib_crypto_mode_base_inl_defd_name mk_lib_crypto_mode_base_t_name
#endif
#define mk_lib_crypto_mode_base_inl_defd_len mk_lib_crypto_mode_base_t_len


#define mk_lib_crypto_mode_base_inl_defd_prefix mk_lang_concat(mk_lib_crypto_mode_base_, mk_lib_crypto_mode_base_inl_defd_name)

#define mk_lib_crypto_mode_base_inl_defd_xor3 mk_lang_concat(mk_lib_crypto_mode_base_inl_defd_prefix, _xor3)
#define mk_lib_crypto_mode_base_inl_defd_xor2 mk_lang_concat(mk_lib_crypto_mode_base_inl_defd_prefix, _xor2)
