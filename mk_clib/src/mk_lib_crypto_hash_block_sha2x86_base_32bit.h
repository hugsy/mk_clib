#ifndef mk_include_guard_mk_lib_crypto_hash_block_sha2x86_base_32bit
#define mk_include_guard_mk_lib_crypto_hash_block_sha2x86_base_32bit


#include "mk_lang_alignas.h"
#include "mk_lang_constexpr.h"
#include "mk_lang_jumbo.h"
#include "mk_lang_noexcept.h"
#include "mk_lang_stringify.h"
#include "mk_lang_types.h"
#include "mk_sl_uint32.h"
#include "mk_sl_uint64.h"
#include "mk_sl_uint8.h"


#define mk_lib_crypto_hash_block_sha2x86_base_32bit_block_len 64
#define mk_lib_crypto_hash_block_sha2x86_base_32bit_digest_len 32


union mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned64_u
{
	mk_lang_alignas(64) mk_sl_cui_uint8_t m_uint8s[64];
	mk_sl_cui_uint32_t m_align;
};
typedef union mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned64_u mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned64_t;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned64_t const mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned64_ct;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned64_t* mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned64_pt;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned64_t const* mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned64_pct;

union mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned32_u
{
	mk_lang_alignas(32) mk_sl_cui_uint8_t m_uint8s[32];
	mk_lang_types_ulllong_t m_ulllong;
};
typedef union mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned32_u mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned32_t;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned32_t const mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned32_ct;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned32_t* mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned32_pt;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned32_t const* mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned32_pct;


struct mk_lib_crypto_hash_block_sha2x86_base_32bit_s
{
	mk_sl_cui_uint32_t m_state[8];
	mk_sl_cui_uint64_t m_len;
};
typedef struct mk_lib_crypto_hash_block_sha2x86_base_32bit_s mk_lib_crypto_hash_block_sha2x86_base_32bit_t;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_t const mk_lib_crypto_hash_block_sha2x86_base_32bit_ct;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_t* mk_lib_crypto_hash_block_sha2x86_base_32bit_pt;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_t const* mk_lib_crypto_hash_block_sha2x86_base_32bit_pct;

typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned64_t mk_lib_crypto_hash_block_sha2x86_base_32bit_block_t;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_block_t const mk_lib_crypto_hash_block_sha2x86_base_32bit_block_ct;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_block_t* mk_lib_crypto_hash_block_sha2x86_base_32bit_block_pt;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_block_t const* mk_lib_crypto_hash_block_sha2x86_base_32bit_block_pct;

typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_aligned32_t mk_lib_crypto_hash_block_sha2x86_base_32bit_digest_t;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_digest_t const mk_lib_crypto_hash_block_sha2x86_base_32bit_digest_ct;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_digest_t* mk_lib_crypto_hash_block_sha2x86_base_32bit_digest_pt;
typedef mk_lib_crypto_hash_block_sha2x86_base_32bit_digest_t const* mk_lib_crypto_hash_block_sha2x86_base_32bit_digest_pct;

mk_lang_jumbo void mk_lib_crypto_hash_block_sha2x86_base_32bit_init(mk_lib_crypto_hash_block_sha2x86_base_32bit_pt const sha2_32bit, mk_sl_cui_uint32_pct const iv) mk_lang_noexcept;
mk_lang_jumbo void mk_lib_crypto_hash_block_sha2x86_base_32bit_append_blocks(mk_lib_crypto_hash_block_sha2x86_base_32bit_pt const sha2_32bit, mk_lib_crypto_hash_block_sha2x86_base_32bit_block_pct const pblocks, mk_lang_types_usize_t const nblocks) mk_lang_noexcept;
mk_lang_jumbo void mk_lib_crypto_hash_block_sha2x86_base_32bit_finish(mk_lib_crypto_hash_block_sha2x86_base_32bit_pt const sha2_32bit, mk_lib_crypto_hash_block_sha2x86_base_32bit_block_pt const block, int const idx, mk_lib_crypto_hash_block_sha2x86_base_32bit_digest_pt const digest) mk_lang_noexcept;


#if mk_lang_jumbo_want == 1
#include "mk_lib_crypto_hash_block_sha2x86_base_32bit.c"
#endif
#endif
