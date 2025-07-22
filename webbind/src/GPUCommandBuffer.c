#include <webbind/GPUCommandBuffer.h>


DEFINE_EMLITE_TYPE(GPUCommandBuffer, em_Val);


jb_USVString GPUCommandBuffer_label(const GPUCommandBuffer *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void GPUCommandBuffer_set_label(GPUCommandBuffer* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}

