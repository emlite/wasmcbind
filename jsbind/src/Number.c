#include <jsbind/BigInt.h>
#include <jsbind/Number.h>

DEFINE_EMLITE_TYPE(jb_Number, em_Val);

// Factory methods
jb_Number jb_Number_create(void) {
    em_Val number_val = em_Val_from_int(0);
    return (jb_Number){.inner = number_val};
}

jb_Number jb_Number_from_double(double value) {
    em_Val number_val = em_Val_from_double(value);
    return (jb_Number){.inner = number_val};
}

jb_Number jb_Number_from_float(float value) {
    em_Val number_val = em_Val_from_double((double)value);
    return (jb_Number){.inner = number_val};
}

jb_Number jb_Number_from_int32(int32_t value) {
    em_Val number_val = em_Val_from_int(value);
    return (jb_Number){.inner = number_val};
}

jb_Number jb_Number_from_uint32(uint32_t value) {
    em_Val number_val = em_Val_from_uint(value);
    return (jb_Number){.inner = number_val};
}

jb_Number jb_Number_from_int64(int64_t value) {
    em_Val number_val =
        em_Val_from_int((int)value); // Convert to int (may lose precision for large values)
    return (jb_Number){.inner = number_val};
}

jb_Number jb_Number_from_uint64(uint64_t value) {
    em_Val number_val = em_Val_from_uint((unsigned int)value
    ); // Convert to uint (may lose precision for large values)
    return (jb_Number){.inner = number_val};
}

// Clone/copy
jb_Number jb_Number_clone(const jb_Number *num) { return (jb_Number){.inner = num->inner}; }

// Validation methods
bool jb_Number_isNaN(const jb_Number *num) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val result      = em_Val_call(number_ctor, "isNaN", num->inner);
    return em_Val_as_bool(result);
}

bool jb_Number_isFinite(const jb_Number *num) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val result      = em_Val_call(number_ctor, "isFinite", num->inner);
    return em_Val_as_bool(result);
}

bool jb_Number_isInteger(const jb_Number *num) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val result      = em_Val_call(number_ctor, "isInteger", num->inner);
    return em_Val_as_bool(result);
}

bool jb_Number_isSafeInteger(const jb_Number *num) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val result      = em_Val_call(number_ctor, "isSafeInteger", num->inner);
    return em_Val_as_bool(result);
}

// Safe conversion methods with error handling
int jb_Number_toDouble(const jb_Number *num, double *out) {
    if (jb_Number_isNaN(num) || !jb_Number_isFinite(num)) {
        return 0; // Error
    }
    *out = em_Val_as_double(num->inner);
    return 1; // Success
}

int jb_Number_toFloat(const jb_Number *num, float *out) {
    if (jb_Number_isNaN(num) || !jb_Number_isFinite(num)) {
        return 0; // Error
    }
    *out = (float)em_Val_as_double(num->inner);
    return 1; // Success
}

int jb_Number_toInt32(const jb_Number *num, int32_t *out) {
    if (jb_Number_isNaN(num) || !jb_Number_isFinite(num)) {
        return 0; // Error
    }
    double val = em_Val_as_double(num->inner);
    if (val < INT32_MIN || val > INT32_MAX) {
        return 0; // Out of range
    }
    *out = (int32_t)val;
    return 1; // Success
}

int jb_Number_toUint32(const jb_Number *num, uint32_t *out) {
    if (jb_Number_isNaN(num) || !jb_Number_isFinite(num)) {
        return 0; // Error
    }
    double val = em_Val_as_double(num->inner);
    if (val < 0 || val > UINT32_MAX) {
        return 0; // Out of range
    }
    *out = (uint32_t)val;
    return 1; // Success
}

int jb_Number_toInt64(const jb_Number *num, int64_t *out) {
    if (jb_Number_isNaN(num) || !jb_Number_isFinite(num)) {
        return 0; // Error
    }
    if (!jb_Number_isSafeInteger(num)) {
        return 0; // Not safe for int64 conversion
    }
    *out = (int64_t)em_Val_as_int(num->inner);
    return 1; // Success
}

