#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSGroupingRule.h"
#include "enums.h"


typedef struct {
  CSSGroupingRule inner;
} CSSLayerBlockRule;


DECLARE_EMLITE_TYPE(CSSLayerBlockRule, CSSGroupingRule);

jb_CSSOMString CSSLayerBlockRule_name( const CSSLayerBlockRule *self);
