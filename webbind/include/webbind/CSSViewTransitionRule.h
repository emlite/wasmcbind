#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"


typedef struct {
  CSSRule inner;
} CSSViewTransitionRule;


DECLARE_EMLITE_TYPE(CSSViewTransitionRule, CSSRule);

jb_CSSOMString CSSViewTransitionRule_navigation( const CSSViewTransitionRule *self);

jb_FrozenArray CSSViewTransitionRule_types( const CSSViewTransitionRule *self);
