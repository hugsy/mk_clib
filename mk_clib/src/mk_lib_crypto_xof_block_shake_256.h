#ifndef mk_include_guard_mk_lib_crypto_xof_block_shake_256
#define mk_include_guard_mk_lib_crypto_xof_block_shake_256


/* nist fips pub 202 */


#include "mk_lang_alignas.h"
#include "mk_lang_constexpr.h"
#include "mk_lang_jumbo.h"
#include "mk_lang_noexcept.h"
#include "mk_lang_pow2.h"
#include "mk_lang_stringify.h"
#include "mk_lang_types.h"
#include "mk_lib_crypto_hash_block_sha3_base.h"
#include "mk_sl_uint8.h"


#define mk_lib_crypto_xof_block_shake_256_block_len 136
#define mk_lib_crypto_xof_block_shake_256_name_def SHAKE256
mk_lang_constexpr_static_inline char const mk_lib_crypto_xof_block_shake_256_name_str[] = mk_lang_stringify(mk_lib_crypto_xof_block_shake_256_name_def);
mk_lang_constexpr_static_inline int const mk_lib_crypto_xof_block_shake_256_name_str_len = ((int)(sizeof(mk_lib_crypto_xof_block_shake_256_name_str) - 1));


union mk_lib_crypto_xof_block_shake_256_aligned136_u
{
	mk_lang_alignas(mk_sl_cui_uint64_t) mk_sl_cui_uint8_t m_uint8s[136];
	mk_sl_cui_uint64_t m_align;
};
typedef union mk_lib_crypto_xof_block_shake_256_aligned136_u mk_lib_crypto_xof_block_shake_256_aligned136_t;
typedef mk_lib_crypto_xof_block_shake_256_aligned136_t const mk_lib_crypto_xof_block_shake_256_aligned136_ct;
typedef mk_lib_crypto_xof_block_shake_256_aligned136_t* mk_lib_crypto_xof_block_shake_256_aligned136_pt;
typedef mk_lib_crypto_xof_block_shake_256_aligned136_t const* mk_lib_crypto_xof_block_shake_256_aligned136_pct;

union mk_lib_crypto_xof_block_shake_256_aligned1_u
{
	mk_sl_cui_uint8_t m_uint8s[sizeof(mk_lang_types_ulllong_t)];
	mk_lang_types_ulllong_t m_ulllong;
};
typedef union mk_lib_crypto_xof_block_shake_256_aligned1_u mk_lib_crypto_xof_block_shake_256_aligned1_t;
typedef mk_lib_crypto_xof_block_shake_256_aligned1_t const mk_lib_crypto_xof_block_shake_256_aligned1_ct;
typedef mk_lib_crypto_xof_block_shake_256_aligned1_t* mk_lib_crypto_xof_block_shake_256_aligned1_pt;
typedef mk_lib_crypto_xof_block_shake_256_aligned1_t const* mk_lib_crypto_xof_block_shake_256_aligned1_pct;


struct mk_lib_crypto_xof_block_shake_256_s
{
	mk_lib_crypto_hash_block_sha3_base_state_t m_sha3;
};
typedef struct mk_lib_crypto_xof_block_shake_256_s mk_lib_crypto_xof_block_shake_256_t;
typedef mk_lib_crypto_xof_block_shake_256_t const mk_lib_crypto_xof_block_shake_256_ct;
typedef mk_lib_crypto_xof_block_shake_256_t* mk_lib_crypto_xof_block_shake_256_pt;
typedef mk_lib_crypto_xof_block_shake_256_t const* mk_lib_crypto_xof_block_shake_256_pct;

typedef mk_lib_crypto_xof_block_shake_256_aligned136_t mk_lib_crypto_xof_block_shake_256_block_t;
typedef mk_lib_crypto_xof_block_shake_256_block_t const mk_lib_crypto_xof_block_shake_256_block_ct;
typedef mk_lib_crypto_xof_block_shake_256_block_t* mk_lib_crypto_xof_block_shake_256_block_pt;
typedef mk_lib_crypto_xof_block_shake_256_block_t const* mk_lib_crypto_xof_block_shake_256_block_pct;

typedef mk_lib_crypto_xof_block_shake_256_aligned1_t mk_lib_crypto_xof_block_shake_256_digest_t;
typedef mk_lib_crypto_xof_block_shake_256_digest_t const mk_lib_crypto_xof_block_shake_256_digest_ct;
typedef mk_lib_crypto_xof_block_shake_256_digest_t* mk_lib_crypto_xof_block_shake_256_digest_pt;
typedef mk_lib_crypto_xof_block_shake_256_digest_t const* mk_lib_crypto_xof_block_shake_256_digest_pct;

mk_lang_constexpr mk_lang_jumbo void mk_lib_crypto_xof_block_shake_256_init(mk_lib_crypto_xof_block_shake_256_pt const shake_256) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo void mk_lib_crypto_xof_block_shake_256_append_blocks(mk_lib_crypto_xof_block_shake_256_pt const shake_256, mk_lib_crypto_xof_block_shake_256_block_pct const pblocks, mk_lang_types_usize_t const nblocks) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo void mk_lib_crypto_xof_block_shake_256_finish(mk_lib_crypto_xof_block_shake_256_pt const shake_256, mk_lib_crypto_xof_block_shake_256_block_pt const block, int const idx, mk_lang_types_usize_t const digest_len, mk_lib_crypto_xof_block_shake_256_digest_pt const digest) mk_lang_noexcept;


#if mk_lang_jumbo_want == 1
#include "mk_lib_crypto_xof_block_shake_256.c"
#endif
#endif
