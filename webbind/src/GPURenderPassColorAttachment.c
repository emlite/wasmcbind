#include <webbind/GPURenderPassColorAttachment.h>

DEFINE_EMLITE_TYPE(GPURenderPassColorAttachment, em_Val);


jb_Any GPURenderPassColorAttachment_view(const GPURenderPassColorAttachment *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("view")));
}


void GPURenderPassColorAttachment_set_view(GPURenderPassColorAttachment* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("view"), em_Val_from(value));
}


jb_Any GPURenderPassColorAttachment_depthSlice(const GPURenderPassColorAttachment *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthSlice")));
}


void GPURenderPassColorAttachment_set_depthSlice(GPURenderPassColorAttachment* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthSlice"), em_Val_from(value));
}


jb_Any GPURenderPassColorAttachment_resolveTarget(const GPURenderPassColorAttachment *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resolveTarget")));
}


void GPURenderPassColorAttachment_set_resolveTarget(GPURenderPassColorAttachment* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("resolveTarget"), em_Val_from(value));
}


jb_Any GPURenderPassColorAttachment_clearValue(const GPURenderPassColorAttachment *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clearValue")));
}


void GPURenderPassColorAttachment_set_clearValue(GPURenderPassColorAttachment* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clearValue"), em_Val_from(value));
}


GPULoadOp GPURenderPassColorAttachment_loadOp(const GPURenderPassColorAttachment *self) {
    return em_Val_as(GPULoadOp, em_Val_get(em_Val_as_val(self->inner), em_Val_from("loadOp")));
}


void GPURenderPassColorAttachment_set_loadOp(GPURenderPassColorAttachment* self, GPULoadOp * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("loadOp"), em_Val_from(value));
}


GPUStoreOp GPURenderPassColorAttachment_storeOp(const GPURenderPassColorAttachment *self) {
    return em_Val_as(GPUStoreOp, em_Val_get(em_Val_as_val(self->inner), em_Val_from("storeOp")));
}


void GPURenderPassColorAttachment_set_storeOp(GPURenderPassColorAttachment* self, GPUStoreOp * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("storeOp"), em_Val_from(value));
}


GPURenderPassColorAttachment GPURenderPassColorAttachment_new() {
    em_Val obj = em_Val_object();
    return GPURenderPassColorAttachment_from_val(&obj);
}

