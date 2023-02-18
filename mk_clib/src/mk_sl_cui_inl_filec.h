#include "mk_lang_assert.h"
#include "mk_lang_bool.h"
#include "mk_lang_for_constants.h"
#include "mk_lang_jumbo.h"
#include "mk_lang_max.h"
#include "mk_lang_nodiscard.h"
#include "mk_lang_noexcept.h"
#include "mk_lang_static_assert.h"


#include "mk_sl_cui_inl_defd.h"


mk_lang_jumbo void mk_sl_cui_inl_defd_set_zero(mk_sl_cui_inl_defd_t* const x) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(x);
	mk_sl_cui_inl_defd_base_set_zero(&x->m_data[0]);
#else
	int i;

	mk_lang_assert(x);

	for(i = 0; i != mk_sl_cui_inl_defd_count; ++i)
	{
		mk_sl_cui_inl_defd_base_set_zero(&x->m_data[mk_sl_cui_inl_defd_idx(i)]);
	}
#endif
}

mk_lang_jumbo void mk_sl_cui_inl_defd_set_max(mk_sl_cui_inl_defd_t* const x) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(x);
	mk_sl_cui_inl_defd_base_set_max(&x->m_data[0]);
#else
	int i;

	mk_lang_assert(x);

	for(i = 0; i != mk_sl_cui_inl_defd_count; ++i)
	{
		mk_sl_cui_inl_defd_base_set_max(&x->m_data[mk_sl_cui_inl_defd_idx(i)]);
	}
#endif
}

mk_lang_jumbo void mk_sl_cui_inl_defd_set_one(mk_sl_cui_inl_defd_t* const x) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(x);
	mk_sl_cui_inl_defd_base_set_one(&x->m_data[0]);
#else
	int i;

	mk_lang_assert(x);

	mk_sl_cui_inl_defd_base_set_one(&x->m_data[mk_sl_cui_inl_defd_idx(0)]);
	for(i = 1; i != mk_sl_cui_inl_defd_count; ++i)
	{
		mk_sl_cui_inl_defd_base_set_zero(&x->m_data[mk_sl_cui_inl_defd_idx(i)]);
	}
#endif
}

mk_lang_jumbo void mk_sl_cui_inl_defd_set_bit(mk_sl_cui_inl_defd_t* const x, int const bit_idx) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(x);
	mk_sl_cui_inl_defd_base_set_bit(&x->m_data[0], bit_idx);
#else
	mk_lang_assert(x);
	mk_lang_assert(bit_idx >= 0 && bit_idx < ((int)(mk_sl_cui_inl_defd_bits)));

	mk_sl_cui_inl_defd_set_zero(x);
	mk_sl_cui_inl_defd_base_set_bit(&x->m_data[mk_sl_cui_inl_defd_idx(bit_idx / mk_sl_cui_inl_defd_base_bits)], bit_idx % mk_sl_cui_inl_defd_base_bits);
#endif
}

mk_lang_jumbo void mk_sl_cui_inl_defd_set_mask(mk_sl_cui_inl_defd_t* const x, int const bits_count) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(x);
	mk_sl_cui_inl_defd_base_set_mask(&x->m_data[0], bits_count);
#else
	int i;

	mk_lang_assert(x);
	mk_lang_assert(bits_count >= 1 && bits_count <= ((int)(mk_sl_cui_inl_defd_bits)));

	for(i = 0; i != bits_count / mk_sl_cui_inl_defd_base_bits; ++i)
	{
		mk_sl_cui_inl_defd_base_set_max(&x->m_data[mk_sl_cui_inl_defd_idx(i)]);
	}
	if(bits_count % mk_sl_cui_inl_defd_base_bits != 0)
	{
		mk_sl_cui_inl_defd_base_set_mask(&x->m_data[mk_sl_cui_inl_defd_idx(i)], bits_count % mk_sl_cui_inl_defd_base_bits);
		++i;
	}
	for(; i != mk_sl_cui_inl_defd_count; ++i)
	{
		mk_sl_cui_inl_defd_base_set_zero(&x->m_data[mk_sl_cui_inl_defd_idx(i)]);
	}
#endif
}

