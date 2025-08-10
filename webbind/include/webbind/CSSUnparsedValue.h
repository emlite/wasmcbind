#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSStyleValue.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSUnparsedValue, CSSStyleValue);

CSSUnparsedValue CSSUnparsedValue_new(jb_Array * members);

unsigned long CSSUnparsedValue_length(const CSSUnparsedValue *self);

#ifdef __cplusplus
}
#endif
