#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserValue.h"
#include "enums.h"


typedef struct {
  CSSParserValue inner;
} CSSParserFunction;


DECLARE_EMLITE_TYPE(CSSParserFunction, CSSParserValue);

CSSParserFunction CSSParserFunction_new(const jb_DOMString* name, const jb_Sequence* args);

jb_DOMString CSSParserFunction_name( const CSSParserFunction *self);

jb_FrozenArray CSSParserFunction_args( const CSSParserFunction *self);
