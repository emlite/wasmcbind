#include <webbind/GPUCommandEncoder.h>
#include <webbind/GPURenderPassEncoder.h>
#include <webbind/GPUComputePassEncoder.h>
#include <webbind/GPUBuffer.h>
#include <webbind/GPUQuerySet.h>
#include <webbind/GPUCommandBuffer.h>
#include <webbind/GPUTexture.h>


DEFINE_EMLITE_TYPE(GPURenderPassDescriptor, em_Val);


jb_Sequence GPURenderPassDescriptor_colorAttachments(const GPURenderPassDescriptor *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "colorAttachments"));
}


void GPURenderPassDescriptor_set_colorAttachments(GPURenderPassDescriptor* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "colorAttachments", value);
}


jb_Any GPURenderPassDescriptor_depthStencilAttachment(const GPURenderPassDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "depthStencilAttachment"));
}


void GPURenderPassDescriptor_set_depthStencilAttachment(GPURenderPassDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "depthStencilAttachment", value);
}


GPUQuerySet GPURenderPassDescriptor_occlusionQuerySet(const GPURenderPassDescriptor *self) {
    return em_Val_as(GPUQuerySet, em_Val_get(em_Val_as_val(self->inner), "occlusionQuerySet"));
}


void GPURenderPassDescriptor_set_occlusionQuerySet(GPURenderPassDescriptor* self, const GPUQuerySet* value) {
    em_Val_set(em_Val_as_val(self->inner), "occlusionQuerySet", value);
}


jb_Any GPURenderPassDescriptor_timestampWrites(const GPURenderPassDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "timestampWrites"));
}


void GPURenderPassDescriptor_set_timestampWrites(GPURenderPassDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "timestampWrites", value);
}


jb_Any GPURenderPassDescriptor_maxDrawCount(const GPURenderPassDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "maxDrawCount"));
}


void GPURenderPassDescriptor_set_maxDrawCount(GPURenderPassDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "maxDrawCount", value);
}

DEFINE_EMLITE_TYPE(GPUComputePassDescriptor, em_Val);


jb_Any GPUComputePassDescriptor_timestampWrites(const GPUComputePassDescriptor *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "timestampWrites"));
}


void GPUComputePassDescriptor_set_timestampWrites(GPUComputePassDescriptor* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "timestampWrites", value);
}

DEFINE_EMLITE_TYPE(GPUTexelCopyBufferInfo, em_Val);


GPUBuffer GPUTexelCopyBufferInfo_buffer(const GPUTexelCopyBufferInfo *self) {
    return em_Val_as(GPUBuffer, em_Val_get(em_Val_as_val(self->inner), "buffer"));
}


void GPUTexelCopyBufferInfo_set_buffer(GPUTexelCopyBufferInfo* self, const GPUBuffer* value) {
    em_Val_set(em_Val_as_val(self->inner), "buffer", value);
}

DEFINE_EMLITE_TYPE(GPUTexelCopyTextureInfo, em_Val);


GPUTexture GPUTexelCopyTextureInfo_texture(const GPUTexelCopyTextureInfo *self) {
    return em_Val_as(GPUTexture, em_Val_get(em_Val_as_val(self->inner), "texture"));
}


void GPUTexelCopyTextureInfo_set_texture(GPUTexelCopyTextureInfo* self, const GPUTexture* value) {
    em_Val_set(em_Val_as_val(self->inner), "texture", value);
}


jb_Any GPUTexelCopyTextureInfo_mipLevel(const GPUTexelCopyTextureInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "mipLevel"));
}


void GPUTexelCopyTextureInfo_set_mipLevel(GPUTexelCopyTextureInfo* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "mipLevel", value);
}


jb_Any GPUTexelCopyTextureInfo_origin(const GPUTexelCopyTextureInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "origin"));
}


void GPUTexelCopyTextureInfo_set_origin(GPUTexelCopyTextureInfo* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "origin", value);
}


GPUTextureAspect GPUTexelCopyTextureInfo_aspect(const GPUTexelCopyTextureInfo *self) {
    return em_Val_as(GPUTextureAspect, em_Val_get(em_Val_as_val(self->inner), "aspect"));
}


void GPUTexelCopyTextureInfo_set_aspect(GPUTexelCopyTextureInfo* self, const GPUTextureAspect* value) {
    em_Val_set(em_Val_as_val(self->inner), "aspect", value);
}

DEFINE_EMLITE_TYPE(GPUCommandBufferDescriptor, em_Val);

DEFINE_EMLITE_TYPE(GPUCommandEncoder, em_Val);


GPURenderPassEncoder GPUCommandEncoder_beginRenderPass(GPUCommandEncoder* self , const GPURenderPassDescriptor* descriptor) {
    return em_Val_as(GPURenderPassEncoder, em_Val_call(em_Val_as_val(self->inner), "beginRenderPass", em_Val_from(descriptor)));
}


