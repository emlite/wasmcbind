#include <webbind/GPUCommandBuffer.h>


DEFINE_EMLITE_TYPE(GPUCommandBuffer, em_Val);


jb_String GPUCommandBuffer_label(const GPUCommandBuffer *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUCommandBuffer_set_label(GPUCommandBuffer* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

