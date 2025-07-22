#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserRule.h"
#include "enums.h"

typedef struct CSSParserValue CSSParserValue;


typedef struct {
  CSSParserRule inner;
} CSSParserDeclaration;


DECLARE_EMLITE_TYPE(CSSParserDeclaration, CSSParserRule);

CSSParserDeclaration CSSParserDeclaration_new(const jb_DOMString* name);

CSSParserDeclaration CSSParserDeclaration_new(const jb_DOMString* name, const jb_Sequence* body);

jb_DOMString CSSParserDeclaration_name( const CSSParserDeclaration *self);

jb_FrozenArray CSSParserDeclaration_body( const CSSParserDeclaration *self);
