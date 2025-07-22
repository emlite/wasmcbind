#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSGroupingRule.h"
#include "enums.h"


typedef struct {
  CSSGroupingRule inner;
} CSSStartingStyleRule;


DECLARE_EMLITE_TYPE(CSSStartingStyleRule, CSSGroupingRule);
