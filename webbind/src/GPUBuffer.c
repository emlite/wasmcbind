#include <webbind/GPUBuffer.h>


DEFINE_EMLITE_TYPE(GPUBuffer, em_Val);


jb_Any GPUBuffer_size(const GPUBuffer *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "size"));
}


jb_Any GPUBuffer_usage(const GPUBuffer *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "usage"));
}


GPUBufferMapState GPUBuffer_mapState(const GPUBuffer *self) {
    return em_Val_as(GPUBufferMapState, em_Val_get(em_Val_as_val(self->inner), "mapState"));
}


jb_Promise GPUBuffer_mapAsync(GPUBuffer* self , const jb_Any* mode) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "mapAsync", em_Val_from(mode)));
}


jb_Promise GPUBuffer_mapAsync(GPUBuffer* self , const jb_Any* mode, const jb_Any* offset) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "mapAsync", em_Val_from(mode), em_Val_from(offset)));
}


jb_Promise GPUBuffer_mapAsync(GPUBuffer* self , const jb_Any* mode, const jb_Any* offset, const jb_Any* size) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "mapAsync", em_Val_from(mode), em_Val_from(offset), em_Val_from(size)));
}


jb_ArrayBuffer GPUBuffer_getMappedRange(GPUBuffer* self ) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "getMappedRange"));
}


jb_ArrayBuffer GPUBuffer_getMappedRange(GPUBuffer* self , const jb_Any* offset) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "getMappedRange", em_Val_from(offset)));
}


jb_ArrayBuffer GPUBuffer_getMappedRange(GPUBuffer* self , const jb_Any* offset, const jb_Any* size) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "getMappedRange", em_Val_from(offset), em_Val_from(size)));
}


jb_Undefined GPUBuffer_unmap(GPUBuffer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "unmap"));
}


jb_Undefined GPUBuffer_destroy(GPUBuffer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}


jb_USVString GPUBuffer_label(const GPUBuffer *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void GPUBuffer_set_label(GPUBuffer* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}

