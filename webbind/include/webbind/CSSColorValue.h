#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSStyleValue.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSColorValue, CSSStyleValue);

jb_Any CSSColorValue_parse(CSSColorValue* self , jb_String * cssText);

#ifdef __cplusplus
}
#endif
