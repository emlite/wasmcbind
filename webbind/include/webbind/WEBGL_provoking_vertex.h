#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WEBGL_provoking_vertex;


DECLARE_EMLITE_TYPE(WEBGL_provoking_vertex, em_Val);

jb_Undefined WEBGL_provoking_vertex_provokingVertexWEBGL(WEBGL_provoking_vertex* self , const jb_Any* provokeMode);
