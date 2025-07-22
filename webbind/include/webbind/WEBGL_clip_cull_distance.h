#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WEBGL_clip_cull_distance;


DECLARE_EMLITE_TYPE(WEBGL_clip_cull_distance, em_Val);
