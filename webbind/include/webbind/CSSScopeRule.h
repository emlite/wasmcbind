#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSGroupingRule.h"
#include "enums.h"


typedef struct {
  CSSGroupingRule inner;
} CSSScopeRule;


DECLARE_EMLITE_TYPE(CSSScopeRule, CSSGroupingRule);

jb_CSSOMString CSSScopeRule_start( const CSSScopeRule *self);

jb_CSSOMString CSSScopeRule_end( const CSSScopeRule *self);
