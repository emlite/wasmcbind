#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleValue.h"
#include "enums.h"


typedef struct {
  CSSStyleValue inner;
} CSSUnparsedValue;


DECLARE_EMLITE_TYPE(CSSUnparsedValue, CSSStyleValue);

CSSUnparsedValue CSSUnparsedValue_new(const jb_Sequence* members);

unsigned long CSSUnparsedValue_length( const CSSUnparsedValue *self);
