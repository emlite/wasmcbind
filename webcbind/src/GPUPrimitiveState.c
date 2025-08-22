#include <webcbind/GPUPrimitiveState.h>

DEFINE_EMLITE_TYPE(GPUPrimitiveState, em_Val);


GPUPrimitiveTopology GPUPrimitiveState_topology(const GPUPrimitiveState *self) {
    return em_Val_as(GPUPrimitiveTopology, em_Val_get(em_Val_as_val(self->inner), em_Val_from("topology")));
}


void GPUPrimitiveState_set_topology(GPUPrimitiveState* self, GPUPrimitiveTopology * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("topology"), em_Val_from(value));
}


GPUIndexFormat GPUPrimitiveState_stripIndexFormat(const GPUPrimitiveState *self) {
    return em_Val_as(GPUIndexFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stripIndexFormat")));
}


void GPUPrimitiveState_set_stripIndexFormat(GPUPrimitiveState* self, GPUIndexFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stripIndexFormat"), em_Val_from(value));
}


GPUFrontFace GPUPrimitiveState_frontFace(const GPUPrimitiveState *self) {
    return em_Val_as(GPUFrontFace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("frontFace")));
}


void GPUPrimitiveState_set_frontFace(GPUPrimitiveState* self, GPUFrontFace * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("frontFace"), em_Val_from(value));
}


GPUCullMode GPUPrimitiveState_cullMode(const GPUPrimitiveState *self) {
    return em_Val_as(GPUCullMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cullMode")));
}


void GPUPrimitiveState_set_cullMode(GPUPrimitiveState* self, GPUCullMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cullMode"), em_Val_from(value));
}


bool GPUPrimitiveState_unclippedDepth(const GPUPrimitiveState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unclippedDepth")));
}


void GPUPrimitiveState_set_unclippedDepth(GPUPrimitiveState* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unclippedDepth"), em_Val_from(value));
}


GPUPrimitiveState GPUPrimitiveState_new() {
    em_Val obj = em_Val_object();
    return GPUPrimitiveState_from_val(&obj);
}

