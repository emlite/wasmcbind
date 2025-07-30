#include <webbind/GPUCommandEncoder.h>
#include <webbind/GPURenderPassEncoder.h>
#include <webbind/GPUComputePassEncoder.h>
#include <webbind/GPUBuffer.h>
#include <webbind/GPUQuerySet.h>
#include <webbind/GPUCommandBuffer.h>
#include <webbind/GPUTexture.h>


DEFINE_EMLITE_TYPE(GPURenderPassDescriptor, em_Val);


jb_Array GPURenderPassDescriptor_colorAttachments(const GPURenderPassDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorAttachments")));
}


void GPURenderPassDescriptor_set_colorAttachments(GPURenderPassDescriptor* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorAttachments"), em_Val_from(value));
}


jb_Any GPURenderPassDescriptor_depthStencilAttachment(const GPURenderPassDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("depthStencilAttachment")));
}


void GPURenderPassDescriptor_set_depthStencilAttachment(GPURenderPassDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("depthStencilAttachment"), em_Val_from(value));
}


GPUQuerySet GPURenderPassDescriptor_occlusionQuerySet(const GPURenderPassDescriptor *self) {
    return em_Val_as(GPUQuerySet, em_Val_get(em_Val_as_val(self->inner), em_Val_from("occlusionQuerySet")));
}


void GPURenderPassDescriptor_set_occlusionQuerySet(GPURenderPassDescriptor* self, GPUQuerySet * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("occlusionQuerySet"), em_Val_from(value));
}


jb_Any GPURenderPassDescriptor_timestampWrites(const GPURenderPassDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestampWrites")));
}


void GPURenderPassDescriptor_set_timestampWrites(GPURenderPassDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestampWrites"), em_Val_from(value));
}


jb_Any GPURenderPassDescriptor_maxDrawCount(const GPURenderPassDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxDrawCount")));
}


void GPURenderPassDescriptor_set_maxDrawCount(GPURenderPassDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxDrawCount"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUComputePassDescriptor, em_Val);


jb_Any GPUComputePassDescriptor_timestampWrites(const GPUComputePassDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestampWrites")));
}


void GPUComputePassDescriptor_set_timestampWrites(GPUComputePassDescriptor* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestampWrites"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUTexelCopyBufferInfo, em_Val);


GPUBuffer GPUTexelCopyBufferInfo_buffer(const GPUTexelCopyBufferInfo *self) {
    return em_Val_as(GPUBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("buffer")));
}


void GPUTexelCopyBufferInfo_set_buffer(GPUTexelCopyBufferInfo* self, GPUBuffer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("buffer"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUTexelCopyTextureInfo, em_Val);


GPUTexture GPUTexelCopyTextureInfo_texture(const GPUTexelCopyTextureInfo *self) {
    return em_Val_as(GPUTexture, em_Val_get(em_Val_as_val(self->inner), em_Val_from("texture")));
}


void GPUTexelCopyTextureInfo_set_texture(GPUTexelCopyTextureInfo* self, GPUTexture * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("texture"), em_Val_from(value));
}


jb_Any GPUTexelCopyTextureInfo_mipLevel(const GPUTexelCopyTextureInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mipLevel")));
}


void GPUTexelCopyTextureInfo_set_mipLevel(GPUTexelCopyTextureInfo* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mipLevel"), em_Val_from(value));
}


jb_Any GPUTexelCopyTextureInfo_origin(const GPUTexelCopyTextureInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("origin")));
}


void GPUTexelCopyTextureInfo_set_origin(GPUTexelCopyTextureInfo* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("origin"), em_Val_from(value));
}


GPUTextureAspect GPUTexelCopyTextureInfo_aspect(const GPUTexelCopyTextureInfo *self) {
    return em_Val_as(GPUTextureAspect, em_Val_get(em_Val_as_val(self->inner), em_Val_from("aspect")));
}


