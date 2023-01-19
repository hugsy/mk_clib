#include "mk_lang_bi.h"
#include "mk_lang_bool.h"
#include "mk_lang_jumbo.h"
#include "mk_lang_nodiscard.h"


#include "mk_lang_bui_inl_def.h"


mk_lang_jumbo void mk_lang_bui_set_zero(mk_lang_bui_t* x);
mk_lang_jumbo void mk_lang_bui_set_one(mk_lang_bui_t* x);
mk_lang_jumbo void mk_lang_bui_set_bit(mk_lang_bui_t* x, int bit_idx);
mk_lang_jumbo void mk_lang_bui_set_mask(mk_lang_bui_t* x, int bits_count);

#include "mk_lang_bui_inl_to_bi.h"
#include "mk_lang_bui_inl_from_bi.h"
#include "mk_lang_bui_inl_to_buis_le.h"
#include "mk_lang_bui_inl_to_buis_be.h"
#include "mk_lang_bui_inl_from_buis_le.h"
#include "mk_lang_bui_inl_from_buis_be.h"

mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_lang_bui_is_zero(mk_lang_bui_t const* x);
mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_lang_bui_is_max(mk_lang_bui_t const* x);
mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_lang_bui_eq(mk_lang_bui_t const* a, mk_lang_bui_t const* b);
mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_lang_bui_ne(mk_lang_bui_t const* a, mk_lang_bui_t const* b);
mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_lang_bui_lt(mk_lang_bui_t const* a, mk_lang_bui_t const* b);
mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_lang_bui_le(mk_lang_bui_t const* a, mk_lang_bui_t const* b);
mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_lang_bui_gt(mk_lang_bui_t const* a, mk_lang_bui_t const* b);
mk_lang_nodiscard mk_lang_jumbo mk_lang_bool_t mk_lang_bui_ge(mk_lang_bui_t const* a, mk_lang_bui_t const* b);

mk_lang_jumbo void mk_lang_bui_inc2(mk_lang_bui_t const* a, mk_lang_bui_t* b);
mk_lang_jumbo void mk_lang_bui_dec2(mk_lang_bui_t const* a, mk_lang_bui_t* b);
mk_lang_jumbo void mk_lang_bui_inc1(mk_lang_bui_t* x);
mk_lang_jumbo void mk_lang_bui_dec1(mk_lang_bui_t* x);


#include "mk_lang_bui_inl_undef.h"


#undef mk_lang_bui_btn
#undef mk_lang_bui_n
