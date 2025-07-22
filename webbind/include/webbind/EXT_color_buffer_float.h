#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} EXT_color_buffer_float;


DECLARE_EMLITE_TYPE(EXT_color_buffer_float, em_Val);
