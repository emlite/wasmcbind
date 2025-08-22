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

/**
 * @file Number.h
 * @brief Bindings for the JavaScript `Number` object.
 *
 * This file provides functions for creating and manipulating JavaScript numbers.
 */

/**
 * @brief An opaque type representing a JavaScript `Number` object.
 */
DECLARE_EMLITE_TYPE(jb_Number, em_Val);

typedef struct jb_BigInt jb_BigInt;

// Factory methods

/** @brief Creates a new `Number` object with a value of 0. */
jb_Number jb_Number_create(void); // Number(0)
/** @brief Creates a new `Number` object from a double. */
jb_Number jb_Number_from_double(double value);
/** @brief Creates a new `Number` object from a float. */
jb_Number jb_Number_from_float(float value);
/** @brief Creates a new `Number` object from an int32_t. */
jb_Number jb_Number_from_int32(int32_t value);
/** @brief Creates a new `Number` object from a uint32_t. */
jb_Number jb_Number_from_uint32(uint32_t value);
/** @brief Creates a new `Number` object from an int64_t. */
jb_Number jb_Number_from_int64(int64_t value);
/** @brief Creates a new `Number` object from a uint64_t. */
jb_Number jb_Number_from_uint64(uint64_t value);

// Clone/copy

/** @brief Clones a `Number` object. */
jb_Number jb_Number_clone(const jb_Number *num);

// Validation methods

/** @brief Checks if the number is `NaN`. */
bool jb_Number_isNaN(const jb_Number *num);
/** @brief Checks if the number is finite. */
bool jb_Number_isFinite(const jb_Number *num);
/** @brief Checks if the number is an integer. */
bool jb_Number_isInteger(const jb_Number *num);
/** @brief Checks if the number is a safe integer. */
bool jb_Number_isSafeInteger(const jb_Number *num);

// Safe conversion methods with error handling (returns 1 on
// success, 0 on error)

/** @brief Converts the number to a double. */
int jb_Number_toDouble(const jb_Number *num, double *out);
/** @brief Converts the number to a float. */
int jb_Number_toFloat(const jb_Number *num, float *out);
/** @brief Converts the number to an int32_t. */
int jb_Number_toInt32(const jb_Number *num, int32_t *out);
/** @brief Converts the number to a uint32_t. */
int jb_Number_toUint32(const jb_Number *num, uint32_t *out);
/** @brief Converts the number to an int64_t. */
int jb_Number_toInt64(const jb_Number *num, int64_t *out);
/** @brief Converts the number to a uint64_t. */
int jb_Number_toUint64(const jb_Number *num, uint64_t *out);

// Math operations

/** @brief Returns the absolute value of the number. */
jb_Number jb_Number_abs(const jb_Number *num);
/** @brief Returns the largest integer less than or equal to the number. */
jb_Number jb_Number_floor(const jb_Number *num);
/** @brief Returns the smallest integer greater than or equal to the number. */
jb_Number jb_Number_ceil(const jb_Number *num);
/** @brief Returns the value of the number rounded to the nearest integer. */
jb_Number jb_Number_round(const jb_Number *num);
/** @brief Returns the integer part of the number by removing any fractional digits. */
jb_Number jb_Number_trunc(const jb_Number *num);

// String conversion

/** @brief Returns a string representing the number. */
jb_String jb_Number_toString(const jb_Number *num);
/** @brief Returns a string representing the number in the specified radix. */
jb_String jb_Number_toString_radix(const jb_Number *num, int radix);
/** @brief Returns the primitive value of the number. */
jb_String jb_Number_valueOf(const jb_Number *num);
/** @brief Returns a string with a language-sensitive representation of the number. */
jb_String jb_Number_toLocaleString(const jb_Number *num);
/** @brief Returns a string representing the number in exponential notation. */
jb_String jb_Number_toExponential(const jb_Number *num, int fractionDigits);
/** @brief Returns a string representing the number in fixed-point notation. */
jb_String jb_Number_toFixed(const jb_Number *num, int digits);
/** @brief Returns a string representing the number to a specified precision. */
jb_String jb_Number_toPrecision(const jb_Number *num, int precision);

// BigInt conversion

/** @brief Converts the number to a `BigInt`. */
jb_Any jb_Number_toBigInt(const jb_Number *num); // Returns BigInt or Error
/** @brief Converts a `BigInt` to a `Number`. */
jb_Number jb_Number_fromBigInt(const jb_BigInt *bigint);

// Range checking for typed arrays

/** @brief Checks if the number can be represented as an int64_t. */
bool jb_Number_fitsInInt64(const jb_Number *num);
/** @brief Checks if the number can be represented as a uint64_t. */
bool jb_Number_fitsInUint64(const jb_Number *num);

// Static utility methods (returns Number on success,
// creates invalid Number on error)

/** @brief Parses a string argument and returns a floating-point number. */
jb_Any jb_Number_parse(const jb_String *str); // Returns Number or Error
/** @brief Parses a string argument and returns a floating-point number. */
jb_Any jb_Number_parseFloat(const jb_String *str); // Returns Number or Error
/** @brief Parses a string argument and returns an integer of the specified radix. */
jb_Any jb_Number_parseInt(const jb_String *str, int radix); // Returns Number or Error

// Constants

/** @brief Returns the smallest interval between two representable numbers. */
jb_Number jb_Number_epsilon(void);
/** @brief Returns the largest positive representable number. */
jb_Number jb_Number_maxValue(void);
/** @brief Returns the smallest positive representable number. */
jb_Number jb_Number_minValue(void);
/** @brief Returns the maximum safe integer. */
jb_Number jb_Number_maxSafeInteger(void);
/** @brief Returns the minimum safe integer. */
jb_Number jb_Number_minSafeInteger(void);
/** @brief Returns positive infinity. */
jb_Number jb_Number_positiveInfinity(void);
/** @brief Returns negative infinity. */
jb_Number jb_Number_negativeInfinity(void);
/** @brief Returns `NaN`. */
jb_Number jb_Number_nan(void);

// Global functions matching JavaScript Number functions
// (use different names to avoid conflicts)

/** @brief Determines whether a value is `NaN` or not. */
bool jb_Number_isNaN_global(const jb_Number *num);
/** @brief Determines whether a value is a finite number. */
bool jb_Number_isFinite_global(const jb_Number *num);
/** @brief Parses a string argument and returns a floating-point number. */
jb_Number jb_Number_parseFloat_global(const jb_String *str);
/** @brief Parses a string argument and returns an integer of the specified radix. */
jb_Number jb_Number_parseInt_global(const jb_String *str, int radix);

#ifdef __cplusplus
}
#endif
