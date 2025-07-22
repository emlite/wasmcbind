#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "GPUCommandEncoder.h"
#include "enums.h"

typedef struct GPUCommandBuffer GPUCommandBuffer;
typedef struct GPUBuffer GPUBuffer;
typedef struct GPUTexelCopyBufferLayout GPUTexelCopyBufferLayout;
typedef struct GPUCopyExternalImageSourceInfo GPUCopyExternalImageSourceInfo;
typedef struct GPUCopyExternalImageDestInfo GPUCopyExternalImageDestInfo;


typedef struct {
  em_Val inner;
} GPUTexelCopyBufferLayout;


DECLARE_EMLITE_TYPE(GPUTexelCopyBufferLayout, em_Val);

jb_Any GPUTexelCopyBufferLayout_offset( const GPUTexelCopyBufferLayout *self);

void GPUTexelCopyBufferLayout_set_offset(GPUTexelCopyBufferLayout* self, const jb_Any* value);

jb_Any GPUTexelCopyBufferLayout_bytesPerRow( const GPUTexelCopyBufferLayout *self);

void GPUTexelCopyBufferLayout_set_bytesPerRow(GPUTexelCopyBufferLayout* self, const jb_Any* value);

jb_Any GPUTexelCopyBufferLayout_rowsPerImage( const GPUTexelCopyBufferLayout *self);

void GPUTexelCopyBufferLayout_set_rowsPerImage(GPUTexelCopyBufferLayout* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} GPUCopyExternalImageSourceInfo;


DECLARE_EMLITE_TYPE(GPUCopyExternalImageSourceInfo, em_Val);

jb_Any GPUCopyExternalImageSourceInfo_source( const GPUCopyExternalImageSourceInfo *self);

void GPUCopyExternalImageSourceInfo_set_source(GPUCopyExternalImageSourceInfo* self, const jb_Any* value);

jb_Any GPUCopyExternalImageSourceInfo_origin( const GPUCopyExternalImageSourceInfo *self);

void GPUCopyExternalImageSourceInfo_set_origin(GPUCopyExternalImageSourceInfo* self, const jb_Any* value);

bool GPUCopyExternalImageSourceInfo_flipY( const GPUCopyExternalImageSourceInfo *self);

void GPUCopyExternalImageSourceInfo_set_flipY(GPUCopyExternalImageSourceInfo* self, bool value);
typedef struct {
  em_Val inner;
} GPUCopyExternalImageDestInfo;


DECLARE_EMLITE_TYPE(GPUCopyExternalImageDestInfo, em_Val);

PredefinedColorSpace GPUCopyExternalImageDestInfo_colorSpace( const GPUCopyExternalImageDestInfo *self);

void GPUCopyExternalImageDestInfo_set_colorSpace(GPUCopyExternalImageDestInfo* self, const PredefinedColorSpace* value);

bool GPUCopyExternalImageDestInfo_premultipliedAlpha( const GPUCopyExternalImageDestInfo *self);

void GPUCopyExternalImageDestInfo_set_premultipliedAlpha(GPUCopyExternalImageDestInfo* self, bool value);
typedef struct {
  em_Val inner;
} GPUQueue;


DECLARE_EMLITE_TYPE(GPUQueue, em_Val);

jb_Undefined GPUQueue_submit(GPUQueue* self , const jb_Sequence* commandBuffers);

jb_Promise GPUQueue_onSubmittedWorkDone(GPUQueue* self );

jb_Undefined GPUQueue_writeBuffer(GPUQueue* self , const GPUBuffer* buffer, const jb_Any* bufferOffset, const jb_Any* data);

jb_Undefined GPUQueue_writeBuffer(GPUQueue* self , const GPUBuffer* buffer, const jb_Any* bufferOffset, const jb_Any* data, const jb_Any* dataOffset);

jb_Undefined GPUQueue_writeBuffer(GPUQueue* self , const GPUBuffer* buffer, const jb_Any* bufferOffset, const jb_Any* data, const jb_Any* dataOffset, const jb_Any* size);

jb_Undefined GPUQueue_writeTexture(GPUQueue* self , const GPUTexelCopyTextureInfo* destination, const jb_Any* data, const GPUTexelCopyBufferLayout* dataLayout, const jb_Any* size);

jb_Undefined GPUQueue_copyExternalImageToTexture(GPUQueue* self , const GPUCopyExternalImageSourceInfo* source, const GPUCopyExternalImageDestInfo* destination, const jb_Any* copySize);

jb_USVString GPUQueue_label( const GPUQueue *self);

void GPUQueue_set_label(GPUQueue* self, const jb_USVString* value);
