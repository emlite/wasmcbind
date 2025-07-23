#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSParserRule.h"
#include "enums.h"

typedef struct CSSParserValue CSSParserValue;


DECLARE_EMLITE_TYPE(CSSParserQualifiedRule, CSSParserRule);

CSSParserQualifiedRule CSSParserQualifiedRule_new0(jb_Sequence * prelude);

CSSParserQualifiedRule CSSParserQualifiedRule_new1(jb_Sequence * prelude, jb_Sequence * body);

jb_FrozenArray CSSParserQualifiedRule_prelude(const CSSParserQualifiedRule *self);

jb_FrozenArray CSSParserQualifiedRule_body(const CSSParserQualifiedRule *self);
