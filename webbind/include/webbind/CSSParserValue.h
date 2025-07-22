#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} CSSParserValue;


DECLARE_EMLITE_TYPE(CSSParserValue, em_Val);
