#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleValue.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CSSUnparsedValue, CSSStyleValue);

CSSUnparsedValue CSSUnparsedValue_new(jb_Sequence * members);

unsigned long CSSUnparsedValue_length(const CSSUnparsedValue *self);
