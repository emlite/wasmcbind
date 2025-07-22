#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct CSSStyleValue CSSStyleValue;


typedef struct {
  em_Val inner;
} CSSStyleValue;


DECLARE_EMLITE_TYPE(CSSStyleValue, em_Val);

CSSStyleValue CSSStyleValue_parse(CSSStyleValue* self , const jb_USVString* property, const jb_USVString* cssText);

jb_Sequence CSSStyleValue_parseAll(CSSStyleValue* self , const jb_USVString* property, const jb_USVString* cssText);