int jb_Number_toUint64(const jb_Number *num, uint64_t *out) {
    if (jb_Number_isNaN(num) || !jb_Number_isFinite(num)) {
        return 0; // Error
    }
    if (!jb_Number_isSafeInteger(num)) {
        return 0; // Not safe for uint64 conversion
    }
    double val = em_Val_as_double(num->inner);
    if (val < 0) {
        return 0; // Negative value
    }
    *out = (uint64_t)em_Val_as_uint(num->inner);
    return 1; // Success
}

// Math operations
jb_Number jb_Number_abs(const jb_Number *num) {
    em_Val math_obj = em_Val_global("Math");
    em_Val result   = em_Val_call(math_obj, "abs", num->inner);
    return (jb_Number){.inner = result};
}

jb_Number jb_Number_floor(const jb_Number *num) {
    em_Val math_obj = em_Val_global("Math");
    em_Val result   = em_Val_call(math_obj, "floor", num->inner);
    return (jb_Number){.inner = result};
}

jb_Number jb_Number_ceil(const jb_Number *num) {
    em_Val math_obj = em_Val_global("Math");
    em_Val result   = em_Val_call(math_obj, "ceil", num->inner);
    return (jb_Number){.inner = result};
}

jb_Number jb_Number_round(const jb_Number *num) {
    em_Val math_obj = em_Val_global("Math");
    em_Val result   = em_Val_call(math_obj, "round", num->inner);
    return (jb_Number){.inner = result};
}

jb_Number jb_Number_trunc(const jb_Number *num) {
    em_Val math_obj = em_Val_global("Math");
    em_Val result   = em_Val_call(math_obj, "trunc", num->inner);
    return (jb_Number){.inner = result};
}

// String conversion
jb_String jb_Number_toString(const jb_Number *num) {
    em_Val result = em_Val_call(num->inner, "toString");
    return (jb_String){.inner = result};
}

jb_String jb_Number_toString_radix(const jb_Number *num, int radix) {
    em_Val radix_val = em_Val_from_int(radix);
    em_Val result    = em_Val_call(num->inner, "toString", radix_val);
    return (jb_String){.inner = result};
}

jb_String jb_Number_valueOf(const jb_Number *num) {
    em_Val result = em_Val_call(num->inner, "valueOf");
    return (jb_String){.inner = result};
}

jb_String jb_Number_toLocaleString(const jb_Number *num) {
    em_Val result = em_Val_call(num->inner, "toLocaleString");
    return (jb_String){.inner = result};
}

jb_String jb_Number_toExponential(const jb_Number *num, int fractionDigits) {
    if (fractionDigits == -1) {
        em_Val result = em_Val_call(num->inner, "toExponential");
        return (jb_String){.inner = result};
    } else {
        em_Val digits_val = em_Val_from_int(fractionDigits);
        em_Val result     = em_Val_call(num->inner, "toExponential", digits_val);
        return (jb_String){.inner = result};
    }
}

jb_String jb_Number_toFixed(const jb_Number *num, int digits) {
    em_Val digits_val = em_Val_from_int(digits);
    em_Val result     = em_Val_call(num->inner, "toFixed", digits_val);
    return (jb_String){.inner = result};
}

jb_String jb_Number_toPrecision(const jb_Number *num, int precision) {
    if (precision == -1) {
        em_Val result = em_Val_call(num->inner, "toPrecision");
        return (jb_String){.inner = result};
    } else {
        em_Val precision_val = em_Val_from_int(precision);
        em_Val result        = em_Val_call(num->inner, "toPrecision", precision_val);
        return (jb_String){.inner = result};
    }
}

// BigInt conversion
jb_Any jb_Number_toBigInt(const jb_Number *num) {
    if (!jb_Number_isInteger(num)) {
        // Return error - cannot convert non-integer to BigInt
        em_Val error = em_Val_new(
            em_Val_global("Error"), em_Val_from_string("Cannot convert non-integer to BigInt")
        );
        return (jb_Any){.inner = error};
    }

    em_Val bigint_ctor = em_Val_global("BigInt");
    em_Val result      = em_Val_invoke(bigint_ctor, num->inner);

    return (jb_Any){.inner = result};
}

jb_Number jb_Number_fromBigInt(const jb_BigInt *bigint) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val result      = em_Val_new(number_ctor, bigint->inner);
    return (jb_Number){.inner = result};
}

// Range checking for typed arrays
bool jb_Number_fitsInInt64(const jb_Number *num) {
    if (!jb_Number_isInteger(num) || !jb_Number_isFinite(num)) {
        return false;
    }
    return jb_Number_isSafeInteger(num); // Safe integers fit in int64
}

