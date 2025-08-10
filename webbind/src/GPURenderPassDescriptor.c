#include <webbind/GPURenderPassDescriptor.h>

#include <webbind/GPUQuerySet.h>

DEFINE_EMLITE_TYPE(GPURenderPassDescriptor, GPUObjectDescriptorBase);


jb_Array GPURenderPassDescriptor_colorAttachments(const GPURenderPassDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("colorAttachments")));
}


void GPURenderPassDescriptor_set_colorAttachments(GPURenderPassDescriptor* self, jb_Array * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("colorAttachments"), em_Val_from(value));
}


GPURenderPassDepthStencilAttachment GPURenderPassDescriptor_depthStencilAttachment(const GPURenderPassDescriptor *self) {
    return em_Val_as(GPURenderPassDepthStencilAttachment, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("depthStencilAttachment")));
}


void GPURenderPassDescriptor_set_depthStencilAttachment(GPURenderPassDescriptor* self, GPURenderPassDepthStencilAttachment * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("depthStencilAttachment"), em_Val_from(value));
}


GPUQuerySet GPURenderPassDescriptor_occlusionQuerySet(const GPURenderPassDescriptor *self) {
    return em_Val_as(GPUQuerySet, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("occlusionQuerySet")));
}


void GPURenderPassDescriptor_set_occlusionQuerySet(GPURenderPassDescriptor* self, GPUQuerySet * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("occlusionQuerySet"), em_Val_from(value));
}


GPURenderPassTimestampWrites GPURenderPassDescriptor_timestampWrites(const GPURenderPassDescriptor *self) {
    return em_Val_as(GPURenderPassTimestampWrites, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("timestampWrites")));
}


void GPURenderPassDescriptor_set_timestampWrites(GPURenderPassDescriptor* self, GPURenderPassTimestampWrites * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("timestampWrites"), em_Val_from(value));
}


jb_Any GPURenderPassDescriptor_maxDrawCount(const GPURenderPassDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("maxDrawCount")));
}


void GPURenderPassDescriptor_set_maxDrawCount(GPURenderPassDescriptor* self, jb_Any * value) {
    em_Val_set(GPUObjectDescriptorBase_as_val(self->inner), em_Val_from("maxDrawCount"), em_Val_from(value));
}


GPURenderPassDescriptor GPURenderPassDescriptor_new() {
    em_Val obj = em_Val_object();
    return GPURenderPassDescriptor_from_val(&obj);
}

