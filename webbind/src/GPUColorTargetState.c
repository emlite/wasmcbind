#include <webbind/GPUColorTargetState.h>

DEFINE_EMLITE_TYPE(GPUColorTargetState, em_Val);


GPUTextureFormat GPUColorTargetState_format(const GPUColorTargetState *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void GPUColorTargetState_set_format(GPUColorTargetState* self, GPUTextureFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


GPUBlendState GPUColorTargetState_blend(const GPUColorTargetState *self) {
    return em_Val_as(GPUBlendState, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blend")));
}


void GPUColorTargetState_set_blend(GPUColorTargetState* self, GPUBlendState * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("blend"), em_Val_from(value));
}


jb_Any GPUColorTargetState_writeMask(const GPUColorTargetState *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("writeMask")));
}


void GPUColorTargetState_set_writeMask(GPUColorTargetState* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("writeMask"), em_Val_from(value));
}


GPUColorTargetState GPUColorTargetState_new() {
    em_Val obj = em_Val_object();
    return GPUColorTargetState_from_val(&obj);
}

