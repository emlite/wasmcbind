#include <webcbind/GPUBufferBinding.h>

#include <webcbind/GPUBuffer.h>

DEFINE_EMLITE_TYPE(GPUBufferBinding, em_Val);


GPUBuffer GPUBufferBinding_buffer(const GPUBufferBinding *self) {
    return em_Val_as(GPUBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("buffer")));
}


void GPUBufferBinding_set_buffer(GPUBufferBinding* self, GPUBuffer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("buffer"), em_Val_from(value));
}


jb_Any GPUBufferBinding_offset(const GPUBufferBinding *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


void GPUBufferBinding_set_offset(GPUBufferBinding* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offset"), em_Val_from(value));
}


jb_Any GPUBufferBinding_size(const GPUBufferBinding *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}


void GPUBufferBinding_set_size(GPUBufferBinding* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}


GPUBufferBinding GPUBufferBinding_new() {
    em_Val obj = em_Val_object();
    return GPUBufferBinding_from_val(&obj);
}

