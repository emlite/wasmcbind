#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

typedef struct CSSRuleList CSSRuleList;


typedef struct {
  CSSRule inner;
} CSSGroupingRule;


DECLARE_EMLITE_TYPE(CSSGroupingRule, CSSRule);

CSSRuleList CSSGroupingRule_cssRules( const CSSGroupingRule *self);

unsigned long CSSGroupingRule_insertRule(CSSGroupingRule* self , const jb_CSSOMString* rule);

unsigned long CSSGroupingRule_insertRule(CSSGroupingRule* self , const jb_CSSOMString* rule, unsigned long index);

jb_Undefined CSSGroupingRule_deleteRule(CSSGroupingRule* self , unsigned long index);
