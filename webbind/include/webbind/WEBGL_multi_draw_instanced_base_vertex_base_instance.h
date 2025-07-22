#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WEBGL_multi_draw_instanced_base_vertex_base_instance;


DECLARE_EMLITE_TYPE(WEBGL_multi_draw_instanced_base_vertex_base_instance, em_Val);

jb_Undefined WEBGL_multi_draw_instanced_base_vertex_base_instance_multiDrawArraysInstancedBaseInstanceWEBGL(WEBGL_multi_draw_instanced_base_vertex_base_instance* self , const jb_Any* mode, const jb_Any* firstsList, long long firstsOffset, const jb_Any* countsList, long long countsOffset, const jb_Any* instanceCountsList, long long instanceCountsOffset, const jb_Any* baseInstancesList, long long baseInstancesOffset, const jb_Any* drawcount);

jb_Undefined WEBGL_multi_draw_instanced_base_vertex_base_instance_multiDrawElementsInstancedBaseVertexBaseInstanceWEBGL(WEBGL_multi_draw_instanced_base_vertex_base_instance* self , const jb_Any* mode, const jb_Any* countsList, long long countsOffset, const jb_Any* type, const jb_Any* offsetsList, long long offsetsOffset, const jb_Any* instanceCountsList, long long instanceCountsOffset, const jb_Any* baseVerticesList, long long baseVerticesOffset, const jb_Any* baseInstancesList, long long baseInstancesOffset, const jb_Any* drawcount);
