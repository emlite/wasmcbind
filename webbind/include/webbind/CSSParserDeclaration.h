#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserRule.h"
#include "enums.h"

typedef struct CSSParserValue CSSParserValue;


DECLARE_EMLITE_TYPE(CSSParserDeclaration, CSSParserRule);

CSSParserDeclaration CSSParserDeclaration_new0(jb_DOMString * name);

CSSParserDeclaration CSSParserDeclaration_new1(jb_DOMString * name, jb_Sequence * body);

jb_DOMString CSSParserDeclaration_name( const CSSParserDeclaration *self);

jb_FrozenArray CSSParserDeclaration_body( const CSSParserDeclaration *self);
