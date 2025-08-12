#pragma once

#include "Any.h"
#include "Error.h"
#include "String.h"
#include "utils.h"
#include <emlite/emlite.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(jb_BigInt, em_Val);

// Factory methods
jb_BigInt jb_BigInt_create_from_string(const char *value);
jb_BigInt jb_BigInt_create_from_jb_string(const jb_String *value);
jb_BigInt jb_BigInt_create_from_int64(int64_t value);
jb_BigInt jb_BigInt_create_from_uint64(uint64_t value);
jb_BigInt jb_BigInt_zero(void);
jb_BigInt jb_BigInt_one(void);
jb_BigInt jb_BigInt_minus_one(void);

// Type conversion
jb_String jb_BigInt_toString(const jb_BigInt *bi);
jb_String jb_BigInt_toString_radix(const jb_BigInt *bi, int radix);
jb_String jb_BigInt_valueOf(const jb_BigInt *bi);
jb_String jb_BigInt_toLocaleString(const jb_BigInt *bi);

// Clone/copy
jb_BigInt jb_BigInt_clone(const jb_BigInt *bi);

// Arithmetic operations
jb_BigInt jb_BigInt_add(const jb_BigInt *a, const jb_BigInt *b);
jb_BigInt jb_BigInt_subtract(const jb_BigInt *a, const jb_BigInt *b);
jb_BigInt jb_BigInt_multiply(const jb_BigInt *a, const jb_BigInt *b);
jb_BigInt jb_BigInt_divide(const jb_BigInt *a, const jb_BigInt *b);
jb_BigInt jb_BigInt_modulo(const jb_BigInt *a, const jb_BigInt *b);
jb_BigInt jb_BigInt_pow(const jb_BigInt *base, const jb_BigInt *exp);

// Bitwise operations
jb_BigInt jb_BigInt_and(const jb_BigInt *a, const jb_BigInt *b);
jb_BigInt jb_BigInt_or(const jb_BigInt *a, const jb_BigInt *b);
jb_BigInt jb_BigInt_xor(const jb_BigInt *a, const jb_BigInt *b);
jb_BigInt jb_BigInt_left_shift(const jb_BigInt *a, const jb_BigInt *shift);
jb_BigInt jb_BigInt_right_shift(const jb_BigInt *a, const jb_BigInt *shift);

// Unary operations
jb_BigInt jb_BigInt_negate(const jb_BigInt *bi);
jb_BigInt jb_BigInt_bitwise_not(const jb_BigInt *bi);

// Comparison operations
bool jb_BigInt_less_than(const jb_BigInt *a, const jb_BigInt *b);
bool jb_BigInt_greater_than(const jb_BigInt *a, const jb_BigInt *b);
bool jb_BigInt_less_equal(const jb_BigInt *a, const jb_BigInt *b);
bool jb_BigInt_greater_equal(const jb_BigInt *a, const jb_BigInt *b);
bool jb_BigInt_equals(const jb_BigInt *a, const jb_BigInt *b);

// Static utility methods
jb_BigInt jb_BigInt_asIntN(int width, const jb_BigInt *bigint);
jb_BigInt jb_BigInt_asUintN(int width, const jb_BigInt *bigint);

// Utility methods
size_t jb_BigInt_hash(const jb_BigInt *bi);
bool jb_BigInt_is_zero(const jb_BigInt *bi);
bool jb_BigInt_is_positive(const jb_BigInt *bi);
bool jb_BigInt_is_negative(const jb_BigInt *bi);
jb_BigInt jb_BigInt_abs(const jb_BigInt *bi);

// Parsing with error handling
jb_Any jb_BigInt_parse(const jb_String *str); // Returns BigInt or Error

#ifdef __cplusplus
}
#endif