#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WEBGL_depth_texture;


DECLARE_EMLITE_TYPE(WEBGL_depth_texture, em_Val);
