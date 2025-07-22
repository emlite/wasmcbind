#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserValue.h"
#include "enums.h"


typedef struct {
  CSSParserValue inner;
} CSSParserBlock;


DECLARE_EMLITE_TYPE(CSSParserBlock, CSSParserValue);

CSSParserBlock CSSParserBlock_new(const jb_DOMString* name, const jb_Sequence* body);

jb_DOMString CSSParserBlock_name( const CSSParserBlock *self);

jb_FrozenArray CSSParserBlock_body( const CSSParserBlock *self);