#define mk_lang_forb1_id mk_lang_for_constants_bi
#define mk_lang_forb_file "mk_sl_cui_inl_tofrom_bi_inl_filec.h"
#define mk_sl_cui_inl_tofrom_bi_for_bi mk_lang_forb_bi
#include "mk_lang_forb1.h"
#undef mk_lang_forb1_id
#undef mk_lang_forb_file
#undef mk_sl_cui_inl_tofrom_bi_for_bi

#define mk_lang_forb2_id mk_lang_for_constants_bui
#define mk_lang_forb1_id mk_lang_for_constants_endian
#define mk_lang_forb_file "mk_sl_cui_inl_tofrom_buis_inl_filec.h"
#define mk_sl_cui_inl_tofrom_buis_for_bui mk_lang_forb_bui
#define mk_sl_cui_inl_tofrom_buis_for_endian mk_lang_forb_endian
#include "mk_lang_forb2.h"
#undef mk_lang_forb2_id
#undef mk_lang_forb1_id
#undef mk_lang_forb_file
#undef mk_sl_cui_inl_tofrom_buis_for_bui
#undef mk_sl_cui_inl_tofrom_buis_for_endian

mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_sl_cui_inl_defd_is_zero(mk_sl_cui_inl_defd_t const* const x) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(x);
	return mk_sl_cui_inl_defd_base_is_zero(&x->m_data[0]);
#else
	int i;

	mk_lang_assert(x);

	for(i = 0; i != mk_sl_cui_inl_defd_count; ++i)
	{
		if(!mk_sl_cui_inl_defd_base_is_zero(&x->m_data[mk_sl_cui_inl_defd_idx(i)]))
		{
			return mk_lang_false;
		}
	}
	return mk_lang_true;
#endif
}

mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_sl_cui_inl_defd_is_max(mk_sl_cui_inl_defd_t const* const x) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(x);
	return mk_sl_cui_inl_defd_base_is_max(&x->m_data[0]);
#else
	int i;

	mk_lang_assert(x);

	for(i = 0; i != mk_sl_cui_inl_defd_count; ++i)
	{
		if(!mk_sl_cui_inl_defd_base_is_max(&x->m_data[mk_sl_cui_inl_defd_idx(i)]))
		{
			return mk_lang_false;
		}
	}
	return mk_lang_true;
#endif
}

mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_sl_cui_inl_defd_eq(mk_sl_cui_inl_defd_t const* const a, mk_sl_cui_inl_defd_t const* const b) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(a);
	mk_lang_assert(b);
	return mk_sl_cui_inl_defd_base_eq(&a->m_data[0], &b->m_data[0]);
#else
	if(a == b)
	{
		return mk_lang_true;
	}
	else
	{
		int i;

		mk_lang_assert(a);
		mk_lang_assert(b);

		for(i = 0; i != mk_sl_cui_inl_defd_count; ++i)
		{
			if(!mk_sl_cui_inl_defd_base_eq(&a->m_data[mk_sl_cui_inl_defd_idx(i)], &b->m_data[mk_sl_cui_inl_defd_idx(i)]))
			{
				return mk_lang_false;
			}
		}
		return mk_lang_true;
	}
#endif
}

mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_sl_cui_inl_defd_ne(mk_sl_cui_inl_defd_t const* const a, mk_sl_cui_inl_defd_t const* const b) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(a);
	mk_lang_assert(b);
	return mk_sl_cui_inl_defd_base_ne(&a->m_data[0], &b->m_data[0]);
#else
	if(a == b)
	{
		return mk_lang_false;
	}
	else
	{
		int i;

		mk_lang_assert(a);
		mk_lang_assert(b);

		for(i = 0; i != mk_sl_cui_inl_defd_count; ++i)
		{
			if(mk_sl_cui_inl_defd_base_ne(&a->m_data[mk_sl_cui_inl_defd_idx(i)], &b->m_data[mk_sl_cui_inl_defd_idx(i)]))
			{
				return mk_lang_true;
			}
		}
		return mk_lang_false;
	}
#endif
}

mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_sl_cui_inl_defd_lt(mk_sl_cui_inl_defd_t const* const a, mk_sl_cui_inl_defd_t const* const b) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(a);
	mk_lang_assert(b);
	return mk_sl_cui_inl_defd_base_lt(&a->m_data[0], &b->m_data[0]);
