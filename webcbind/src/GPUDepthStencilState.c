#include <webcbind/GPUDepthStencilState.h>

DEFINE_EMLITE_TYPE(GPUDepthStencilState, em_Val);


GPUTextureFormat GPUDepthStencilState_format(const GPUDepthStencilState *self) {
    return em_Val_as(GPUTextureFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void GPUDepthStencilState_set_format(GPUDepthStencilState* self, GPUTextureFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


bool GPUDepthStencilState_depthWriteEnabled(const GPUDepthStencilState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthWriteEnabled")));
}


void GPUDepthStencilState_set_depthWriteEnabled(GPUDepthStencilState* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthWriteEnabled"), em_Val_from(value));
}


GPUCompareFunction GPUDepthStencilState_depthCompare(const GPUDepthStencilState *self) {
    return em_Val_as(GPUCompareFunction, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthCompare")));
}


void GPUDepthStencilState_set_depthCompare(GPUDepthStencilState* self, GPUCompareFunction * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthCompare"), em_Val_from(value));
}


GPUStencilFaceState GPUDepthStencilState_stencilFront(const GPUDepthStencilState *self) {
    return em_Val_as(GPUStencilFaceState, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stencilFront")));
}


void GPUDepthStencilState_set_stencilFront(GPUDepthStencilState* self, GPUStencilFaceState * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stencilFront"), em_Val_from(value));
}


GPUStencilFaceState GPUDepthStencilState_stencilBack(const GPUDepthStencilState *self) {
    return em_Val_as(GPUStencilFaceState, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stencilBack")));
}


void GPUDepthStencilState_set_stencilBack(GPUDepthStencilState* self, GPUStencilFaceState * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stencilBack"), em_Val_from(value));
}


jb_Any GPUDepthStencilState_stencilReadMask(const GPUDepthStencilState *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stencilReadMask")));
}


void GPUDepthStencilState_set_stencilReadMask(GPUDepthStencilState* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stencilReadMask"), em_Val_from(value));
}


jb_Any GPUDepthStencilState_stencilWriteMask(const GPUDepthStencilState *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stencilWriteMask")));
}


void GPUDepthStencilState_set_stencilWriteMask(GPUDepthStencilState* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stencilWriteMask"), em_Val_from(value));
}


jb_Any GPUDepthStencilState_depthBias(const GPUDepthStencilState *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthBias")));
}


void GPUDepthStencilState_set_depthBias(GPUDepthStencilState* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthBias"), em_Val_from(value));
}


float GPUDepthStencilState_depthBiasSlopeScale(const GPUDepthStencilState *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthBiasSlopeScale")));
}


void GPUDepthStencilState_set_depthBiasSlopeScale(GPUDepthStencilState* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthBiasSlopeScale"), em_Val_from(value));
}


float GPUDepthStencilState_depthBiasClamp(const GPUDepthStencilState *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthBiasClamp")));
}


void GPUDepthStencilState_set_depthBiasClamp(GPUDepthStencilState* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthBiasClamp"), em_Val_from(value));
}


GPUDepthStencilState GPUDepthStencilState_new() {
    em_Val obj = em_Val_object();
    return GPUDepthStencilState_from_val(&obj);
}

