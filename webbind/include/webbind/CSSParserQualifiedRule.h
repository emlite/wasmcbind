#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserRule.h"
#include "enums.h"

typedef struct CSSParserValue CSSParserValue;


typedef struct {
  CSSParserRule inner;
} CSSParserQualifiedRule;


DECLARE_EMLITE_TYPE(CSSParserQualifiedRule, CSSParserRule);

CSSParserQualifiedRule CSSParserQualifiedRule_new(const jb_Sequence* prelude);

CSSParserQualifiedRule CSSParserQualifiedRule_new(const jb_Sequence* prelude, const jb_Sequence* body);

jb_FrozenArray CSSParserQualifiedRule_prelude( const CSSParserQualifiedRule *self);

jb_FrozenArray CSSParserQualifiedRule_body( const CSSParserQualifiedRule *self);
