#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} OES_texture_half_float_linear;


DECLARE_EMLITE_TYPE(OES_texture_half_float_linear, em_Val);
