#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} EXT_blend_minmax;


DECLARE_EMLITE_TYPE(EXT_blend_minmax, em_Val);
