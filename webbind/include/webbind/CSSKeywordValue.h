#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleValue.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CSSKeywordValue, CSSStyleValue);

CSSKeywordValue CSSKeywordValue_new(jb_USVString * value);

jb_USVString CSSKeywordValue_value(const CSSKeywordValue *self);

void CSSKeywordValue_set_value(CSSKeywordValue* self, jb_USVString * value);
