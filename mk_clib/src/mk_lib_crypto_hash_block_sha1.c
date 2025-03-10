#include "mk_lib_crypto_hash_block_sha1.h"

/* nist fips pub 180-1 */
/* nist fips pub 180-2 */
/* nist fips pub 180-3 */
/* nist fips pub 180-4 */

#include "mk_lang_alignof.h"
#include "mk_lang_assert.h"
#include "mk_lang_constexpr.h"
#include "mk_lang_cpuid.h"
#include "mk_lang_jumbo.h"
#include "mk_lang_msvc.h"
#include "mk_lang_noexcept.h"
#include "mk_lang_types.h"
#include "mk_lib_crypto_hash_block_sha1c.h"
// TODO if intel
// #include "mk_lib_crypto_hash_block_sha1x86.h"
#include "mk_sl_uint32.h"

#define mk_lib_crypto_hash_block_sha1_conditions_1   \
	(                                                  \
			(sizeof(mk_sl_cui_uint32_t) == sizeof(int)) && \
			(sizeof(mk_sl_cui_uint32_t) == 4) &&           \
			(mk_lang_alignof(mk_sl_cui_uint32_t) == 4) &&  \
			(mk_lang_cpuid_has_sse2()) &&                  \
			(mk_lang_cpuid_has_ssse3()) &&                 \
			(mk_lang_cpuid_has_sse41()) &&                 \
			(mk_lang_cpuid_has_sha()) &&                   \
			1)
#define mk_lib_crypto_hash_block_sha1_conditions_2 ((((mk_lang_types_uintptr_t)(&sha1->m_data.m_sha1x86.m_state[0])) & 0xf) == 0)
#define mk_lib_crypto_hash_block_sha1_conditions_3 ((((mk_lang_types_uintptr_t)(pblocks)) & 0xf) == 0)
#define mk_lib_crypto_hash_block_sha1_conditions_4 ((((mk_lang_types_uintptr_t)(block)) & 0xf) == 0)

mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_lib_crypto_hash_block_sha1_init(mk_lib_crypto_hash_block_sha1_pt const sha1) mk_lang_noexcept
{
	mk_lang_assert(sha1);

	// #if defined _MSC_VER && _MSC_VER >= mk_lang_msvc_ver_2015
	// #if !mk_lang_constexpr_is_constant_evaluated
	// if(mk_lib_crypto_hash_block_sha1_conditions_1 && mk_lib_crypto_hash_block_sha1_conditions_2)
	// #else
	// if(!mk_lang_constexpr_is_constant_evaluated_test && mk_lib_crypto_hash_block_sha1_conditions_1 && mk_lib_crypto_hash_block_sha1_conditions_2)
	// #endif
	// {
	// 	mk_lib_crypto_hash_block_sha1x86_init(&sha1->m_data.m_sha1x86);
	// }
	// else
	// #endif
	{
		mk_lib_crypto_hash_block_sha1c_init(&sha1->m_data.m_sha1c);
	}
}

mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_lib_crypto_hash_block_sha1_append_blocks(mk_lib_crypto_hash_block_sha1_pt const sha1, mk_lib_crypto_hash_block_sha1_block_pct const pblocks, mk_lang_types_usize_t const nblocks) mk_lang_noexcept
{
	mk_lang_assert(sha1);

	// #if defined _MSC_VER && _MSC_VER >= mk_lang_msvc_ver_2015
	// #if !mk_lang_constexpr_is_constant_evaluated
	// if(mk_lib_crypto_hash_block_sha1_conditions_1 && mk_lib_crypto_hash_block_sha1_conditions_2 && mk_lib_crypto_hash_block_sha1_conditions_3)
	// #else
	// if(!mk_lang_constexpr_is_constant_evaluated_test && mk_lib_crypto_hash_block_sha1_conditions_1 && mk_lib_crypto_hash_block_sha1_conditions_2 && mk_lib_crypto_hash_block_sha1_conditions_3)
	// #endif
	// {
	// 	mk_lib_crypto_hash_block_sha1x86_append_blocks(&sha1->m_data.m_sha1x86, ((mk_lib_crypto_hash_block_sha1x86_block_pct)(pblocks)), nblocks);
	// }
	// else
	// #endif
	{
		mk_lib_crypto_hash_block_sha1c_append_blocks(&sha1->m_data.m_sha1c, pblocks, nblocks);
	}
}

mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_lib_crypto_hash_block_sha1_finish(mk_lib_crypto_hash_block_sha1_pt const sha1, mk_lib_crypto_hash_block_sha1_block_pt const block, int const idx, mk_lib_crypto_hash_block_sha1_digest_pt const digest) mk_lang_noexcept
{
	mk_lang_assert(sha1);

	// #if defined _MSC_VER && _MSC_VER >= mk_lang_msvc_ver_2015
	// #if !mk_lang_constexpr_is_constant_evaluated
	// if(mk_lib_crypto_hash_block_sha1_conditions_1 && mk_lib_crypto_hash_block_sha1_conditions_2 && mk_lib_crypto_hash_block_sha1_conditions_4)
	// #else
	// if(!mk_lang_constexpr_is_constant_evaluated_test && mk_lib_crypto_hash_block_sha1_conditions_1 && mk_lib_crypto_hash_block_sha1_conditions_2 && mk_lib_crypto_hash_block_sha1_conditions_4)
	// #endif
	// {
	// 	mk_lib_crypto_hash_block_sha1x86_finish(&sha1->m_data.m_sha1x86, ((mk_lib_crypto_hash_block_sha1x86_block_pt)(block)), idx, ((mk_lib_crypto_hash_block_sha1x86_digest_pt)(digest)));
	// }
	// else
	// #endif
	{
		mk_lib_crypto_hash_block_sha1c_finish(&sha1->m_data.m_sha1c, block, idx, digest);
	}
}
