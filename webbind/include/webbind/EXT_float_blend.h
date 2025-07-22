#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} EXT_float_blend;


DECLARE_EMLITE_TYPE(EXT_float_blend, em_Val);
