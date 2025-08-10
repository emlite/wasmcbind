#include <webbind/GPUTextureBindingLayout.h>

DEFINE_EMLITE_TYPE(GPUTextureBindingLayout, em_Val);


GPUTextureSampleType GPUTextureBindingLayout_sampleType(const GPUTextureBindingLayout *self) {
    return em_Val_as(GPUTextureSampleType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleType")));
}


void GPUTextureBindingLayout_set_sampleType(GPUTextureBindingLayout* self, GPUTextureSampleType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sampleType"), em_Val_from(value));
}


GPUTextureViewDimension GPUTextureBindingLayout_viewDimension(const GPUTextureBindingLayout *self) {
    return em_Val_as(GPUTextureViewDimension, em_Val_get(em_Val_as_val(self->inner), em_Val_from("viewDimension")));
}


void GPUTextureBindingLayout_set_viewDimension(GPUTextureBindingLayout* self, GPUTextureViewDimension * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("viewDimension"), em_Val_from(value));
}


bool GPUTextureBindingLayout_multisampled(const GPUTextureBindingLayout *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("multisampled")));
}


void GPUTextureBindingLayout_set_multisampled(GPUTextureBindingLayout* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("multisampled"), em_Val_from(value));
}


GPUTextureBindingLayout GPUTextureBindingLayout_new() {
    em_Val obj = em_Val_object();
    return GPUTextureBindingLayout_from_val(&obj);
}

