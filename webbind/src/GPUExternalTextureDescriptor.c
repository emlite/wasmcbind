#include <webbind/GPUExternalTextureDescriptor.h>

DEFINE_EMLITE_TYPE(GPUExternalTextureDescriptor, GPUObjectDescriptorBase);


jb_Any GPUExternalTextureDescriptor_source(const GPUExternalTextureDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("source")));
}


void GPUExternalTextureDescriptor_set_source(GPUExternalTextureDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}


PredefinedColorSpace GPUExternalTextureDescriptor_colorSpace(const GPUExternalTextureDescriptor *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("colorSpace")));
}


void GPUExternalTextureDescriptor_set_colorSpace(GPUExternalTextureDescriptor* self, PredefinedColorSpace * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("colorSpace"), em_Val_from(value));
}


GPUExternalTextureDescriptor GPUExternalTextureDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPUExternalTextureDescriptor_from_val(&obj);
}

