#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleValue.h"
#include "enums.h"


typedef struct {
  CSSStyleValue inner;
} CSSKeywordValue;


DECLARE_EMLITE_TYPE(CSSKeywordValue, CSSStyleValue);

CSSKeywordValue CSSKeywordValue_new(const jb_USVString* value);

jb_USVString CSSKeywordValue_value( const CSSKeywordValue *self);

void CSSKeywordValue_set_value(CSSKeywordValue* self, const jb_USVString* value);
