#include <webbind/GPUBlendComponent.h>

DEFINE_EMLITE_TYPE(GPUBlendComponent, em_Val);


GPUBlendOperation GPUBlendComponent_operation(const GPUBlendComponent *self) {
    return em_Val_as(GPUBlendOperation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("operation")));
}


void GPUBlendComponent_set_operation(GPUBlendComponent* self, GPUBlendOperation * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("operation"), em_Val_from(value));
}


GPUBlendFactor GPUBlendComponent_srcFactor(const GPUBlendComponent *self) {
    return em_Val_as(GPUBlendFactor, em_Val_get(em_Val_as_val(self->inner), em_Val_from("srcFactor")));
}


void GPUBlendComponent_set_srcFactor(GPUBlendComponent* self, GPUBlendFactor * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("srcFactor"), em_Val_from(value));
}


GPUBlendFactor GPUBlendComponent_dstFactor(const GPUBlendComponent *self) {
    return em_Val_as(GPUBlendFactor, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dstFactor")));
}


void GPUBlendComponent_set_dstFactor(GPUBlendComponent* self, GPUBlendFactor * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dstFactor"), em_Val_from(value));
}


GPUBlendComponent GPUBlendComponent_new() {
    em_Val obj = em_Val_object();
    return GPUBlendComponent_from_val(&obj);
}

