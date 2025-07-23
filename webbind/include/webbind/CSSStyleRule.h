#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSGroupingRule.h"
#include "enums.h"

typedef struct CSSStyleProperties CSSStyleProperties;
typedef struct StylePropertyMap StylePropertyMap;


DECLARE_EMLITE_TYPE(CSSStyleRule, CSSGroupingRule);

jb_CSSOMString CSSStyleRule_selectorText(const CSSStyleRule *self);

void CSSStyleRule_set_selectorText(CSSStyleRule* self, jb_CSSOMString * value);

CSSStyleProperties CSSStyleRule_style(const CSSStyleRule *self);

StylePropertyMap CSSStyleRule_styleMap(const CSSStyleRule *self);
