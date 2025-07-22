#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserValue.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CSSParserBlock, CSSParserValue);

CSSParserBlock CSSParserBlock_new(jb_DOMString * name, jb_Sequence * body);

jb_DOMString CSSParserBlock_name( const CSSParserBlock *self);

jb_FrozenArray CSSParserBlock_body( const CSSParserBlock *self);
