#include <webbind/GPUTexelCopyBufferInfo.h>

#include <webbind/GPUBuffer.h>

DEFINE_EMLITE_TYPE(GPUTexelCopyBufferInfo, GPUTexelCopyBufferLayout);


GPUBuffer GPUTexelCopyBufferInfo_buffer(const GPUTexelCopyBufferInfo *self) {
    return em_Val_as(GPUBuffer, em_Val_get(GPUTexelCopyBufferLayout_as_val(self->inner), em_Val_from("buffer")));
}


void GPUTexelCopyBufferInfo_set_buffer(GPUTexelCopyBufferInfo* self, GPUBuffer * value) {
    em_Val_set(GPUTexelCopyBufferLayout_as_val(self->inner), em_Val_from("buffer"), em_Val_from(value));
}


GPUTexelCopyBufferInfo GPUTexelCopyBufferInfo_new() {
    em_Val obj = em_Val_object();
    return GPUTexelCopyBufferInfo_from_val(&obj);
}

