#ifndef mk_include_guard_mk_lib_crypto_xof_block_shake_128
#define mk_include_guard_mk_lib_crypto_xof_block_shake_128


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


#define mk_lib_crypto_xof_block_shake_128_block_len 168
#define mk_lib_crypto_xof_block_shake_128_name_def SHAKE128
mk_lang_constexpr_static_inline char const mk_lib_crypto_xof_block_shake_128_name_str[] = mk_lang_stringify(mk_lib_crypto_xof_block_shake_128_name_def);
mk_lang_constexpr_static_inline int const mk_lib_crypto_xof_block_shake_128_name_str_len = ((int)(sizeof(mk_lib_crypto_xof_block_shake_128_name_str) - 1));


union mk_lib_crypto_xof_block_shake_128_aligned168_u
{
	mk_lang_alignas(mk_sl_cui_uint64_t) mk_sl_cui_uint8_t m_uint8s[168];
	mk_sl_cui_uint64_t m_align;
};
typedef union mk_lib_crypto_xof_block_shake_128_aligned168_u mk_lib_crypto_xof_block_shake_128_aligned168_t;
typedef mk_lib_crypto_xof_block_shake_128_aligned168_t const mk_lib_crypto_xof_block_shake_128_aligned168_ct;
typedef mk_lib_crypto_xof_block_shake_128_aligned168_t* mk_lib_crypto_xof_block_shake_128_aligned168_pt;
typedef mk_lib_crypto_xof_block_shake_128_aligned168_t const* mk_lib_crypto_xof_block_shake_128_aligned168_pct;

union mk_lib_crypto_xof_block_shake_128_aligned1_u
{
	mk_sl_cui_uint8_t m_uint8s[sizeof(mk_lang_types_ulllong_t)];
	mk_lang_types_ulllong_t m_ulllong;
};
typedef union mk_lib_crypto_xof_block_shake_128_aligned1_u mk_lib_crypto_xof_block_shake_128_aligned1_t;
typedef mk_lib_crypto_xof_block_shake_128_aligned1_t const mk_lib_crypto_xof_block_shake_128_aligned1_ct;
typedef mk_lib_crypto_xof_block_shake_128_aligned1_t* mk_lib_crypto_xof_block_shake_128_aligned1_pt;
typedef mk_lib_crypto_xof_block_shake_128_aligned1_t const* mk_lib_crypto_xof_block_shake_128_aligned1_pct;


struct mk_lib_crypto_xof_block_shake_128_s
{
	mk_lib_crypto_hash_block_sha3_base_state_t m_sha3;
};
typedef struct mk_lib_crypto_xof_block_shake_128_s mk_lib_crypto_xof_block_shake_128_t;
typedef mk_lib_crypto_xof_block_shake_128_t const mk_lib_crypto_xof_block_shake_128_ct;
typedef mk_lib_crypto_xof_block_shake_128_t* mk_lib_crypto_xof_block_shake_128_pt;
typedef mk_lib_crypto_xof_block_shake_128_t const* mk_lib_crypto_xof_block_shake_128_pct;

typedef mk_lib_crypto_xof_block_shake_128_aligned168_t mk_lib_crypto_xof_block_shake_128_block_t;
typedef mk_lib_crypto_xof_block_shake_128_block_t const mk_lib_crypto_xof_block_shake_128_block_ct;
typedef mk_lib_crypto_xof_block_shake_128_block_t* mk_lib_crypto_xof_block_shake_128_block_pt;
typedef mk_lib_crypto_xof_block_shake_128_block_t const* mk_lib_crypto_xof_block_shake_128_block_pct;

typedef mk_lib_crypto_xof_block_shake_128_aligned1_t mk_lib_crypto_xof_block_shake_128_digest_t;
typedef mk_lib_crypto_xof_block_shake_128_digest_t const mk_lib_crypto_xof_block_shake_128_digest_ct;
typedef mk_lib_crypto_xof_block_shake_128_digest_t* mk_lib_crypto_xof_block_shake_128_digest_pt;
typedef mk_lib_crypto_xof_block_shake_128_digest_t const* mk_lib_crypto_xof_block_shake_128_digest_pct;

mk_lang_constexpr mk_lang_jumbo void mk_lib_crypto_xof_block_shake_128_init(mk_lib_crypto_xof_block_shake_128_pt const shake_128) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo void mk_lib_crypto_xof_block_shake_128_append_blocks(mk_lib_crypto_xof_block_shake_128_pt const shake_128, mk_lib_crypto_xof_block_shake_128_block_pct const pblocks, mk_lang_types_usize_t const nblocks) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo void mk_lib_crypto_xof_block_shake_128_finish(mk_lib_crypto_xof_block_shake_128_pt const shake_128, mk_lib_crypto_xof_block_shake_128_block_pt const block, int const idx, mk_lang_types_usize_t const digest_len, mk_lib_crypto_xof_block_shake_128_digest_pt const digest) mk_lang_noexcept;


#if mk_lang_jumbo_want == 1
#include "mk_lib_crypto_xof_block_shake_128.c"
#endif
#endif
