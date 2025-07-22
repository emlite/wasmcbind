#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct CSSStyleValue CSSStyleValue;


DECLARE_EMLITE_TYPE(CSSStyleValue, em_Val);

CSSStyleValue CSSStyleValue_parse(CSSStyleValue* self , jb_USVString * property, jb_USVString * cssText);

jb_Sequence CSSStyleValue_parseAll(CSSStyleValue* self , jb_USVString * property, jb_USVString * cssText);
