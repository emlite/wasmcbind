#include <jsbind/Math.h>
#include <stdarg.h>

static em_Val MATH() { return em_Val_global("Math"); }

#define DEF_MATH_UNARY(name)                                                                       \
    double jb_Math_##name(double x) {                                                              \
        return em_Val_as_double(em_Val_call(MATH(), #name, em_Val_from_double(x)));                \
    }

DEF_MATH_UNARY(abs)
DEF_MATH_UNARY(acos)
DEF_MATH_UNARY(acosh)
DEF_MATH_UNARY(asin)
DEF_MATH_UNARY(asinh)
DEF_MATH_UNARY(atan)
DEF_MATH_UNARY(atanh)
DEF_MATH_UNARY(cbrt)
DEF_MATH_UNARY(ceil)
DEF_MATH_UNARY(clz32)
DEF_MATH_UNARY(cos)
DEF_MATH_UNARY(cosh)
DEF_MATH_UNARY(exp)
DEF_MATH_UNARY(expm1)
DEF_MATH_UNARY(floor)
DEF_MATH_UNARY(fround)
DEF_MATH_UNARY(log)
DEF_MATH_UNARY(log1p)
DEF_MATH_UNARY(log2)
DEF_MATH_UNARY(log10)
DEF_MATH_UNARY(round)
DEF_MATH_UNARY(sign)
DEF_MATH_UNARY(sin)
DEF_MATH_UNARY(sinh)
DEF_MATH_UNARY(sqrt)
DEF_MATH_UNARY(tan)
DEF_MATH_UNARY(tanh)
DEF_MATH_UNARY(trunc)

#undef DEF_MATH_UNARY

double jb_Math_atan2(double y, double x) {
    return em_Val_as_double(
        em_Val_call(MATH(), "atan2", em_Val_from_double(y), em_Val_from_double(x))
    );
}

double jb_Math_pow(double x, double y) {
    return em_Val_as_double(em_Val_call(MATH(), "pow", em_Val_from_double(x), em_Val_from_double(y))
    );
}

int32_t jb_Math_imul(int32_t a, int32_t b) {
    return em_Val_as_int(em_Val_call(MATH(), "imul", em_Val_from_int(a), em_Val_from_int(b)));
}

double jb_Math_random() { return em_Val_as_double(em_Val_call(MATH(), "random")); }

double jb_Math_max(size_t n, ...) {
    va_list args;
    va_start(args, n);
    em_Val result = em_Val_call_v(MATH(), "max", n, args);
    va_end(args);
    return em_Val_as_double(result);
}

double jb_Math_min(size_t n, ...) {
    va_list args;
    va_start(args, n);
    em_Val result = em_Val_call_v(MATH(), "min", n, args);
    va_end(args);
    return em_Val_as_double(result);
}

double jb_Math_hypot(size_t n, ...) {
    va_list args;
    va_start(args, n);
    em_Val result = em_Val_call_v(MATH(), "hypot", n, args);
    va_end(args);
    return em_Val_as_double(result);
}
