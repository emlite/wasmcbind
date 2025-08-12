#pragma once

#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

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
int32_t jb_parse_int(const char *src, int32_t radix);
double jb_parse_float(const char *src);

#ifdef __cplusplus
}
#endif