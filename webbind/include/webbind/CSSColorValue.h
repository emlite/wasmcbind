#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleValue.h"
#include "enums.h"


typedef struct {
  CSSStyleValue inner;
} CSSColorValue;


DECLARE_EMLITE_TYPE(CSSColorValue, CSSStyleValue);

jb_Any CSSColorValue_parse(CSSColorValue* self , const jb_USVString* cssText);