GPUComputePassEncoder GPUCommandEncoder_beginComputePass(GPUCommandEncoder* self ) {
    return em_Val_as(GPUComputePassEncoder, em_Val_call(em_Val_as_val(self->inner), "beginComputePass"));
}


GPUComputePassEncoder GPUCommandEncoder_beginComputePass(GPUCommandEncoder* self , const GPUComputePassDescriptor* descriptor) {
    return em_Val_as(GPUComputePassEncoder, em_Val_call(em_Val_as_val(self->inner), "beginComputePass", em_Val_from(descriptor)));
}


jb_Undefined GPUCommandEncoder_copyBufferToBuffer(GPUCommandEncoder* self , const GPUBuffer* source, const jb_Any* sourceOffset, const GPUBuffer* destination, const jb_Any* destinationOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyBufferToBuffer", em_Val_from(source), em_Val_from(sourceOffset), em_Val_from(destination), em_Val_from(destinationOffset)));
}


jb_Undefined GPUCommandEncoder_copyBufferToBuffer(GPUCommandEncoder* self , const GPUBuffer* source, const jb_Any* sourceOffset, const GPUBuffer* destination, const jb_Any* destinationOffset, const jb_Any* size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyBufferToBuffer", em_Val_from(source), em_Val_from(sourceOffset), em_Val_from(destination), em_Val_from(destinationOffset), em_Val_from(size)));
}


jb_Undefined GPUCommandEncoder_copyBufferToTexture(GPUCommandEncoder* self , const GPUTexelCopyBufferInfo* source, const GPUTexelCopyTextureInfo* destination, const jb_Any* copySize) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyBufferToTexture", em_Val_from(source), em_Val_from(destination), em_Val_from(copySize)));
}


jb_Undefined GPUCommandEncoder_copyTextureToBuffer(GPUCommandEncoder* self , const GPUTexelCopyTextureInfo* source, const GPUTexelCopyBufferInfo* destination, const jb_Any* copySize) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyTextureToBuffer", em_Val_from(source), em_Val_from(destination), em_Val_from(copySize)));
}


jb_Undefined GPUCommandEncoder_copyTextureToTexture(GPUCommandEncoder* self , const GPUTexelCopyTextureInfo* source, const GPUTexelCopyTextureInfo* destination, const jb_Any* copySize) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "copyTextureToTexture", em_Val_from(source), em_Val_from(destination), em_Val_from(copySize)));
}


jb_Undefined GPUCommandEncoder_clearBuffer(GPUCommandEncoder* self , const GPUBuffer* buffer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBuffer", em_Val_from(buffer)));
}


jb_Undefined GPUCommandEncoder_clearBuffer(GPUCommandEncoder* self , const GPUBuffer* buffer, const jb_Any* offset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBuffer", em_Val_from(buffer), em_Val_from(offset)));
}


jb_Undefined GPUCommandEncoder_clearBuffer(GPUCommandEncoder* self , const GPUBuffer* buffer, const jb_Any* offset, const jb_Any* size) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearBuffer", em_Val_from(buffer), em_Val_from(offset), em_Val_from(size)));
}


jb_Undefined GPUCommandEncoder_resolveQuerySet(GPUCommandEncoder* self , const GPUQuerySet* querySet, const jb_Any* firstQuery, const jb_Any* queryCount, const GPUBuffer* destination, const jb_Any* destinationOffset) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "resolveQuerySet", em_Val_from(querySet), em_Val_from(firstQuery), em_Val_from(queryCount), em_Val_from(destination), em_Val_from(destinationOffset)));
}


GPUCommandBuffer GPUCommandEncoder_finish(GPUCommandEncoder* self ) {
    return em_Val_as(GPUCommandBuffer, em_Val_call(em_Val_as_val(self->inner), "finish"));
}


GPUCommandBuffer GPUCommandEncoder_finish(GPUCommandEncoder* self , const GPUCommandBufferDescriptor* descriptor) {
    return em_Val_as(GPUCommandBuffer, em_Val_call(em_Val_as_val(self->inner), "finish", em_Val_from(descriptor)));
}


jb_USVString GPUCommandEncoder_label(const GPUCommandEncoder *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


void GPUCommandEncoder_set_label(GPUCommandEncoder* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "label", value);
}


jb_Undefined GPUCommandEncoder_pushDebugGroup(GPUCommandEncoder* self , const jb_USVString* groupLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "pushDebugGroup", em_Val_from(groupLabel)));
}


jb_Undefined GPUCommandEncoder_popDebugGroup(GPUCommandEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "popDebugGroup"));
}


jb_Undefined GPUCommandEncoder_insertDebugMarker(GPUCommandEncoder* self , const jb_USVString* markerLabel) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "insertDebugMarker", em_Val_from(markerLabel)));
}

