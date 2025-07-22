#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct GPURenderPassEncoder GPURenderPassEncoder;
typedef struct GPURenderPassDescriptor GPURenderPassDescriptor;
typedef struct GPUComputePassEncoder GPUComputePassEncoder;
typedef struct GPUComputePassDescriptor GPUComputePassDescriptor;
typedef struct GPUBuffer GPUBuffer;
typedef struct GPUTexelCopyBufferInfo GPUTexelCopyBufferInfo;
typedef struct GPUTexelCopyTextureInfo GPUTexelCopyTextureInfo;
typedef struct GPUQuerySet GPUQuerySet;
typedef struct GPUCommandBuffer GPUCommandBuffer;
typedef struct GPUCommandBufferDescriptor GPUCommandBufferDescriptor;
typedef struct GPUTexture GPUTexture;


typedef struct {
  em_Val inner;
} GPURenderPassDescriptor;


DECLARE_EMLITE_TYPE(GPURenderPassDescriptor, em_Val);

jb_Sequence GPURenderPassDescriptor_colorAttachments( const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_colorAttachments(GPURenderPassDescriptor* self, const jb_Sequence* value);

jb_Any GPURenderPassDescriptor_depthStencilAttachment( const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_depthStencilAttachment(GPURenderPassDescriptor* self, const jb_Any* value);

GPUQuerySet GPURenderPassDescriptor_occlusionQuerySet( const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_occlusionQuerySet(GPURenderPassDescriptor* self, const GPUQuerySet* value);

jb_Any GPURenderPassDescriptor_timestampWrites( const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_timestampWrites(GPURenderPassDescriptor* self, const jb_Any* value);

jb_Any GPURenderPassDescriptor_maxDrawCount( const GPURenderPassDescriptor *self);

void GPURenderPassDescriptor_set_maxDrawCount(GPURenderPassDescriptor* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} GPUComputePassDescriptor;


DECLARE_EMLITE_TYPE(GPUComputePassDescriptor, em_Val);

jb_Any GPUComputePassDescriptor_timestampWrites( const GPUComputePassDescriptor *self);

void GPUComputePassDescriptor_set_timestampWrites(GPUComputePassDescriptor* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} GPUTexelCopyBufferInfo;


DECLARE_EMLITE_TYPE(GPUTexelCopyBufferInfo, em_Val);

GPUBuffer GPUTexelCopyBufferInfo_buffer( const GPUTexelCopyBufferInfo *self);

void GPUTexelCopyBufferInfo_set_buffer(GPUTexelCopyBufferInfo* self, const GPUBuffer* value);
typedef struct {
  em_Val inner;
} GPUTexelCopyTextureInfo;


DECLARE_EMLITE_TYPE(GPUTexelCopyTextureInfo, em_Val);

GPUTexture GPUTexelCopyTextureInfo_texture( const GPUTexelCopyTextureInfo *self);

void GPUTexelCopyTextureInfo_set_texture(GPUTexelCopyTextureInfo* self, const GPUTexture* value);

jb_Any GPUTexelCopyTextureInfo_mipLevel( const GPUTexelCopyTextureInfo *self);

void GPUTexelCopyTextureInfo_set_mipLevel(GPUTexelCopyTextureInfo* self, const jb_Any* value);

jb_Any GPUTexelCopyTextureInfo_origin( const GPUTexelCopyTextureInfo *self);

void GPUTexelCopyTextureInfo_set_origin(GPUTexelCopyTextureInfo* self, const jb_Any* value);

GPUTextureAspect GPUTexelCopyTextureInfo_aspect( const GPUTexelCopyTextureInfo *self);

void GPUTexelCopyTextureInfo_set_aspect(GPUTexelCopyTextureInfo* self, const GPUTextureAspect* value);
typedef struct {
  em_Val inner;
} GPUCommandBufferDescriptor;


DECLARE_EMLITE_TYPE(GPUCommandBufferDescriptor, em_Val);
typedef struct {
  em_Val inner;
} GPUCommandEncoder;


DECLARE_EMLITE_TYPE(GPUCommandEncoder, em_Val);

GPURenderPassEncoder GPUCommandEncoder_beginRenderPass(GPUCommandEncoder* self , const GPURenderPassDescriptor* descriptor);

GPUComputePassEncoder GPUCommandEncoder_beginComputePass(GPUCommandEncoder* self );

GPUComputePassEncoder GPUCommandEncoder_beginComputePass(GPUCommandEncoder* self , const GPUComputePassDescriptor* descriptor);

jb_Undefined GPUCommandEncoder_copyBufferToBuffer(GPUCommandEncoder* self , const GPUBuffer* source, const jb_Any* sourceOffset, const GPUBuffer* destination, const jb_Any* destinationOffset);

jb_Undefined GPUCommandEncoder_copyBufferToBuffer(GPUCommandEncoder* self , const GPUBuffer* source, const jb_Any* sourceOffset, const GPUBuffer* destination, const jb_Any* destinationOffset, const jb_Any* size);

jb_Undefined GPUCommandEncoder_copyBufferToTexture(GPUCommandEncoder* self , const GPUTexelCopyBufferInfo* source, const GPUTexelCopyTextureInfo* destination, const jb_Any* copySize);

jb_Undefined GPUCommandEncoder_copyTextureToBuffer(GPUCommandEncoder* self , const GPUTexelCopyTextureInfo* source, const GPUTexelCopyBufferInfo* destination, const jb_Any* copySize);

jb_Undefined GPUCommandEncoder_copyTextureToTexture(GPUCommandEncoder* self , const GPUTexelCopyTextureInfo* source, const GPUTexelCopyTextureInfo* destination, const jb_Any* copySize);

jb_Undefined GPUCommandEncoder_clearBuffer(GPUCommandEncoder* self , const GPUBuffer* buffer);

jb_Undefined GPUCommandEncoder_clearBuffer(GPUCommandEncoder* self , const GPUBuffer* buffer, const jb_Any* offset);

jb_Undefined GPUCommandEncoder_clearBuffer(GPUCommandEncoder* self , const GPUBuffer* buffer, const jb_Any* offset, const jb_Any* size);

jb_Undefined GPUCommandEncoder_resolveQuerySet(GPUCommandEncoder* self , const GPUQuerySet* querySet, const jb_Any* firstQuery, const jb_Any* queryCount, const GPUBuffer* destination, const jb_Any* destinationOffset);

GPUCommandBuffer GPUCommandEncoder_finish(GPUCommandEncoder* self );

GPUCommandBuffer GPUCommandEncoder_finish(GPUCommandEncoder* self , const GPUCommandBufferDescriptor* descriptor);

jb_USVString GPUCommandEncoder_label( const GPUCommandEncoder *self);

void GPUCommandEncoder_set_label(GPUCommandEncoder* self, const jb_USVString* value);

jb_Undefined GPUCommandEncoder_pushDebugGroup(GPUCommandEncoder* self , const jb_USVString* groupLabel);

jb_Undefined GPUCommandEncoder_popDebugGroup(GPUCommandEncoder* self );

jb_Undefined GPUCommandEncoder_insertDebugMarker(GPUCommandEncoder* self , const jb_USVString* markerLabel);
