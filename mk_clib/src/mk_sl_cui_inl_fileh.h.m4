include(`mk_sl_cui_inl.m')dnl
#include "mk_lang_constexpr.h"
#include "mk_lang_jumbo.h"
#include "mk_lang_nodiscard.h"
#include "mk_lang_noexcept.h"
#include "mk_lang_restrict.h"
#include "mk_lang_sizeof.h"
#include "mk_lang_types.h"


#include "mk_sl_cui_inl_defd.h"


struct mk_sl_cui_inl_defd_s
{
	mk_sl_cui_inl_defd_base_t m_data[mk_sl_cui_inl_defd_count];
};
typedef struct mk_sl_cui_inl_defd_s mk_sl_cui_inl_defd_t;
typedef mk_sl_cui_inl_defd_t const mk_sl_cui_inl_defd_ct;
typedef mk_sl_cui_inl_defd_t* mk_sl_cui_inl_defd_pt;
typedef mk_sl_cui_inl_defd_t* mk_lang_restrict mk_sl_cui_inl_defd_prt;
typedef mk_sl_cui_inl_defd_t const* mk_sl_cui_inl_defd_pct;
typedef mk_sl_cui_inl_defd_t const* mk_lang_restrict mk_sl_cui_inl_defd_prct;

enum mk_sl_cui_inl_defd_sizebits_e{ mk_sl_cui_inl_defd_sizebits_v = mk_sl_cui_inl_defd_sizebits_d };
typedef enum mk_sl_cui_inl_defd_sizebits_e mk_sl_cui_inl_defd_sizebits_t;

enum mk_sl_cui_inl_defd_strlendec_e{ mk_sl_cui_inl_defd_strlendec_v = mk_sl_cui_inl_defd_strlendec_d };
typedef enum mk_sl_cui_inl_defd_strlendec_e mk_sl_cui_inl_defd_strlendec_t;

mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_from_base(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_base_pct const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_from_bi_bool(mk_sl_cui_inl_defd_pt const a, mk_lang_types_bool_pct const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_from_bi_pchar(mk_sl_cui_inl_defd_pt const a, mk_lang_types_pchar_pct const b) mk_lang_noexcept;
mm_per_bui(`mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_from_bi_$1(mk_sl_cui_inl_defd_pt const a, mk_lang_types_$1_pct const b) mk_lang_noexcept;')
mm_per_bsi(`mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_from_bi_$1(mk_sl_cui_inl_defd_pt const a, mk_lang_types_$1_pct const b) mk_lang_noexcept;')
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_to_base(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_base_pt const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_to_bi_bool(mk_sl_cui_inl_defd_pct const a, mk_lang_types_bool_pt const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_to_bi_pchar(mk_sl_cui_inl_defd_pct const a, mk_lang_types_pchar_pt const b) mk_lang_noexcept;
mm_per_bui(`mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_to_bi_$1(mk_sl_cui_inl_defd_pct const a, mk_lang_types_$1_pt const b) mk_lang_noexcept;')
mm_per_bsi(`mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_to_bi_$1(mk_sl_cui_inl_defd_pct const a, mk_lang_types_$1_pt const b) mk_lang_noexcept;')
mm_per_bui(`mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_from_buis_$1_le(mk_sl_cui_inl_defd_pt const a, mk_lang_types_$1_pct const b) mk_lang_noexcept;')
mm_per_bui(`mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_to_buis_$1_le(mk_sl_cui_inl_defd_pct const a, mk_lang_types_$1_pt const b) mk_lang_noexcept;')
mm_per_bui(`mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_from_buis_$1_be(mk_sl_cui_inl_defd_pt const a, mk_lang_types_$1_pct const b) mk_lang_noexcept;')
mm_per_bui(`mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_to_buis_$1_be(mk_sl_cui_inl_defd_pct const a, mk_lang_types_$1_pt const b) mk_lang_noexcept;')
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_set_zero(mk_sl_cui_inl_defd_pt const x) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_set_max(mk_sl_cui_inl_defd_pt const x) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_set_one(mk_sl_cui_inl_defd_pt const x) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_set_bit(mk_sl_cui_inl_defd_pt const x, mk_lang_types_sint_t const bit_idx) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_set_mask(mk_sl_cui_inl_defd_pt const x, mk_lang_types_sint_t const bits_count) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_sint_t mk_sl_cui_inl_defd_count_leading_zeros(mk_sl_cui_inl_defd_pct const x) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_sint_t mk_sl_cui_inl_defd_count_leading_ones(mk_sl_cui_inl_defd_pct const x) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_sint_t mk_sl_cui_inl_defd_count_trailing_zeros(mk_sl_cui_inl_defd_pct const x) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_sint_t mk_sl_cui_inl_defd_count_trailing_ones(mk_sl_cui_inl_defd_pct const x) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_sint_t mk_sl_cui_inl_defd_count_zeros(mk_sl_cui_inl_defd_pct const x) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_sint_t mk_sl_cui_inl_defd_count_ones(mk_sl_cui_inl_defd_pct const x) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_has_lsb(mk_sl_cui_inl_defd_pct const x) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_is_zero(mk_sl_cui_inl_defd_pct const x) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_is_one(mk_sl_cui_inl_defd_pct const x) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_is_max(mk_sl_cui_inl_defd_pct const x) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_eq(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_ne(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_lt(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_le(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_gt(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_ge(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_inc2(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pt const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_dec2(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pt const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_inc1(mk_sl_cui_inl_defd_pt const x) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_dec1(mk_sl_cui_inl_defd_pt const x) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_not2(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pt const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_or3(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_and3(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_xor3(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_not1(mk_sl_cui_inl_defd_pt const x) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_or2(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_and2(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_xor2(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_shl3(mk_sl_cui_inl_defd_pct const a, mk_lang_types_sint_t const b, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_shr3(mk_sl_cui_inl_defd_pct const a, mk_lang_types_sint_t const b, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_rotl3(mk_sl_cui_inl_defd_pct const a, mk_lang_types_sint_t const b, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_rotr3(mk_sl_cui_inl_defd_pct const a, mk_lang_types_sint_t const b, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_shl2(mk_sl_cui_inl_defd_pt const a, mk_lang_types_sint_t const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_shr2(mk_sl_cui_inl_defd_pt const a, mk_lang_types_sint_t const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_rotl2(mk_sl_cui_inl_defd_pt const a, mk_lang_types_sint_t const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_rotr2(mk_sl_cui_inl_defd_pt const a, mk_lang_types_sint_t const b) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_would_overflow_add_cc(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_would_overflow_add_cs(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_would_overflow_add(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_lang_types_bool_t const cf) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_would_overflow_sub_cc(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_would_overflow_sub_cs(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_would_overflow_sub(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_lang_types_bool_t const cf) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_bool_t mk_sl_cui_inl_defd_would_overflow_mul(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_add3_wrap_cid_cod(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_add3_wrap_cid_coe(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_sl_cui_inl_defd_pt const c, mk_lang_types_bool_pt const co) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_add3_wrap_cie_cod(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_lang_types_bool_t const ci, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_add3_wrap_cie_coe(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_lang_types_bool_t const ci, mk_sl_cui_inl_defd_pt const c, mk_lang_types_bool_pt const co) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_add2_wrap_cid_cod(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_add2_wrap_cid_coe(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b, mk_lang_types_bool_pt const co) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_add2_wrap_cie_cod(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b, mk_lang_types_bool_t const ci) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_add2_wrap_cie_coe(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b, mk_lang_types_bool_t const ci, mk_lang_types_bool_pt const co) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_sub3_wrap_cid_cod(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_sub3_wrap_cid_coe(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_sl_cui_inl_defd_pt const c, mk_lang_types_bool_pt const co) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_sub3_wrap_cie_cod(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_lang_types_bool_t const ci, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_sub3_wrap_cie_coe(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_lang_types_bool_t const ci, mk_sl_cui_inl_defd_pt const c, mk_lang_types_bool_pt const co) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_sub2_wrap_cid_cod(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_sub2_wrap_cid_coe(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b, mk_lang_types_bool_pt const co) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_sub2_wrap_cie_cod(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b, mk_lang_types_bool_t const ci) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_sub2_wrap_cie_coe(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b, mk_lang_types_bool_t const ci, mk_lang_types_bool_pt const co) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_mul3_wrap_lo(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_mul3_wrap_hi(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_mul4_wrap_wi(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_sl_cui_inl_defd_pt const c, mk_sl_cui_inl_defd_pt const d) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_mul2_wrap_lo(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_mul2_wrap_hi(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_mul2_wrap_wi(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pt const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_div3_wrap(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_mod3_wrap(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_sl_cui_inl_defd_pt const c) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_divmod4_wrap(mk_sl_cui_inl_defd_pct const a, mk_sl_cui_inl_defd_pct const b, mk_sl_cui_inl_defd_pt const c, mk_sl_cui_inl_defd_pt const d) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_div2_wrap(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_mod2_wrap(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pct const b) mk_lang_noexcept;
mk_lang_constexpr mk_lang_jumbo mk_lang_types_void_t mk_sl_cui_inl_defd_divmod2_wrap(mk_sl_cui_inl_defd_pt const a, mk_sl_cui_inl_defd_pt const b) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_sint_t mk_sl_cui_inl_defd_to_str_dec_n(mk_sl_cui_inl_defd_pct const x, mk_lang_types_pchar_pt const str, mk_lang_types_sint_t const str_len) mk_lang_noexcept;
mk_lang_nodiscard mk_lang_constexpr mk_lang_jumbo mk_lang_types_sint_t mk_sl_cui_inl_defd_from_str_dec_n(mk_sl_cui_inl_defd_pt const x, mk_lang_types_pchar_pct const str, mk_lang_types_sint_t const str_len) mk_lang_noexcept;


#include "mk_sl_cui_inl_defu.h"