#else
	if(a == b)
	{
		return mk_lang_false;
	}
	else
	{
		int i;

		mk_lang_assert(a);
		mk_lang_assert(b);

		for(i = 0; i != mk_sl_cui_inl_defd_count; ++i)
		{
			if(mk_sl_cui_inl_defd_base_lt(&a->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)], &b->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)]))
			{
				return mk_lang_true;
			}
			else if(mk_sl_cui_inl_defd_base_lt(&b->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)], &a->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)]))
			{
				return mk_lang_false;
			}
		}
		return mk_lang_false;
	}
#endif
}

mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_sl_cui_inl_defd_le(mk_sl_cui_inl_defd_t const* const a, mk_sl_cui_inl_defd_t const* const b) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(a);
	mk_lang_assert(b);
	return mk_sl_cui_inl_defd_base_le(&a->m_data[0], &b->m_data[0]);
#else
	if(a == b)
	{
		return mk_lang_true;
	}
	else
	{
		int i;

		mk_lang_assert(a);
		mk_lang_assert(b);

		for(i = 0; i != mk_sl_cui_inl_defd_count; ++i)
		{
			if(mk_sl_cui_inl_defd_base_lt(&a->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)], &b->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)]))
			{
				return mk_lang_true;
			}
			else if(mk_sl_cui_inl_defd_base_lt(&b->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)], &a->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)]))
			{
				return mk_lang_false;
			}
		}
		return mk_lang_true;
	}
#endif
}

mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_sl_cui_inl_defd_gt(mk_sl_cui_inl_defd_t const* const a, mk_sl_cui_inl_defd_t const* const b) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(a);
	mk_lang_assert(b);
	return mk_sl_cui_inl_defd_base_gt(&a->m_data[0], &b->m_data[0]);
#else
	if(a == b)
	{
		return mk_lang_false;
	}
	else
	{
		int i;

		mk_lang_assert(a);
		mk_lang_assert(b);

		for(i = 0; i != mk_sl_cui_inl_defd_count; ++i)
		{
			if(mk_sl_cui_inl_defd_base_gt(&a->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)], &b->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)]))
			{
				return mk_lang_true;
			}
			else if(mk_sl_cui_inl_defd_base_gt(&b->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)], &a->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)]))
			{
				return mk_lang_false;
			}
		}
		return mk_lang_false;
	}
#endif
}

mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_sl_cui_inl_defd_ge(mk_sl_cui_inl_defd_t const* const a, mk_sl_cui_inl_defd_t const* const b) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(a);
	mk_lang_assert(b);
	return mk_sl_cui_inl_defd_base_ge(&a->m_data[0], &b->m_data[0]);
#else
	if(a == b)
	{
		return mk_lang_true;
	}
	else
	{
		int i;

		mk_lang_assert(a);
		mk_lang_assert(b);

		for(i = 0; i != mk_sl_cui_inl_defd_count; ++i)
		{
			if(mk_sl_cui_inl_defd_base_gt(&a->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)], &b->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)]))
			{
				return mk_lang_true;
			}
			else if(mk_sl_cui_inl_defd_base_gt(&b->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)], &a->m_data[mk_sl_cui_inl_defd_idx(mk_sl_cui_inl_defd_count - 1 - i)]))
			{
				return mk_lang_false;
			}
		}
		return mk_lang_true;
	}
#endif
}


mk_lang_jumbo void mk_sl_cui_inl_defd_inc2(mk_sl_cui_inl_defd_t const* const a, mk_sl_cui_inl_defd_t* const b) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(a);
	mk_lang_assert(b);
	mk_sl_cui_inl_defd_base_inc2(&a->m_data[0], &b->m_data[0]);
