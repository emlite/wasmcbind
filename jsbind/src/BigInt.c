#include <jsbind/BigInt.h>

DEFINE_EMLITE_TYPE(jb_BigInt, em_Val);

// Factory methods
jb_BigInt jb_BigInt_create_from_string(const char *value) {
    em_Val bigint_ctor = em_Val_global("BigInt");
    em_Val str_val     = em_Val_from_string(value);
    em_Val result      = em_Val_invoke(bigint_ctor, str_val);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_create_from_jb_string(const jb_String *value) {
    em_Val bigint_ctor = em_Val_global("BigInt");
    em_Val result      = em_Val_invoke(bigint_ctor, value->inner);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_create_from_int64(int64_t value) {
    em_Val result = em_Val_from_bigint(value);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_create_from_uint64(uint64_t value) {
    em_Val result = em_Val_from_biguint(value);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_zero(void) { return jb_BigInt_create_from_int64(0); }

jb_BigInt jb_BigInt_one(void) { return jb_BigInt_create_from_int64(1); }

jb_BigInt jb_BigInt_minus_one(void) { return jb_BigInt_create_from_int64(-1); }

// Type conversion
jb_String jb_BigInt_toString(const jb_BigInt *bi) {
    em_Val result = em_Val_call(bi->inner, "toString");
    return (jb_String){.inner = result};
}

jb_String jb_BigInt_toString_radix(const jb_BigInt *bi, int radix) {
    em_Val radix_val = em_Val_from_int(radix);
    em_Val result    = em_Val_call(bi->inner, "toString", radix_val);
    return (jb_String){.inner = result};
}

jb_String jb_BigInt_valueOf(const jb_BigInt *bi) {
    em_Val result = em_Val_call(bi->inner, "valueOf");
    return (jb_String){.inner = result};
}

jb_String jb_BigInt_toLocaleString(const jb_BigInt *bi) {
    em_Val result = em_Val_call(bi->inner, "toLocaleString");
    return (jb_String){.inner = result};
}

// Clone/copy
jb_BigInt jb_BigInt_clone(const jb_BigInt *bi) { return (jb_BigInt){.inner = bi->inner}; }

// Arithmetic operations - BigInt arithmetic needs JavaScript evaluation
jb_BigInt jb_BigInt_add(const jb_BigInt *a, const jb_BigInt *b) {
    em_Val result = emlite_eval_v("(EMLITE_VALMAP(%d) + EMLITE_VALMAP(%d))", a->inner.h, b->inner.h);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_subtract(const jb_BigInt *a, const jb_BigInt *b) {
    em_Val result = emlite_eval_v("(EMLITE_VALMAP(%d) - EMLITE_VALMAP(%d))", a->inner.h, b->inner.h);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_multiply(const jb_BigInt *a, const jb_BigInt *b) {
    em_Val result = emlite_eval_v("(EMLITE_VALMAP(%d) * EMLITE_VALMAP(%d))", a->inner.h, b->inner.h);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_divide(const jb_BigInt *a, const jb_BigInt *b) {
    em_Val result = emlite_eval_v("(EMLITE_VALMAP(%d) / EMLITE_VALMAP(%d))", a->inner.h, b->inner.h);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_modulo(const jb_BigInt *a, const jb_BigInt *b) {
    em_Val result = emlite_eval_v("(EMLITE_VALMAP(%d) % EMLITE_VALMAP(%d))", a->inner.h, b->inner.h);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_pow(const jb_BigInt *base, const jb_BigInt *exp) {
    em_Val result = emlite_eval_v("(EMLITE_VALMAP(%d) ** EMLITE_VALMAP(%d))", base->inner.h, exp->inner.h);
    return (jb_BigInt){.inner = result};
}

// Bitwise operations
jb_BigInt jb_BigInt_and(const jb_BigInt *a, const jb_BigInt *b) {
    em_Val result = emlite_eval_v("(EMLITE_VALMAP(%d) & EMLITE_VALMAP(%d))", a->inner.h, b->inner.h);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_or(const jb_BigInt *a, const jb_BigInt *b) {
    em_Val result = emlite_eval_v("(EMLITE_VALMAP(%d) | EMLITE_VALMAP(%d))", a->inner.h, b->inner.h);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_xor(const jb_BigInt *a, const jb_BigInt *b) {
    em_Val result = emlite_eval_v("(EMLITE_VALMAP(%d) ^ EMLITE_VALMAP(%d))", a->inner.h, b->inner.h);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_left_shift(const jb_BigInt *a, const jb_BigInt *shift) {
    em_Val result = emlite_eval_v("(EMLITE_VALMAP(%d) << EMLITE_VALMAP(%d))", a->inner.h, shift->inner.h);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_right_shift(const jb_BigInt *a, const jb_BigInt *shift) {
    em_Val result = emlite_eval_v("(EMLITE_VALMAP(%d) >> EMLITE_VALMAP(%d))", a->inner.h, shift->inner.h);
    return (jb_BigInt){.inner = result};
}

// Unary operations
jb_BigInt jb_BigInt_negate(const jb_BigInt *a) {
    em_Val result = emlite_eval_v("(-EMLITE_VALMAP(%d))", a->inner.h);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_not(const jb_BigInt *a) {
    em_Val result = emlite_eval_v("(~EMLITE_VALMAP(%d))", a->inner.h);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_abs(const jb_BigInt *a) {
    em_Val result = emlite_eval_v("(EMLITE_VALMAP(%d) < 0n ? -EMLITE_VALMAP(%d) : EMLITE_VALMAP(%d))", a->inner.h);
    return (jb_BigInt){.inner = result};
}

// Comparison operations using emlite comparison functions
bool jb_BigInt_less_than(const jb_BigInt *a, const jb_BigInt *b) {
    return em_Val_lt(a->inner, b->inner);
}

bool jb_BigInt_greater_than(const jb_BigInt *a, const jb_BigInt *b) {
    return em_Val_gt(a->inner, b->inner);
}

bool jb_BigInt_less_equal(const jb_BigInt *a, const jb_BigInt *b) {
    return em_Val_lte(a->inner, b->inner);
}

bool jb_BigInt_greater_equal(const jb_BigInt *a, const jb_BigInt *b) {
    return em_Val_gte(a->inner, b->inner);
}

bool jb_BigInt_equals(const jb_BigInt *a, const jb_BigInt *b) {
    return em_Val_seq(a->inner, b->inner);
}

// Utility methods
bool jb_BigInt_is_zero(const jb_BigInt *a) {
    jb_BigInt zero = jb_BigInt_zero();
    return jb_BigInt_equals(a, &zero);
}

bool jb_BigInt_is_positive(const jb_BigInt *a) {
    jb_BigInt zero = jb_BigInt_zero();
    return jb_BigInt_greater_than(a, &zero);
}

bool jb_BigInt_is_negative(const jb_BigInt *a) {
    jb_BigInt zero = jb_BigInt_zero();
    return jb_BigInt_less_than(a, &zero);
}

// Static methods
jb_BigInt jb_BigInt_asIntN(int bits, const jb_BigInt *value) {
    em_Val bigint_ctor = em_Val_global("BigInt");
    em_Val bits_val    = em_Val_from_int(bits);
    em_Val result      = em_Val_call(bigint_ctor, "asIntN", bits_val, value->inner);
    return (jb_BigInt){.inner = result};
}

jb_BigInt jb_BigInt_asUintN(int bits, const jb_BigInt *value) {
    em_Val bigint_ctor = em_Val_global("BigInt");
    em_Val bits_val    = em_Val_from_int(bits);
    em_Val result      = em_Val_call(bigint_ctor, "asUintN", bits_val, value->inner);
    return (jb_BigInt){.inner = result};
}

jb_Any jb_BigInt_parse(const jb_String *str) {
    em_Val bigint_ctor = em_Val_global("BigInt");
    em_Val result      = em_Val_invoke(bigint_ctor, str->inner);
    return (jb_Any){.inner = result};
}