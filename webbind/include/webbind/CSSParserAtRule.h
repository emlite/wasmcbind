#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserRule.h"
#include "enums.h"

typedef struct CSSParserValue CSSParserValue;


typedef struct {
  CSSParserRule inner;
} CSSParserAtRule;


DECLARE_EMLITE_TYPE(CSSParserAtRule, CSSParserRule);

CSSParserAtRule CSSParserAtRule_new(const jb_DOMString* name, const jb_Sequence* prelude);

CSSParserAtRule CSSParserAtRule_new(const jb_DOMString* name, const jb_Sequence* prelude, const jb_Sequence* body);

jb_DOMString CSSParserAtRule_name( const CSSParserAtRule *self);

jb_FrozenArray CSSParserAtRule_prelude( const CSSParserAtRule *self);

jb_FrozenArray CSSParserAtRule_body( const CSSParserAtRule *self);
