#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WEBGL_draw_instanced_base_vertex_base_instance;


DECLARE_EMLITE_TYPE(WEBGL_draw_instanced_base_vertex_base_instance, em_Val);

jb_Undefined WEBGL_draw_instanced_base_vertex_base_instance_drawArraysInstancedBaseInstanceWEBGL(WEBGL_draw_instanced_base_vertex_base_instance* self , const jb_Any* mode, const jb_Any* first, const jb_Any* count, const jb_Any* instanceCount, const jb_Any* baseInstance);

jb_Undefined WEBGL_draw_instanced_base_vertex_base_instance_drawElementsInstancedBaseVertexBaseInstanceWEBGL(WEBGL_draw_instanced_base_vertex_base_instance* self , const jb_Any* mode, const jb_Any* count, const jb_Any* type, const jb_Any* offset, const jb_Any* instanceCount, const jb_Any* baseVertex, const jb_Any* baseInstance);