void GPUTexelCopyTextureInfo_set_aspect(GPUTexelCopyTextureInfo* self, GPUTextureAspect * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("aspect"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GPUCommandBufferDescriptor, em_Val);

DEFINE_EMLITE_TYPE(GPUCommandEncoder, em_Val);


GPURenderPassEncoder GPUCommandEncoder_beginRenderPass(GPUCommandEncoder* self , GPURenderPassDescriptor * descriptor) {
    return em_Val_as(GPURenderPassEncoder, em_Val_call(em_Val_as_val(self->inner), "beginRenderPass", em_Val_from(descriptor)));
}


GPUComputePassEncoder GPUCommandEncoder_beginComputePass0(GPUCommandEncoder* self ) {
    return em_Val_as(GPUComputePassEncoder, em_Val_call(em_Val_as_val(self->inner), "beginComputePass"));
}


GPUComputePassEncoder GPUCommandEncoder_beginComputePass1(GPUCommandEncoder* self , GPUComputePassDescriptor * descriptor) {
    return em_Val_as(GPUComputePassEncoder, em_Val_call(em_Val_as_val(self->inner), "beginComputePass", em_Val_from(descriptor)));
}


jb_Undefined GPUCommandEncoder_copyBufferToBuffer0(GPUCommandEncoder* self , GPUBuffer * source, jb_Any * sourceOffset, GPUBuffer * destination, jb_Any * destinationOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyBufferToBuffer", em_Val_from(source), em_Val_from(sourceOffset), em_Val_from(destination), em_Val_from(destinationOffset)));
}


jb_Undefined GPUCommandEncoder_copyBufferToBuffer1(GPUCommandEncoder* self , GPUBuffer * source, jb_Any * sourceOffset, GPUBuffer * destination, jb_Any * destinationOffset, jb_Any * size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyBufferToBuffer", em_Val_from(source), em_Val_from(sourceOffset), em_Val_from(destination), em_Val_from(destinationOffset), em_Val_from(size)));
}


jb_Undefined GPUCommandEncoder_copyBufferToTexture(GPUCommandEncoder* self , GPUTexelCopyBufferInfo * source, GPUTexelCopyTextureInfo * destination, jb_Any * copySize) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyBufferToTexture", em_Val_from(source), em_Val_from(destination), em_Val_from(copySize)));
}


jb_Undefined GPUCommandEncoder_copyTextureToBuffer(GPUCommandEncoder* self , GPUTexelCopyTextureInfo * source, GPUTexelCopyBufferInfo * destination, jb_Any * copySize) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyTextureToBuffer", em_Val_from(source), em_Val_from(destination), em_Val_from(copySize)));
}


jb_Undefined GPUCommandEncoder_copyTextureToTexture(GPUCommandEncoder* self , GPUTexelCopyTextureInfo * source, GPUTexelCopyTextureInfo * destination, jb_Any * copySize) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyTextureToTexture", em_Val_from(source), em_Val_from(destination), em_Val_from(copySize)));
}


jb_Undefined GPUCommandEncoder_clearBuffer0(GPUCommandEncoder* self , GPUBuffer * buffer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBuffer", em_Val_from(buffer)));
}


jb_Undefined GPUCommandEncoder_clearBuffer1(GPUCommandEncoder* self , GPUBuffer * buffer, jb_Any * offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBuffer", em_Val_from(buffer), em_Val_from(offset)));
}


jb_Undefined GPUCommandEncoder_clearBuffer2(GPUCommandEncoder* self , GPUBuffer * buffer, jb_Any * offset, jb_Any * size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBuffer", em_Val_from(buffer), em_Val_from(offset), em_Val_from(size)));
}


jb_Undefined GPUCommandEncoder_resolveQuerySet(GPUCommandEncoder* self , GPUQuerySet * querySet, jb_Any * firstQuery, jb_Any * queryCount, GPUBuffer * destination, jb_Any * destinationOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "resolveQuerySet", em_Val_from(querySet), em_Val_from(firstQuery), em_Val_from(queryCount), em_Val_from(destination), em_Val_from(destinationOffset)));
}


GPUCommandBuffer GPUCommandEncoder_finish0(GPUCommandEncoder* self ) {
    return em_Val_as(GPUCommandBuffer, em_Val_call(em_Val_as_val(self->inner), "finish"));
}


GPUCommandBuffer GPUCommandEncoder_finish1(GPUCommandEncoder* self , GPUCommandBufferDescriptor * descriptor) {
    return em_Val_as(GPUCommandBuffer, em_Val_call(em_Val_as_val(self->inner), "finish", em_Val_from(descriptor)));
}


jb_String GPUCommandEncoder_label(const GPUCommandEncoder *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void GPUCommandEncoder_set_label(GPUCommandEncoder* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


jb_Undefined GPUCommandEncoder_pushDebugGroup(GPUCommandEncoder* self , jb_String * groupLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "pushDebugGroup", em_Val_from(groupLabel)));
}


jb_Undefined GPUCommandEncoder_popDebugGroup(GPUCommandEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "popDebugGroup"));
}


jb_Undefined GPUCommandEncoder_insertDebugMarker(GPUCommandEncoder* self , jb_String * markerLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "insertDebugMarker", em_Val_from(markerLabel)));
}

