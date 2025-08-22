#include <webcbind/GPUStencilFaceState.h>

DEFINE_EMLITE_TYPE(GPUStencilFaceState, em_Val);


GPUCompareFunction GPUStencilFaceState_compare(const GPUStencilFaceState *self) {
    return em_Val_as(GPUCompareFunction, em_Val_get(em_Val_as_val(self->inner), em_Val_from("compare")));
}


void GPUStencilFaceState_set_compare(GPUStencilFaceState* self, GPUCompareFunction * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("compare"), em_Val_from(value));
}


GPUStencilOperation GPUStencilFaceState_failOp(const GPUStencilFaceState *self) {
    return em_Val_as(GPUStencilOperation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("failOp")));
}


void GPUStencilFaceState_set_failOp(GPUStencilFaceState* self, GPUStencilOperation * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("failOp"), em_Val_from(value));
}


GPUStencilOperation GPUStencilFaceState_depthFailOp(const GPUStencilFaceState *self) {
    return em_Val_as(GPUStencilOperation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthFailOp")));
}


void GPUStencilFaceState_set_depthFailOp(GPUStencilFaceState* self, GPUStencilOperation * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthFailOp"), em_Val_from(value));
}


GPUStencilOperation GPUStencilFaceState_passOp(const GPUStencilFaceState *self) {
    return em_Val_as(GPUStencilOperation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("passOp")));
}


void GPUStencilFaceState_set_passOp(GPUStencilFaceState* self, GPUStencilOperation * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("passOp"), em_Val_from(value));
}


GPUStencilFaceState GPUStencilFaceState_new() {
    em_Val obj = em_Val_object();
    return GPUStencilFaceState_from_val(&obj);
}

