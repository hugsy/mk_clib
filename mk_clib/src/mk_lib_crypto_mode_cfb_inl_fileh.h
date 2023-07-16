#include "mk_lang_types.h"
#include "mk_sl_uint8.h"


#include "mk_lib_crypto_mode_cfb_inl_defd.h"


enum mk_lib_crypto_mode_cfb_inl_defd_key_len_e { mk_lib_crypto_mode_cfb_inl_defd_key_len_v = mk_lib_crypto_mode_cfb_inl_defd_key_len_m };
enum mk_lib_crypto_mode_cfb_inl_defd_msg_len_e { mk_lib_crypto_mode_cfb_inl_defd_msg_len_v = mk_lib_crypto_mode_cfb_inl_defd_msg_len_m };
enum mk_lib_crypto_mode_cfb_inl_defd_iv_len_e { mk_lib_crypto_mode_cfb_inl_defd_iv_len_v = mk_lib_crypto_mode_cfb_inl_defd_iv_len_m };


union mk_lib_crypto_mode_cfb_inl_defd_aligned_msg_u
{
	mk_sl_cui_uint8_t m_uint8s[mk_lib_crypto_mode_cfb_inl_defd_msg_len_v];
	mk_lang_types_ulllong_t m_ulllong;
};
typedef union mk_lib_crypto_mode_cfb_inl_defd_aligned_msg_u mk_lib_crypto_mode_cfb_inl_defd_aligned_msg_t;
typedef mk_lib_crypto_mode_cfb_inl_defd_aligned_msg_t const mk_lib_crypto_mode_cfb_inl_defd_aligned_msg_ct;
typedef mk_lib_crypto_mode_cfb_inl_defd_aligned_msg_t* mk_lib_crypto_mode_cfb_inl_defd_aligned_msg_pt;
typedef mk_lib_crypto_mode_cfb_inl_defd_aligned_msg_t const* mk_lib_crypto_mode_cfb_inl_defd_aligned_msg_pct;

typedef mk_lib_crypto_mode_cfb_inl_defd_alg_key_t mk_lib_crypto_mode_cfb_inl_defd_key_t;
typedef mk_lib_crypto_mode_cfb_inl_defd_key_t const mk_lib_crypto_mode_cfb_inl_defd_key_ct;
typedef mk_lib_crypto_mode_cfb_inl_defd_key_t* mk_lib_crypto_mode_cfb_inl_defd_key_pt;
typedef mk_lib_crypto_mode_cfb_inl_defd_key_t const* mk_lib_crypto_mode_cfb_inl_defd_key_pct;

struct mk_lib_crypto_mode_cfb_inl_defd_msg_s
{
	mk_lib_crypto_mode_cfb_inl_defd_aligned_msg_t m_data;
};
typedef struct mk_lib_crypto_mode_cfb_inl_defd_msg_s mk_lib_crypto_mode_cfb_inl_defd_msg_t;
typedef mk_lib_crypto_mode_cfb_inl_defd_msg_t const mk_lib_crypto_mode_cfb_inl_defd_msg_ct;
typedef mk_lib_crypto_mode_cfb_inl_defd_msg_t* mk_lib_crypto_mode_cfb_inl_defd_msg_pt;
typedef mk_lib_crypto_mode_cfb_inl_defd_msg_t const* mk_lib_crypto_mode_cfb_inl_defd_msg_pct;

struct mk_lib_crypto_mode_cfb_inl_defd_s
{
	mk_lib_crypto_mode_cfb_inl_defd_alg_msg_t m_iv;
};
typedef struct mk_lib_crypto_mode_cfb_inl_defd_s mk_lib_crypto_mode_cfb_inl_defd_t;
typedef mk_lib_crypto_mode_cfb_inl_defd_t const mk_lib_crypto_mode_cfb_inl_defd_ct;
typedef mk_lib_crypto_mode_cfb_inl_defd_t* mk_lib_crypto_mode_cfb_inl_defd_pt;
typedef mk_lib_crypto_mode_cfb_inl_defd_t const* mk_lib_crypto_mode_cfb_inl_defd_pct;


mk_lib_crypto_mode_cfb_inl_defd_constexpr mk_lang_jumbo void mk_lib_crypto_mode_cfb_inl_defd_init(mk_lib_crypto_mode_cfb_inl_defd_pt const cfb, mk_lib_crypto_mode_cfb_inl_defd_alg_msg_pct const msg) mk_lang_noexcept;
mk_lib_crypto_mode_cfb_inl_defd_constexpr mk_lang_jumbo void mk_lib_crypto_mode_cfb_inl_defd_encrypt(mk_lib_crypto_mode_cfb_inl_defd_pt const cfb, mk_lib_crypto_mode_cfb_inl_defd_key_pct const key, mk_lib_crypto_mode_cfb_inl_defd_msg_pct const input, mk_lib_crypto_mode_cfb_inl_defd_msg_pt const output) mk_lang_noexcept;
mk_lib_crypto_mode_cfb_inl_defd_constexpr mk_lang_jumbo void mk_lib_crypto_mode_cfb_inl_defd_decrypt(mk_lib_crypto_mode_cfb_inl_defd_pt const cfb, mk_lib_crypto_mode_cfb_inl_defd_key_pct const key, mk_lib_crypto_mode_cfb_inl_defd_msg_pct const input, mk_lib_crypto_mode_cfb_inl_defd_msg_pt const output) mk_lang_noexcept;


#include "mk_lib_crypto_mode_cfb_inl_defu.h"
