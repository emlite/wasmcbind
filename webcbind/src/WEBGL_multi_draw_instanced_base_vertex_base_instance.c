#include <webcbind/WEBGL_multi_draw_instanced_base_vertex_base_instance.h>

DEFINE_EMLITE_TYPE(WEBGL_multi_draw_instanced_base_vertex_base_instance, em_Val);


jb_Undefined WEBGL_multi_draw_instanced_base_vertex_base_instance_multiDrawArraysInstancedBaseInstanceWEBGL(WEBGL_multi_draw_instanced_base_vertex_base_instance* self , jb_Any * mode, jb_Any * firstsList, long long firstsOffset, jb_Any * countsList, long long countsOffset, jb_Any * instanceCountsList, long long instanceCountsOffset, jb_Any * baseInstancesList, long long baseInstancesOffset, jb_Any * drawcount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "multiDrawArraysInstancedBaseInstanceWEBGL", em_Val_from(mode), em_Val_from(firstsList), em_Val_from(firstsOffset), em_Val_from(countsList), em_Val_from(countsOffset), em_Val_from(instanceCountsList), em_Val_from(instanceCountsOffset), em_Val_from(baseInstancesList), em_Val_from(baseInstancesOffset), em_Val_from(drawcount)));
}


jb_Undefined WEBGL_multi_draw_instanced_base_vertex_base_instance_multiDrawElementsInstancedBaseVertexBaseInstanceWEBGL(WEBGL_multi_draw_instanced_base_vertex_base_instance* self , jb_Any * mode, jb_Any * countsList, long long countsOffset, jb_Any * type, jb_Any * offsetsList, long long offsetsOffset, jb_Any * instanceCountsList, long long instanceCountsOffset, jb_Any * baseVerticesList, long long baseVerticesOffset, jb_Any * baseInstancesList, long long baseInstancesOffset, jb_Any * drawcount) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "multiDrawElementsInstancedBaseVertexBaseInstanceWEBGL", em_Val_from(mode), em_Val_from(countsList), em_Val_from(countsOffset), em_Val_from(type), em_Val_from(offsetsList), em_Val_from(offsetsOffset), em_Val_from(instanceCountsList), em_Val_from(instanceCountsOffset), em_Val_from(baseVerticesList), em_Val_from(baseVerticesOffset), em_Val_from(baseInstancesList), em_Val_from(baseInstancesOffset), em_Val_from(drawcount)));
}

