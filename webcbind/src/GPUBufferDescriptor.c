#include <webcbind/GPUBufferDescriptor.h>

DEFINE_EMLITE_TYPE(GPUBufferDescriptor, GPUObjectDescriptorBase);


jb_Any GPUBufferDescriptor_size(const GPUBufferDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("size")));
}


void GPUBufferDescriptor_set_size(GPUBufferDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}


jb_Any GPUBufferDescriptor_usage(const GPUBufferDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("usage")));
}


void GPUBufferDescriptor_set_usage(GPUBufferDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("usage"), em_Val_from(value));
}


bool GPUBufferDescriptor_mappedAtCreation(const GPUBufferDescriptor *self) {
    return em_Val_as(bool, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("mappedAtCreation")));
}


void GPUBufferDescriptor_set_mappedAtCreation(GPUBufferDescriptor* self, bool value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("mappedAtCreation"), em_Val_from(value));
}


GPUBufferDescriptor GPUBufferDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUBufferDescriptor_from_val(&obj);
}

