#pragma once

#include <jsbind/jsbind.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Math.h
 * @brief Bindings for the JavaScript `Math` object.
 *
 * This file provides functions for the properties and methods of the `Math`
 * object.
 */

/** @brief Returns the absolute value of a number. */
double jb_Math_abs(double x);
/** @brief Returns the arccosine of a number. */
double jb_Math_acos(double x);
/** @brief Returns the hyperbolic arccosine of a number. */
double jb_Math_acosh(double x);
/** @brief Returns the arcsine of a number. */
double jb_Math_asin(double x);
/** @brief Returns the hyperbolic arcsine of a number. */
double jb_Math_asinh(double x);
/** @brief Returns the arctangent of a number. */
double jb_Math_atan(double x);
/** @brief Returns the hyperbolic arctangent of a number. */
double jb_Math_atanh(double x);
/** @brief Returns the cube root of a number. */
double jb_Math_cbrt(double x);
/** @brief Returns the smallest integer greater than or equal to a number. */
double jb_Math_ceil(double x);
/** @brief Returns the number of leading zero bits in the 32-bit integer representation of a number. */
double jb_Math_clz32(double x);
/** @brief Returns the cosine of a number. */
double jb_Math_cos(double x);
/** @brief Returns the hyperbolic cosine of a number. */
double jb_Math_cosh(double x);
/** @brief Returns e to the power of a number. */
double jb_Math_exp(double x);
/** @brief Returns e to the power of a number, minus 1. */
double jb_Math_expm1(double x);
/** @brief Returns the largest integer less than or equal to a number. */
double jb_Math_floor(double x);
/** @brief Returns the nearest single-precision float representation of a number. */
double jb_Math_fround(double x);
/** @brief Returns the natural logarithm of a number. */
double jb_Math_log(double x);
/** @brief Returns the natural logarithm of 1 + a number. */
double jb_Math_log1p(double x);
/** @brief Returns the base 2 logarithm of a number. */
double jb_Math_log2(double x);
/** @brief Returns the base 10 logarithm of a number. */
double jb_Math_log10(double x);
/** @brief Returns the value of a number rounded to the nearest integer. */
double jb_Math_round(double x);
/** @brief Returns the sign of a number, indicating whether the number is positive, negative or zero. */
double jb_Math_sign(double x);
/** @brief Returns the sine of a number. */
double jb_Math_sin(double x);
/** @brief Returns the hyperbolic sine of a number. */
double jb_Math_sinh(double x);
/** @brief Returns the square root of a number. */
double jb_Math_sqrt(double x);
/** @brief Returns the tangent of a number. */
double jb_Math_tan(double x);
/** @brief Returns the hyperbolic tangent of a number. */
double jb_Math_tanh(double x);
/** @brief Returns the integer part of a number by removing any fractional digits. */
double jb_Math_trunc(double x);

/** @brief Returns the arctangent of the quotient of its arguments. */
double jb_Math_atan2(double y, double x);
/** @brief Returns a base to the exponent power. */
double jb_Math_pow(double x, double y);
/** @brief Returns the result of a 32-bit integer multiplication. */
int32_t jb_Math_imul(int32_t a, int32_t b);

/** @brief Returns the largest of zero or more numbers. */
double jb_Math_max(size_t n, ...);
/** @brief Returns the smallest of zero or more numbers. */
double jb_Math_min(size_t n, ...);
/** @brief Returns the square root of the sum of squares of its arguments. */
double jb_Math_hypot(size_t n, ...);

/** @brief Returns a pseudo-random number between 0 and 1. */
double jb_Math_random();

#ifdef __cplusplus
}
#endif