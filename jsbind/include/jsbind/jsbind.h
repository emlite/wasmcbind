#pragma once

#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file jsbind.h
 * @brief Main include file for the jsbind library.
 *
 * This file includes all the other header files in the library.
 */

#include "Any.h"
#include "Array.h"
#include "BigInt.h"
#include "BigIntArray.h"
#include "Console.h"
#include "Date.h"
#include "Error.h"
#include "Function.h"
#include "JSON.h"
#include "Map.h"
#include "Math.h"
#include "Null.h"
#include "Number.h"
#include "Object.h"
#include "Promise.h"
#include "Reflect.h"
#include "RegExp.h"
#include "Response.h"
#include "Set.h"
#include "String.h"
#include "Symbol.h"
#include "Undefined.h"
#include "global.h"
#include "text.h"
#include "time.h"
#include "url.h"
#include "utils.h"

// Legacy functions (kept for backwards compatibility)

/**
 * @brief Parses a string and returns an integer of the specified radix.
 * @deprecated Use `jb_parseInt_safe` or `jb_parseInt_radix_safe` instead.
 */
int32_t jb_parse_int(const char *src, int32_t radix);

/**
 * @brief Parses a string and returns a floating-point number.
 * @deprecated Use `jb_parseFloat_safe` instead.
 */
double jb_parse_float(const char *src);

#ifdef __cplusplus
}
#endif
