#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} OES_fbo_render_mipmap;


DECLARE_EMLITE_TYPE(OES_fbo_render_mipmap, em_Val);
