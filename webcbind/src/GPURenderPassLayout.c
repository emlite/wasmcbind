#include <webcbind/GPURenderPassLayout.h>

DEFINE_EMLITE_TYPE(GPURenderPassLayout, GPUObjectDescriptorBase);


jb_Array GPURenderPassLayout_colorFormats(const GPURenderPassLayout *self) {
    return em_Val_as(jb_Array, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("colorFormats")));
}


void GPURenderPassLayout_set_colorFormats(GPURenderPassLayout* self, jb_Array * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("colorFormats"), em_Val_from(value));
}


GPUTextureFormat GPURenderPassLayout_depthStencilFormat(const GPURenderPassLayout *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("depthStencilFormat")));
}


void GPURenderPassLayout_set_depthStencilFormat(GPURenderPassLayout* self, GPUTextureFormat * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("depthStencilFormat"), em_Val_from(value));
}


jb_Any GPURenderPassLayout_sampleCount(const GPURenderPassLayout *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("sampleCount")));
}


void GPURenderPassLayout_set_sampleCount(GPURenderPassLayout* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("sampleCount"), em_Val_from(value));
}


GPURenderPassLayout GPURenderPassLayout_new() {
    em_Val obj = em_Val_object();
    return GPURenderPassLayout_from_val(&obj);
}

