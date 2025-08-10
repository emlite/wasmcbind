#include <webbind/WEBGL_provoking_vertex.h>

DEFINE_EMLITE_TYPE(WEBGL_provoking_vertex, em_Val);


jb_Undefined WEBGL_provoking_vertex_provokingVertexWEBGL(WEBGL_provoking_vertex* self , jb_Any * provokeMode) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "provokingVertexWEBGL", em_Val_from(provokeMode)));
}

