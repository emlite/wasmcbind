#include <webcbind/GPUBlendState.h>

DEFINE_EMLITE_TYPE(GPUBlendState, em_Val);


GPUBlendComponent GPUBlendState_color(const GPUBlendState *self) {
    return em_Val_as(GPUBlendComponent, em_Val_get(em_Val_as_val(self->inner), em_Val_from("color")));
}


void GPUBlendState_set_color(GPUBlendState* self, GPUBlendComponent * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("color"), em_Val_from(value));
}


GPUBlendComponent GPUBlendState_alpha(const GPUBlendState *self) {
    return em_Val_as(GPUBlendComponent, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


void GPUBlendState_set_alpha(GPUBlendState* self, GPUBlendComponent * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


GPUBlendState GPUBlendState_new() {
    em_Val obj = em_Val_object();
    return GPUBlendState_from_val(&obj);
}

