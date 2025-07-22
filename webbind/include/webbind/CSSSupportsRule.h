#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSConditionRule.h"
#include "enums.h"


typedef struct {
  CSSConditionRule inner;
} CSSSupportsRule;


DECLARE_EMLITE_TYPE(CSSSupportsRule, CSSConditionRule);

bool CSSSupportsRule_matches( const CSSSupportsRule *self);
