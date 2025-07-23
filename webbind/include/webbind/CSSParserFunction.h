#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserValue.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CSSParserFunction, CSSParserValue);

CSSParserFunction CSSParserFunction_new(jb_DOMString * name, jb_Sequence * args);

jb_DOMString CSSParserFunction_name(const CSSParserFunction *self);

jb_FrozenArray CSSParserFunction_args(const CSSParserFunction *self);
