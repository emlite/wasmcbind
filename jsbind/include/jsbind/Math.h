#pragma once

#include <jsbind/jsbind.h>

#ifdef __cplusplus
extern "C" {
#endif

double jb_Math_abs(double x);
double jb_Math_acos(double x);
double jb_Math_acosh(double x);
double jb_Math_asin(double x);
double jb_Math_asinh(double x);
double jb_Math_atan(double x);
double jb_Math_atanh(double x);
double jb_Math_cbrt(double x);
double jb_Math_ceil(double x);
double jb_Math_clz32(double x);
double jb_Math_cos(double x);
double jb_Math_cosh(double x);
double jb_Math_exp(double x);
double jb_Math_expm1(double x);
double jb_Math_floor(double x);
double jb_Math_fround(double x);
double jb_Math_log(double x);
double jb_Math_log1p(double x);
double jb_Math_log2(double x);
double jb_Math_log10(double x);
double jb_Math_round(double x);
double jb_Math_sign(double x);
double jb_Math_sin(double x);
double jb_Math_sinh(double x);
double jb_Math_sqrt(double x);
double jb_Math_tan(double x);
double jb_Math_tanh(double x);
double jb_Math_trunc(double x);

double jb_Math_atan2(double y, double x);
double jb_Math_pow(double x, double y);
int32_t jb_Math_imul(int32_t a, int32_t b);

double jb_Math_max(size_t n, ...);
double jb_Math_min(size_t n, ...);
double jb_Math_hypot(size_t n, ...);

double jb_Math_random();

#ifdef __cplusplus
}
#endif
