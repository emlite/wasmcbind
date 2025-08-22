#include <webcbind/GPUTextureDescriptor.h>

DEFINE_EMLITE_TYPE(GPUTextureDescriptor, GPUObjectDescriptorBase);


jb_Any GPUTextureDescriptor_size(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("size")));
}


void GPUTextureDescriptor_set_size(GPUTextureDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}


jb_Any GPUTextureDescriptor_mipLevelCount(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("mipLevelCount")));
}


void GPUTextureDescriptor_set_mipLevelCount(GPUTextureDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("mipLevelCount"), em_Val_from(value));
}


jb_Any GPUTextureDescriptor_sampleCount(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("sampleCount")));
}


void GPUTextureDescriptor_set_sampleCount(GPUTextureDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("sampleCount"), em_Val_from(value));
}


GPUTextureDimension GPUTextureDescriptor_dimension(const GPUTextureDescriptor *self) {
    return em_Val_as(GPUTextureDimension, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("dimension")));
}


void GPUTextureDescriptor_set_dimension(GPUTextureDescriptor* self, GPUTextureDimension * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("dimension"), em_Val_from(value));
}


GPUTextureFormat GPUTextureDescriptor_format(const GPUTextureDescriptor *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("format")));
}


void GPUTextureDescriptor_set_format(GPUTextureDescriptor* self, GPUTextureFormat * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


jb_Any GPUTextureDescriptor_usage(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("usage")));
}


void GPUTextureDescriptor_set_usage(GPUTextureDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("usage"), em_Val_from(value));
}


jb_Array GPUTextureDescriptor_viewFormats(const GPUTextureDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("viewFormats")));
}


void GPUTextureDescriptor_set_viewFormats(GPUTextureDescriptor* self, jb_Array * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("viewFormats"), em_Val_from(value));
}


GPUTextureDescriptor GPUTextureDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUTextureDescriptor_from_val(&obj);
}

