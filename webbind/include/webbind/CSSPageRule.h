#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSGroupingRule.h"
#include "enums.h"

typedef struct CSSPageDescriptors CSSPageDescriptors;


typedef struct {
  CSSGroupingRule inner;
} CSSPageRule;


DECLARE_EMLITE_TYPE(CSSPageRule, CSSGroupingRule);

jb_CSSOMString CSSPageRule_selectorText( const CSSPageRule *self);

void CSSPageRule_set_selectorText(CSSPageRule* self, const jb_CSSOMString* value);

CSSPageDescriptors CSSPageRule_style( const CSSPageRule *self);
