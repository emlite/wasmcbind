#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserRule.h"
#include "enums.h"

typedef struct CSSParserValue CSSParserValue;


DECLARE_EMLITE_TYPE(CSSParserAtRule, CSSParserRule);

CSSParserAtRule CSSParserAtRule_new0(jb_DOMString * name, jb_Sequence * prelude);

CSSParserAtRule CSSParserAtRule_new1(jb_DOMString * name, jb_Sequence * prelude, jb_Sequence * body);

jb_DOMString CSSParserAtRule_name(const CSSParserAtRule *self);

jb_FrozenArray CSSParserAtRule_prelude(const CSSParserAtRule *self);

jb_FrozenArray CSSParserAtRule_body(const CSSParserAtRule *self);
