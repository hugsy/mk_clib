#include "mk_lang_concat.h"


#if defined mk_lib_crypto_mode_ecb_t_name
#define mk_lib_crypto_mode_ecb_inl_defd_name mk_lib_crypto_mode_ecb_t_name
#else
#define mk_lib_crypto_mode_ecb_inl_defd_name mk_lib_crypto_mode_ecb_t_alg
#endif

#if defined mk_lib_crypto_mode_ecb_t_constexpr
#define mk_lib_crypto_mode_ecb_inl_defd_constexpr mk_lib_crypto_mode_ecb_t_constexpr
#else
#define mk_lib_crypto_mode_ecb_inl_defd_constexpr mk_lang_constexpr
#endif

#define mk_lib_crypto_mode_ecb_inl_defd_alg mk_lib_crypto_mode_ecb_t_alg


#define mk_lib_crypto_mode_ecb_inl_defd_alg_prefix mk_lang_concat(mk_lib_crypto_alg_, mk_lib_crypto_mode_ecb_inl_defd_alg)

#define mk_lib_crypto_mode_ecb_inl_defd_alg_key_len_m mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _key_len_m)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_key_len_e mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _key_len_e)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_key_len_v mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _key_len_v)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_msg_len_m mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _msg_len_m)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_msg_len_e mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _msg_len_e)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_msg_len_v mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _msg_len_v)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_key_t mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _key_t)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_key_ct mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _key_ct)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_key_pt mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _key_pt)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_key_pct mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _key_pct)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_msg_t mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _msg_t)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_msg_ct mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _msg_ct)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_msg_pt mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _msg_pt)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_msg_pct mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _msg_pct)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_encrypt mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _encrypt)
#define mk_lib_crypto_mode_ecb_inl_defd_alg_decrypt mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_alg_prefix, _decrypt)


#define mk_lib_crypto_mode_ecb_inl_defd_prefix mk_lang_concat(mk_lib_crypto_mode_ecb_, mk_lib_crypto_mode_ecb_inl_defd_name)

#define mk_lib_crypto_mode_ecb_inl_defd_key_len_m mk_lib_crypto_mode_ecb_inl_defd_alg_key_len_m
#define mk_lib_crypto_mode_ecb_inl_defd_key_len_e mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _key_len_e)
#define mk_lib_crypto_mode_ecb_inl_defd_key_len_v mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _key_len_v)
#define mk_lib_crypto_mode_ecb_inl_defd_msg_len_m mk_lib_crypto_mode_ecb_inl_defd_alg_msg_len_m
#define mk_lib_crypto_mode_ecb_inl_defd_msg_len_e mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _msg_len_e)
#define mk_lib_crypto_mode_ecb_inl_defd_msg_len_v mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _msg_len_v)
#define mk_lib_crypto_mode_ecb_inl_defd_iv_len_m mk_lib_crypto_mode_ecb_inl_defd_msg_len_m
#define mk_lib_crypto_mode_ecb_inl_defd_iv_len_e mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _iv_len_e)
#define mk_lib_crypto_mode_ecb_inl_defd_iv_len_v mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _iv_len_v)
#define mk_lib_crypto_mode_ecb_inl_defd_key_t mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _key_t)
#define mk_lib_crypto_mode_ecb_inl_defd_key_ct mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _key_ct)
#define mk_lib_crypto_mode_ecb_inl_defd_key_pt mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _key_pt)
#define mk_lib_crypto_mode_ecb_inl_defd_key_pct mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _key_pct)
#define mk_lib_crypto_mode_ecb_inl_defd_msg_t mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _msg_t)
#define mk_lib_crypto_mode_ecb_inl_defd_msg_ct mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _msg_ct)
#define mk_lib_crypto_mode_ecb_inl_defd_msg_pt mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _msg_pt)
#define mk_lib_crypto_mode_ecb_inl_defd_msg_pct mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _msg_pct)
#define mk_lib_crypto_mode_ecb_inl_defd_iv_t mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _iv_t)
#define mk_lib_crypto_mode_ecb_inl_defd_iv_ct mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _iv_ct)
#define mk_lib_crypto_mode_ecb_inl_defd_iv_pt mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _iv_pt)
#define mk_lib_crypto_mode_ecb_inl_defd_iv_pct mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _iv_pct)
#define mk_lib_crypto_mode_ecb_inl_defd_s mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _s)
#define mk_lib_crypto_mode_ecb_inl_defd_t mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _t)
#define mk_lib_crypto_mode_ecb_inl_defd_ct mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _ct)
#define mk_lib_crypto_mode_ecb_inl_defd_pt mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _pt)
#define mk_lib_crypto_mode_ecb_inl_defd_pct mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _pct)
#define mk_lib_crypto_mode_ecb_inl_defd_init mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _init)
#define mk_lib_crypto_mode_ecb_inl_defd_encrypt mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _encrypt)
#define mk_lib_crypto_mode_ecb_inl_defd_decrypt mk_lang_concat(mk_lib_crypto_mode_ecb_inl_defd_prefix, _decrypt)
