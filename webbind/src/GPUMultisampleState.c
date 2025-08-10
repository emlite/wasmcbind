#include <webbind/GPUMultisampleState.h>

DEFINE_EMLITE_TYPE(GPUMultisampleState, em_Val);


jb_Any GPUMultisampleState_count(const GPUMultisampleState *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("count")));
}


void GPUMultisampleState_set_count(GPUMultisampleState* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("count"), em_Val_from(value));
}


jb_Any GPUMultisampleState_mask(const GPUMultisampleState *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mask")));
}


void GPUMultisampleState_set_mask(GPUMultisampleState* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mask"), em_Val_from(value));
}


bool GPUMultisampleState_alphaToCoverageEnabled(const GPUMultisampleState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alphaToCoverageEnabled")));
}


void GPUMultisampleState_set_alphaToCoverageEnabled(GPUMultisampleState* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alphaToCoverageEnabled"), em_Val_from(value));
}


GPUMultisampleState GPUMultisampleState_new() {
    em_Val obj = em_Val_object();
    return GPUMultisampleState_from_val(&obj);
}

