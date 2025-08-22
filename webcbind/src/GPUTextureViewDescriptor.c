#include <webcbind/GPUTextureViewDescriptor.h>

DEFINE_EMLITE_TYPE(GPUTextureViewDescriptor, GPUObjectDescriptorBase);


GPUTextureFormat GPUTextureViewDescriptor_format(const GPUTextureViewDescriptor *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("format")));
}


void GPUTextureViewDescriptor_set_format(GPUTextureViewDescriptor* self, GPUTextureFormat * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


GPUTextureViewDimension GPUTextureViewDescriptor_dimension(const GPUTextureViewDescriptor *self) {
    return em_Val_as(GPUTextureViewDimension, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("dimension")));
}


void GPUTextureViewDescriptor_set_dimension(GPUTextureViewDescriptor* self, GPUTextureViewDimension * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("dimension"), em_Val_from(value));
}


jb_Any GPUTextureViewDescriptor_usage(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("usage")));
}


void GPUTextureViewDescriptor_set_usage(GPUTextureViewDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("usage"), em_Val_from(value));
}


GPUTextureAspect GPUTextureViewDescriptor_aspect(const GPUTextureViewDescriptor *self) {
    return em_Val_as(GPUTextureAspect, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("aspect")));
}


void GPUTextureViewDescriptor_set_aspect(GPUTextureViewDescriptor* self, GPUTextureAspect * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("aspect"), em_Val_from(value));
}


jb_Any GPUTextureViewDescriptor_baseMipLevel(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("baseMipLevel")));
}


void GPUTextureViewDescriptor_set_baseMipLevel(GPUTextureViewDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("baseMipLevel"), em_Val_from(value));
}


jb_Any GPUTextureViewDescriptor_mipLevelCount(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("mipLevelCount")));
}


void GPUTextureViewDescriptor_set_mipLevelCount(GPUTextureViewDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("mipLevelCount"), em_Val_from(value));
}


jb_Any GPUTextureViewDescriptor_baseArrayLayer(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("baseArrayLayer")));
}


void GPUTextureViewDescriptor_set_baseArrayLayer(GPUTextureViewDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("baseArrayLayer"), em_Val_from(value));
}


jb_Any GPUTextureViewDescriptor_arrayLayerCount(const GPUTextureViewDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("arrayLayerCount")));
}


void GPUTextureViewDescriptor_set_arrayLayerCount(GPUTextureViewDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("arrayLayerCount"), em_Val_from(value));
}


GPUTextureViewDescriptor GPUTextureViewDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUTextureViewDescriptor_from_val(&obj);
}

