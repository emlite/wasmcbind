#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"


typedef struct {
  CSSRule inner;
} CSSPropertyRule;


DECLARE_EMLITE_TYPE(CSSPropertyRule, CSSRule);

jb_CSSOMString CSSPropertyRule_name( const CSSPropertyRule *self);

jb_CSSOMString CSSPropertyRule_syntax( const CSSPropertyRule *self);

bool CSSPropertyRule_inherits( const CSSPropertyRule *self);

jb_CSSOMString CSSPropertyRule_initialValue( const CSSPropertyRule *self);
