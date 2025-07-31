#pragma once

#include <emlite/emlite.h>

#include "Any.h"
#include "Array.h"
#include "Console.h"
#include "Date.h"
#include "Error.h"
#include "Function.h"
#include "JSON.h"
#include "Map.h"
#include "Math.h"
#include "Null.h"
#include "Object.h"
#include "Promise.h"
#include "Reflect.h"
#include "Response.h"
#include "Set.h"
#include "String.h"
#include "Undefined.h"
#include "text.h"
#include "time.h"
#include "url.h"
#include "utils.h"

jb_String jb_atob(const jb_String *encoded);
jb_String jb_btoa(const jb_String *data);

int32_t jb_parse_int(const char *src, int32_t radix);
double jb_parse_float(const char *src);