#else
	if(a == b)
	{
		mk_sl_cui_inl_defd_inc1(b);
	}
	else
	{
		int i;
		mk_lang_bool_t c;

		mk_lang_assert(a);
		mk_lang_assert(b);

		c = mk_lang_true;
		for(i = 0; i != mk_sl_cui_inl_defd_count - 1 && c; ++i)
		{
			mk_sl_cui_inl_defd_base_inc2(&a->m_data[mk_sl_cui_inl_defd_idx(i)], &b->m_data[mk_sl_cui_inl_defd_idx(i)]);
			c = mk_sl_cui_inl_defd_base_is_zero(&b->m_data[mk_sl_cui_inl_defd_idx(i)]);
		}
		if(c)
		{
			mk_sl_cui_inl_defd_base_inc2(&a->m_data[mk_sl_cui_inl_defd_idx(i)], &b->m_data[mk_sl_cui_inl_defd_idx(i)]);
			++i;
		}
		for(; i != mk_sl_cui_inl_defd_count; ++i)
		{
			b->m_data[mk_sl_cui_inl_defd_idx(i)] = a->m_data[mk_sl_cui_inl_defd_idx(i)];
		}
	}
#endif
}

mk_lang_jumbo void mk_sl_cui_inl_defd_dec2(mk_sl_cui_inl_defd_t const* const a, mk_sl_cui_inl_defd_t* const b) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(a);
	mk_lang_assert(b);
	mk_sl_cui_inl_defd_base_dec2(&a->m_data[0], &b->m_data[0]);
#else
	if(a == b)
	{
		mk_sl_cui_inl_defd_dec1(b);
	}
	else
	{
		int i;
		mk_lang_bool_t c;

		mk_lang_assert(a);
		mk_lang_assert(b);

		c = mk_lang_true;
		for(i = 0; i != mk_sl_cui_inl_defd_count - 1 && c; ++i)
		{
			mk_sl_cui_inl_defd_base_dec2(&a->m_data[mk_sl_cui_inl_defd_idx(i)], &b->m_data[mk_sl_cui_inl_defd_idx(i)]);
			c = mk_sl_cui_inl_defd_base_is_max(&b->m_data[mk_sl_cui_inl_defd_idx(i)]);
		}
		if(c)
		{
			mk_sl_cui_inl_defd_base_dec2(&a->m_data[mk_sl_cui_inl_defd_idx(i)], &b->m_data[mk_sl_cui_inl_defd_idx(i)]);
			++i;
		}
		for(; i != mk_sl_cui_inl_defd_count; ++i)
		{
			b->m_data[mk_sl_cui_inl_defd_idx(i)] = a->m_data[mk_sl_cui_inl_defd_idx(i)];
		}
	}
#endif
}

mk_lang_jumbo void mk_sl_cui_inl_defd_inc1(mk_sl_cui_inl_defd_t* const x) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(x);
	mk_sl_cui_inl_defd_base_inc1(&x->m_data[0]);
#else
	int i;
	mk_lang_bool_t c;

	mk_lang_assert(x);

	c = mk_lang_true;
	for(i = 0; i != mk_sl_cui_inl_defd_count - 1 && c; ++i)
	{
		mk_sl_cui_inl_defd_base_inc1(&x->m_data[mk_sl_cui_inl_defd_idx(i)]);
		c = mk_sl_cui_inl_defd_base_is_zero(&x->m_data[mk_sl_cui_inl_defd_idx(i)]);
	}
	if(c)
	{
		mk_sl_cui_inl_defd_base_inc1(&x->m_data[mk_sl_cui_inl_defd_idx(i)]);
	}
#endif
}

mk_lang_jumbo void mk_sl_cui_inl_defd_dec1(mk_sl_cui_inl_defd_t* const x) mk_lang_noexcept
{
#if mk_sl_cui_inl_defd_count == 1
	mk_lang_assert(x);
	mk_sl_cui_inl_defd_base_dec1(&x->m_data[0]);
#else
	int i;
	mk_lang_bool_t c;

	mk_lang_assert(x);

	c = mk_lang_true;
	for(i = 0; i != mk_sl_cui_inl_defd_count - 1 && c; ++i)
	{
		mk_sl_cui_inl_defd_base_dec1(&x->m_data[mk_sl_cui_inl_defd_idx(i)]);
		c = mk_sl_cui_inl_defd_base_is_max(&x->m_data[mk_sl_cui_inl_defd_idx(i)]);
	}
	if(c)
	{
		mk_sl_cui_inl_defd_base_dec1(&x->m_data[mk_sl_cui_inl_defd_idx(i)]);
	}
#endif
}


#include "mk_sl_cui_inl_defu.h"
