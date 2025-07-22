#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

typedef struct CSSRuleList CSSRuleList;
typedef struct CSSKeyframeRule CSSKeyframeRule;


typedef struct {
  CSSRule inner;
} CSSKeyframesRule;


DECLARE_EMLITE_TYPE(CSSKeyframesRule, CSSRule);

jb_CSSOMString CSSKeyframesRule_name( const CSSKeyframesRule *self);

void CSSKeyframesRule_set_name(CSSKeyframesRule* self, const jb_CSSOMString* value);

CSSRuleList CSSKeyframesRule_cssRules( const CSSKeyframesRule *self);

unsigned long CSSKeyframesRule_length( const CSSKeyframesRule *self);

jb_Undefined CSSKeyframesRule_appendRule(CSSKeyframesRule* self , const jb_CSSOMString* rule);

jb_Undefined CSSKeyframesRule_deleteRule(CSSKeyframesRule* self , const jb_CSSOMString* select);

CSSKeyframeRule CSSKeyframesRule_findRule(CSSKeyframesRule* self , const jb_CSSOMString* select);
