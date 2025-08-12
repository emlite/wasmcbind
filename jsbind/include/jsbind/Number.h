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

DECLARE_EMLITE_TYPE(jb_Number, em_Val);

typedef struct jb_BigInt jb_BigInt;

// Factory methods
jb_Number jb_Number_create(void); // Number(0)
jb_Number jb_Number_from_double(double value);
jb_Number jb_Number_from_float(float value);
jb_Number jb_Number_from_int32(int32_t value);
jb_Number jb_Number_from_uint32(uint32_t value);
jb_Number jb_Number_from_int64(int64_t value);
jb_Number jb_Number_from_uint64(uint64_t value);

// Clone/copy
jb_Number jb_Number_clone(const jb_Number *num);

// Validation methods
bool jb_Number_isNaN(const jb_Number *num);
bool jb_Number_isFinite(const jb_Number *num);
bool jb_Number_isInteger(const jb_Number *num);
bool jb_Number_isSafeInteger(const jb_Number *num);

// Safe conversion methods with error handling (returns 1 on
// success, 0 on error)
int jb_Number_toDouble(const jb_Number *num, double *out);
int jb_Number_toFloat(const jb_Number *num, float *out);
int jb_Number_toInt32(const jb_Number *num, int32_t *out);
int jb_Number_toUint32(const jb_Number *num, uint32_t *out);
int jb_Number_toInt64(const jb_Number *num, int64_t *out);
int jb_Number_toUint64(const jb_Number *num, uint64_t *out);

// Math operations
jb_Number jb_Number_abs(const jb_Number *num);
jb_Number jb_Number_floor(const jb_Number *num);
jb_Number jb_Number_ceil(const jb_Number *num);
jb_Number jb_Number_round(const jb_Number *num);
jb_Number jb_Number_trunc(const jb_Number *num);

// String conversion
jb_String jb_Number_toString(const jb_Number *num);
jb_String jb_Number_toString_radix(const jb_Number *num, int radix);
jb_String jb_Number_valueOf(const jb_Number *num);
jb_String jb_Number_toLocaleString(const jb_Number *num);
jb_String jb_Number_toExponential(const jb_Number *num, int fractionDigits);
jb_String jb_Number_toFixed(const jb_Number *num, int digits);
jb_String jb_Number_toPrecision(const jb_Number *num, int precision);

// BigInt conversion
jb_Any jb_Number_toBigInt(const jb_Number *num); // Returns BigInt or Error
jb_Number jb_Number_fromBigInt(const jb_BigInt *bigint);

// Range checking for typed arrays
bool jb_Number_fitsInInt64(const jb_Number *num);
bool jb_Number_fitsInUint64(const jb_Number *num);

// Static utility methods (returns Number on success,
// creates invalid Number on error)
jb_Any jb_Number_parse(const jb_String *str);               // Returns Number or Error
jb_Any jb_Number_parseFloat(const jb_String *str);          // Returns Number or Error
jb_Any jb_Number_parseInt(const jb_String *str, int radix); // Returns Number or Error

// Constants
jb_Number jb_Number_epsilon(void);
jb_Number jb_Number_maxValue(void);
jb_Number jb_Number_minValue(void);
jb_Number jb_Number_maxSafeInteger(void);
jb_Number jb_Number_minSafeInteger(void);
jb_Number jb_Number_positiveInfinity(void);
jb_Number jb_Number_negativeInfinity(void);
jb_Number jb_Number_nan(void);

// Global functions matching JavaScript Number functions
// (use different names to avoid conflicts)
bool jb_Number_isNaN_global(const jb_Number *num);
bool jb_Number_isFinite_global(const jb_Number *num);
jb_Number jb_Number_parseFloat_global(const jb_String *str);
jb_Number jb_Number_parseInt_global(const jb_String *str, int radix);

#ifdef __cplusplus
}
#endif