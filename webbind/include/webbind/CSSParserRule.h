#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} CSSParserRule;


DECLARE_EMLITE_TYPE(CSSParserRule, em_Val);
