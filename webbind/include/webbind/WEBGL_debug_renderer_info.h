#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WEBGL_debug_renderer_info;


DECLARE_EMLITE_TYPE(WEBGL_debug_renderer_info, em_Val);
