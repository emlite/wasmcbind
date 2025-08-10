#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUCommandBuffer GPUCommandBuffer;
typedef struct GPUBuffer GPUBuffer;
typedef struct GPUTexelCopyTextureInfo GPUTexelCopyTextureInfo;
typedef struct GPUTexelCopyBufferLayout GPUTexelCopyBufferLayout;
typedef struct GPUCopyExternalImageSourceInfo GPUCopyExternalImageSourceInfo;
typedef struct GPUCopyExternalImageDestInfo GPUCopyExternalImageDestInfo;

DECLARE_EMLITE_TYPE(GPUQueue, em_Val);

jb_Undefined GPUQueue_submit(GPUQueue* self , jb_Array * commandBuffers);

jb_Promise GPUQueue_onSubmittedWorkDone(GPUQueue* self );

jb_Undefined GPUQueue_writeBuffer0(GPUQueue* self , GPUBuffer * buffer, jb_Any * bufferOffset, jb_Any * data);

jb_Undefined GPUQueue_writeBuffer1(GPUQueue* self , GPUBuffer * buffer, jb_Any * bufferOffset, jb_Any * data, jb_Any * dataOffset);

jb_Undefined GPUQueue_writeBuffer2(GPUQueue* self , GPUBuffer * buffer, jb_Any * bufferOffset, jb_Any * data, jb_Any * dataOffset, jb_Any * size);

jb_Undefined GPUQueue_writeTexture(GPUQueue* self , GPUTexelCopyTextureInfo * destination, jb_Any * data, GPUTexelCopyBufferLayout * dataLayout, jb_Any * size);

jb_Undefined GPUQueue_copyExternalImageToTexture(GPUQueue* self , GPUCopyExternalImageSourceInfo * source, GPUCopyExternalImageDestInfo * destination, jb_Any * copySize);

jb_String GPUQueue_label(const GPUQueue *self);

void GPUQueue_set_label(GPUQueue* self, jb_String * value);

#ifdef __cplusplus
}
#endif
