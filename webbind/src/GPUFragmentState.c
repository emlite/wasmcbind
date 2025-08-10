#include <webbind/GPUFragmentState.h>

DEFINE_EMLITE_TYPE(GPUFragmentState, GPUProgrammableStage);


jb_Array GPUFragmentState_targets(const GPUFragmentState *self) {
    return em_Val_as(jb_Array, em_Val_get(GPUProgrammableStage_as_val(self->inner), em_Val_from("targets")));
}


void GPUFragmentState_set_targets(GPUFragmentState* self, jb_Array * value) {
    em_Val_set(GPUProgrammableStage_as_val(self->inner), em_Val_from("targets"), em_Val_from(value));
}


GPUFragmentState GPUFragmentState_new() {
    em_Val obj = em_Val_object();
    return GPUFragmentState_from_val(&obj);
}

