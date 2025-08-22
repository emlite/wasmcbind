#include <webcbind/GPUVertexState.h>

DEFINE_EMLITE_TYPE(GPUVertexState, GPUProgrammableStage);


jb_Array GPUVertexState_buffers(const GPUVertexState *self) {
    return em_Val_as(jb_Array, em_Val_get(GPUProgrammableStage_as_val(self->inner), em_Val_from("buffers")));
}


void GPUVertexState_set_buffers(GPUVertexState* self, jb_Array * value) {
    em_Val_set(GPUProgrammableStage_as_val(self->inner), em_Val_from("buffers"), em_Val_from(value));
}


GPUVertexState GPUVertexState_new() {
    em_Val obj = em_Val_object();
    return GPUVertexState_from_val(&obj);
}

