#include "mk_lib_crypto_mac_hmac_sha1x86_test.hpp"
#undef mk_lang_jumbo_want
#define mk_lang_jumbo_want 1

#include "mk_lang_constexpr.h"
#include "mk_lang_cpp.h"
#include "mk_lang_msvc.h"
#include "mk_lang_noexcept.h"

#if !mk_lang_constexpr_is_constant_evaluated && defined _MSC_VER && _MSC_VER >= mk_lang_msvc_ver_2015

#include "mk_lang_assert.h"
#include "mk_lang_crash.h"
#include "mk_lang_jumbo.h"
#include "mk_lang_likely.h"
#include "mk_lang_nodiscard.h"
#include "mk_lang_static_assert.h"
#include "mk_lang_types.h"
#include "mk_lang_version.h"
#include "mk_lib_cpp_constexpr.hpp"
#include "mk_lib_crypto_mac_hmac_sha1x86.h"
#include "mk_sl_uint8.h"


mk_lang_extern_c void mk_lib_crypto_mac_hmac_sha1x86_test(void) mk_lang_noexcept
{
	#define msg_1 "Sample message for keylen=blocklen"
	#define msg_2 "Sample message for keylen<blocklen"
	#define msg_3 "Sample message for keylen=blocklen"
	#define msg_4 "Sample message for keylen<blocklen, with truncated tag"

	#define key_1 "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f"
	#define key_2 "000102030405060708090a0b0c0d0e0f10111213"
	#define key_3 "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f303132333435363738393a3b3c3d3e3f404142434445464748494a4b4c4d4e4f505152535455565758595a5b5c5d5e5f60616263"
	#define key_4 "000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f202122232425262728292a2b2c2d2e2f30"

	#define mac_1 "5fd596ee78d5553c8ff4e72d266dfd192366da29"
	#define mac_2 "4c99ff0cb1b31bd33f8431dbaf4d17fcd356a807"
	#define mac_3 "2d51b2f7750e410584662e38f133435f4c4fd42a"
	#define mac_4 "fe3529565cd8e28c5fa79eac"

	#define test(x) if(!(x)) { mk_lang_unlikely mk_lang_crash(); } ((void)(0))

	static char const* const s_msgs[] =
	{
		msg_1,
		msg_2,
		msg_3,
		msg_4,
	};

	static int const s_msg_lens[] =
	{
		((int)(sizeof(msg_1) / sizeof(msg_1[0]) - 1)),
		((int)(sizeof(msg_2) / sizeof(msg_2[0]) - 1)),
		((int)(sizeof(msg_3) / sizeof(msg_3[0]) - 1)),
		((int)(sizeof(msg_4) / sizeof(msg_4[0]) - 1)),
	};

	static char const* const s_keys[] =
	{
		key_1,
		key_2,
		key_3,
		key_4,
	};

	static int const s_key_lens[] =
	{
		((int)(sizeof(key_1) / sizeof(key_1[0]) - 1)) / 2,
		((int)(sizeof(key_2) / sizeof(key_2[0]) - 1)) / 2,
		((int)(sizeof(key_3) / sizeof(key_3[0]) - 1)) / 2,
		((int)(sizeof(key_4) / sizeof(key_4[0]) - 1)) / 2,
	};

	static char const* const s_macs[] =
	{
		mac_1,
		mac_2,
		mac_3,
		mac_4,
	};

	static int const s_mac_lens[] =
	{
		((int)(sizeof(mac_1) / sizeof(mac_1[0]) - 1)) / 2,
		((int)(sizeof(mac_2) / sizeof(mac_2[0]) - 1)) / 2,
		((int)(sizeof(mac_3) / sizeof(mac_3[0]) - 1)) / 2,
		((int)(sizeof(mac_4) / sizeof(mac_4[0]) - 1)) / 2,
	};

	int n;
	int i;
	int m;
	mk_sl_cui_uint8_t key[100];
	int j;
	mk_lang_types_uchar_t hi;
	mk_lang_types_uchar_t lo;
	mk_lang_types_uchar_t byte;
	mk_sl_cui_uint8_t msg[64];
	mk_lib_crypto_mac_hmac_sha1x86_t hmac;
	mk_lib_crypto_hash_block_sha1x86_digest_t digest;
	mk_sl_cui_uint8_t u8;

	mk_lang_static_assert(sizeof(s_msgs) / sizeof(s_msgs[0]) == sizeof(s_msg_lens) / sizeof(s_msg_lens[0]));
	mk_lang_static_assert(sizeof(s_msgs) / sizeof(s_msgs[0]) == sizeof(s_keys) / sizeof(s_keys[0]));
	mk_lang_static_assert(sizeof(s_msgs) / sizeof(s_msgs[0]) == sizeof(s_key_lens) / sizeof(s_key_lens[0]));
	mk_lang_static_assert(sizeof(s_msgs) / sizeof(s_msgs[0]) == sizeof(s_macs) / sizeof(s_macs[0]));

	n = ((int)(sizeof(s_msgs) / sizeof(s_msgs[0])));
	for(i = 0; i != n; ++i)
	{
		m = s_key_lens[i];
		mk_lang_assert(((int)(sizeof(key) / sizeof(key[0]))) >= m);
		for(j = 0; j != m; ++j)
		{
			hi = mk_lib_cpp_constexpr_char_to_nibble(s_keys[i][j * 2 + 0]); mk_lang_assert(hi >= 0x0 && hi <= 0xf);
			lo = mk_lib_cpp_constexpr_char_to_nibble(s_keys[i][j * 2 + 1]); mk_lang_assert(lo >= 0x0 && lo <= 0xf);
			byte = ((mk_lang_types_uchar_t)(((mk_lang_types_uchar_t)(hi << 4)) | ((mk_lang_types_uchar_t)(lo << 0))));
			mk_sl_cui_uint8_from_bi_uchar(&key[j], &byte);
		}
		m = s_msg_lens[i];
		mk_lang_assert(((int)(sizeof(msg) / sizeof(msg[0]))) >= m);
		for(j = 0; j != m; ++j)
		{
			mk_sl_cui_uint8_from_bi_pchar(&msg[j], &s_msgs[i][j]);
		}
		mk_lib_crypto_mac_hmac_sha1x86_init(&hmac, &key[0], s_key_lens[i]);
		mk_lib_crypto_mac_hmac_sha1x86_append(&hmac, &msg[0], s_msg_lens[i]);
		mk_lib_crypto_mac_hmac_sha1x86_finish(&hmac, &digest);
		m = s_mac_lens[i];
		for(j = 0; j != m; ++j)
		{
			hi = mk_lib_cpp_constexpr_char_to_nibble(s_macs[i][j * 2 + 0]); mk_lang_assert(hi >= 0x0 && hi <= 0xf);
			lo = mk_lib_cpp_constexpr_char_to_nibble(s_macs[i][j * 2 + 1]); mk_lang_assert(lo >= 0x0 && lo <= 0xf);
			byte = ((mk_lang_types_uchar_t)(((mk_lang_types_uchar_t)(hi << 4)) | ((mk_lang_types_uchar_t)(lo << 0))));
			mk_sl_cui_uint8_from_bi_uchar(&u8, &byte);
			test(mk_sl_cui_uint8_eq(&digest.m_uint8s[j], &u8));
		}
	}

	#undef test

	#undef msg_1
	#undef msg_2
	#undef msg_3
	#undef msg_4

	#undef key_1
	#undef key_2
	#undef key_3
	#undef key_4

	#undef mac_1
	#undef mac_2
	#undef mac_3
	#undef mac_4
}

#else

mk_lang_extern_c void mk_lib_crypto_mac_hmac_sha1x86_test(void) mk_lang_noexcept
{
}

#endif
