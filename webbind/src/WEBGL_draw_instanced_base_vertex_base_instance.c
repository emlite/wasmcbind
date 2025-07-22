#include <webbind/WEBGL_draw_instanced_base_vertex_base_instance.h>


DEFINE_EMLITE_TYPE(WEBGL_draw_instanced_base_vertex_base_instance, em_Val);


jb_Undefined WEBGL_draw_instanced_base_vertex_base_instance_drawArraysInstancedBaseInstanceWEBGL(WEBGL_draw_instanced_base_vertex_base_instance* self , const jb_Any* mode, const jb_Any* first, const jb_Any* count, const jb_Any* instanceCount, const jb_Any* baseInstance) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawArraysInstancedBaseInstanceWEBGL", em_Val_from(mode), em_Val_from(first), em_Val_from(count), em_Val_from(instanceCount), em_Val_from(baseInstance)));
}


jb_Undefined WEBGL_draw_instanced_base_vertex_base_instance_drawElementsInstancedBaseVertexBaseInstanceWEBGL(WEBGL_draw_instanced_base_vertex_base_instance* self , const jb_Any* mode, const jb_Any* count, const jb_Any* type, const jb_Any* offset, const jb_Any* instanceCount, const jb_Any* baseVertex, const jb_Any* baseInstance) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawElementsInstancedBaseVertexBaseInstanceWEBGL", em_Val_from(mode), em_Val_from(count), em_Val_from(type), em_Val_from(offset), em_Val_from(instanceCount), em_Val_from(baseVertex), em_Val_from(baseInstance)));
}

