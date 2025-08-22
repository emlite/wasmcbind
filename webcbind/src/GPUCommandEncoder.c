#include <webcbind/GPUCommandEncoder.h>

#include <webcbind/GPURenderPassEncoder.h>
#include <webcbind/GPURenderPassDescriptor.h>
#include <webcbind/GPUComputePassEncoder.h>
#include <webcbind/GPUComputePassDescriptor.h>
#include <webcbind/GPUBuffer.h>
#include <webcbind/GPUTexelCopyBufferInfo.h>
#include <webcbind/GPUTexelCopyTextureInfo.h>
#include <webcbind/GPUQuerySet.h>
#include <webcbind/GPUCommandBuffer.h>
#include <webcbind/GPUCommandBufferDescriptor.h>

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

