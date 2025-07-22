#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSGroupingRule.h"
#include "enums.h"


typedef struct {
  CSSGroupingRule inner;
} CSSConditionRule;


DECLARE_EMLITE_TYPE(CSSConditionRule, CSSGroupingRule);

jb_CSSOMString CSSConditionRule_conditionText( const CSSConditionRule *self);
