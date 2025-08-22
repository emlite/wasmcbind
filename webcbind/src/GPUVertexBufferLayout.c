#include <webcbind/GPUVertexBufferLayout.h>

DEFINE_EMLITE_TYPE(GPUVertexBufferLayout, em_Val);


jb_Any GPUVertexBufferLayout_arrayStride(const GPUVertexBufferLayout *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("arrayStride")));
}


void GPUVertexBufferLayout_set_arrayStride(GPUVertexBufferLayout* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("arrayStride"), em_Val_from(value));
}


GPUVertexStepMode GPUVertexBufferLayout_stepMode(const GPUVertexBufferLayout *self) {
    return em_Val_as(GPUVertexStepMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stepMode")));
}


void GPUVertexBufferLayout_set_stepMode(GPUVertexBufferLayout* self, GPUVertexStepMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stepMode"), em_Val_from(value));
}


jb_Array GPUVertexBufferLayout_attributes(const GPUVertexBufferLayout *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attributes")));
}


void GPUVertexBufferLayout_set_attributes(GPUVertexBufferLayout* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attributes"), em_Val_from(value));
}


GPUVertexBufferLayout GPUVertexBufferLayout_new() {
    em_Val obj = em_Val_object();
    return GPUVertexBufferLayout_from_val(&obj);
}

