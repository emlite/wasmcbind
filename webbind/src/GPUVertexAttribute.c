#include <webbind/GPUVertexAttribute.h>

DEFINE_EMLITE_TYPE(GPUVertexAttribute, em_Val);


GPUVertexFormat GPUVertexAttribute_format(const GPUVertexAttribute *self) {
    return em_Val_as(GPUVertexFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void GPUVertexAttribute_set_format(GPUVertexAttribute* self, GPUVertexFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


jb_Any GPUVertexAttribute_offset(const GPUVertexAttribute *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


void GPUVertexAttribute_set_offset(GPUVertexAttribute* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offset"), em_Val_from(value));
}


jb_Any GPUVertexAttribute_shaderLocation(const GPUVertexAttribute *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shaderLocation")));
}


void GPUVertexAttribute_set_shaderLocation(GPUVertexAttribute* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shaderLocation"), em_Val_from(value));
}


GPUVertexAttribute GPUVertexAttribute_new() {
    em_Val obj = em_Val_object();
    return GPUVertexAttribute_from_val(&obj);
}

