#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WEBGL_draw_buffers;


DECLARE_EMLITE_TYPE(WEBGL_draw_buffers, em_Val);

jb_Undefined WEBGL_draw_buffers_drawBuffersWEBGL(WEBGL_draw_buffers* self , const jb_Sequence* buffers);
