#include <webbind/GPUBuffer.h>


DEFINE_EMLITE_TYPE(GPUBuffer, em_Val);


jb_Any GPUBuffer_size(const GPUBuffer *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("size")));
}


jb_Any GPUBuffer_usage(const GPUBuffer *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usage")));
}


GPUBufferMapState GPUBuffer_mapState(const GPUBuffer *self) {
    return em_Val_as(GPUBufferMapState, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mapState")));
}


jb_Promise GPUBuffer_mapAsync0(GPUBuffer* self , jb_Any * mode) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "mapAsync", em_Val_from(mode)));
}


jb_Promise GPUBuffer_mapAsync1(GPUBuffer* self , jb_Any * mode, jb_Any * offset) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "mapAsync", em_Val_from(mode), em_Val_from(offset)));
}


jb_Promise GPUBuffer_mapAsync2(GPUBuffer* self , jb_Any * mode, jb_Any * offset, jb_Any * size) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "mapAsync", em_Val_from(mode), em_Val_from(offset), em_Val_from(size)));
}


jb_ArrayBuffer GPUBuffer_getMappedRange0(GPUBuffer* self ) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "getMappedRange"));
}


jb_ArrayBuffer GPUBuffer_getMappedRange1(GPUBuffer* self , jb_Any * offset) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "getMappedRange", em_Val_from(offset)));
}


jb_ArrayBuffer GPUBuffer_getMappedRange2(GPUBuffer* self , jb_Any * offset, jb_Any * size) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "getMappedRange", em_Val_from(offset), em_Val_from(size)));
}


jb_Undefined GPUBuffer_unmap(GPUBuffer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "unmap"));
}


jb_Undefined GPUBuffer_destroy(GPUBuffer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}


jb_USVString GPUBuffer_label(const GPUBuffer *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUBuffer_set_label(GPUBuffer* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}

