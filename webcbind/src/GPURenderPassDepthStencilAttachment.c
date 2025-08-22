#include <webcbind/GPURenderPassDepthStencilAttachment.h>

DEFINE_EMLITE_TYPE(GPURenderPassDepthStencilAttachment, em_Val);


jb_Any GPURenderPassDepthStencilAttachment_view(const GPURenderPassDepthStencilAttachment *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("view")));
}


void GPURenderPassDepthStencilAttachment_set_view(GPURenderPassDepthStencilAttachment* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("view"), em_Val_from(value));
}


float GPURenderPassDepthStencilAttachment_depthClearValue(const GPURenderPassDepthStencilAttachment *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthClearValue")));
}


void GPURenderPassDepthStencilAttachment_set_depthClearValue(GPURenderPassDepthStencilAttachment* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthClearValue"), em_Val_from(value));
}


GPULoadOp GPURenderPassDepthStencilAttachment_depthLoadOp(const GPURenderPassDepthStencilAttachment *self) {
    return em_Val_as(GPULoadOp, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthLoadOp")));
}


void GPURenderPassDepthStencilAttachment_set_depthLoadOp(GPURenderPassDepthStencilAttachment* self, GPULoadOp * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthLoadOp"), em_Val_from(value));
}


GPUStoreOp GPURenderPassDepthStencilAttachment_depthStoreOp(const GPURenderPassDepthStencilAttachment *self) {
    return em_Val_as(GPUStoreOp, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthStoreOp")));
}


void GPURenderPassDepthStencilAttachment_set_depthStoreOp(GPURenderPassDepthStencilAttachment* self, GPUStoreOp * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthStoreOp"), em_Val_from(value));
}


bool GPURenderPassDepthStencilAttachment_depthReadOnly(const GPURenderPassDepthStencilAttachment *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthReadOnly")));
}


void GPURenderPassDepthStencilAttachment_set_depthReadOnly(GPURenderPassDepthStencilAttachment* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthReadOnly"), em_Val_from(value));
}


jb_Any GPURenderPassDepthStencilAttachment_stencilClearValue(const GPURenderPassDepthStencilAttachment *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stencilClearValue")));
}


void GPURenderPassDepthStencilAttachment_set_stencilClearValue(GPURenderPassDepthStencilAttachment* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stencilClearValue"), em_Val_from(value));
}


GPULoadOp GPURenderPassDepthStencilAttachment_stencilLoadOp(const GPURenderPassDepthStencilAttachment *self) {
    return em_Val_as(GPULoadOp, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stencilLoadOp")));
}


void GPURenderPassDepthStencilAttachment_set_stencilLoadOp(GPURenderPassDepthStencilAttachment* self, GPULoadOp * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stencilLoadOp"), em_Val_from(value));
}


GPUStoreOp GPURenderPassDepthStencilAttachment_stencilStoreOp(const GPURenderPassDepthStencilAttachment *self) {
    return em_Val_as(GPUStoreOp, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stencilStoreOp")));
}


void GPURenderPassDepthStencilAttachment_set_stencilStoreOp(GPURenderPassDepthStencilAttachment* self, GPUStoreOp * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stencilStoreOp"), em_Val_from(value));
}


bool GPURenderPassDepthStencilAttachment_stencilReadOnly(const GPURenderPassDepthStencilAttachment *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stencilReadOnly")));
}


void GPURenderPassDepthStencilAttachment_set_stencilReadOnly(GPURenderPassDepthStencilAttachment* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stencilReadOnly"), em_Val_from(value));
}


GPURenderPassDepthStencilAttachment GPURenderPassDepthStencilAttachment_new() {
    em_Val obj = em_Val_object();
    return GPURenderPassDepthStencilAttachment_from_val(&obj);
}

