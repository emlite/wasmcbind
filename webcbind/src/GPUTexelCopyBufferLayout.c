#include <webcbind/GPUTexelCopyBufferLayout.h>

DEFINE_EMLITE_TYPE(GPUTexelCopyBufferLayout, em_Val);


jb_Any GPUTexelCopyBufferLayout_offset(const GPUTexelCopyBufferLayout *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


void GPUTexelCopyBufferLayout_set_offset(GPUTexelCopyBufferLayout* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offset"), em_Val_from(value));
}


jb_Any GPUTexelCopyBufferLayout_bytesPerRow(const GPUTexelCopyBufferLayout *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytesPerRow")));
}


void GPUTexelCopyBufferLayout_set_bytesPerRow(GPUTexelCopyBufferLayout* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytesPerRow"), em_Val_from(value));
}


jb_Any GPUTexelCopyBufferLayout_rowsPerImage(const GPUTexelCopyBufferLayout *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rowsPerImage")));
}


void GPUTexelCopyBufferLayout_set_rowsPerImage(GPUTexelCopyBufferLayout* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rowsPerImage"), em_Val_from(value));
}


GPUTexelCopyBufferLayout GPUTexelCopyBufferLayout_new() {
    em_Val obj = em_Val_object();
    return GPUTexelCopyBufferLayout_from_val(&obj);
}