bool jb_Number_fitsInUint64(const jb_Number *num) {
    if (!jb_Number_isInteger(num) || !jb_Number_isFinite(num)) {
        return false;
    }
    double val = em_Val_as_double(num->inner);
    return val >= 0 && jb_Number_isSafeInteger(num);
}

// Static utility methods
jb_Any jb_Number_parse(const jb_String *str) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val result      = em_Val_invoke(number_ctor, str->inner);
    return (jb_Any){.inner = result};
}

jb_Any jb_Number_parseFloat(const jb_String *str) {
    em_Val global_parsefloat = em_Val_global("parseFloat");
    em_Val result            = em_Val_invoke(global_parsefloat, str->inner);
    return (jb_Any){.inner = result};
}

jb_Any jb_Number_parseInt(const jb_String *str, int radix) {
    em_Val radix_val       = em_Val_from_int(radix);
    em_Val global_parseint = em_Val_global("parseInt");
    em_Val result          = em_Val_invoke(global_parseint, str->inner, radix_val);
    return (jb_Any){.inner = result};
}

// Constants
jb_Number jb_Number_epsilon(void) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val prop        = em_Val_from_string("EPSILON");
    em_Val value       = em_Val_get(number_ctor, prop);
    return (jb_Number){.inner = value};
}

jb_Number jb_Number_maxValue(void) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val prop        = em_Val_from_string("MAX_VALUE");
    em_Val value       = em_Val_get(number_ctor, prop);
    return (jb_Number){.inner = value};
}

jb_Number jb_Number_minValue(void) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val prop        = em_Val_from_string("MIN_VALUE");
    em_Val value       = em_Val_get(number_ctor, prop);
    return (jb_Number){.inner = value};
}

jb_Number jb_Number_maxSafeInteger(void) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val prop        = em_Val_from_string("MAX_SAFE_INTEGER");
    em_Val value       = em_Val_get(number_ctor, prop);
    return (jb_Number){.inner = value};
}

jb_Number jb_Number_minSafeInteger(void) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val prop        = em_Val_from_string("MIN_SAFE_INTEGER");
    em_Val value       = em_Val_get(number_ctor, prop);
    return (jb_Number){.inner = value};
}

jb_Number jb_Number_positiveInfinity(void) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val prop        = em_Val_from_string("POSITIVE_INFINITY");
    em_Val value       = em_Val_get(number_ctor, prop);
    return (jb_Number){.inner = value};
}

jb_Number jb_Number_negativeInfinity(void) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val prop        = em_Val_from_string("NEGATIVE_INFINITY");
    em_Val value       = em_Val_get(number_ctor, prop);
    return (jb_Number){.inner = value};
}

jb_Number jb_Number_nan(void) {
    em_Val number_ctor = em_Val_global("Number");
    em_Val prop        = em_Val_from_string("NaN");
    em_Val value       = em_Val_get(number_ctor, prop);
    return (jb_Number){.inner = value};
}

// Global functions matching JavaScript Number functions (use different names to avoid conflicts)
bool jb_Number_isNaN_global(const jb_Number *num) {
    em_Val global_isnan = em_Val_global("isNaN");
    em_Val result       = em_Val_call(global_isnan, "call", em_Val_null(), num->inner);
    return em_Val_as_bool(result);
}

bool jb_Number_isFinite_global(const jb_Number *num) {
    em_Val global_isfinite = em_Val_global("isFinite");
    em_Val result          = em_Val_call(global_isfinite, "call", em_Val_null(), num->inner);
    return em_Val_as_bool(result);
}

jb_Number jb_Number_parseFloat_global(const jb_String *str) {
    em_Val global_parsefloat = em_Val_global("parseFloat");
    em_Val result            = em_Val_call(global_parsefloat, "call", em_Val_null(), str->inner);
    return (jb_Number){.inner = result};
}

jb_Number jb_Number_parseInt_global(const jb_String *str, int radix) {
    em_Val global_parseint = em_Val_global("parseInt");
    em_Val radix_val       = em_Val_from_int(radix);
    em_Val result = em_Val_call(global_parseint, "call", em_Val_null(), str->inner, radix_val);
    return (jb_Number){.inner = result};
}