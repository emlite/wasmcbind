#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
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


/**
 * @brief Interface GPUQueue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueue)
 */
DECLARE_EMLITE_TYPE(GPUQueue, em_Val);

/**
 * @brief Calls the `submit` method. 
*/
jb_Undefined GPUQueue_submit(GPUQueue* self , jb_Array * commandBuffers);

/**
 * @brief Calls the `onSubmittedWorkDone` method. 
*/
jb_Promise GPUQueue_onSubmittedWorkDone(GPUQueue* self );

/**
 * @brief Calls the `writeBuffer` method. 
*/
jb_Undefined GPUQueue_writeBuffer0(GPUQueue* self , GPUBuffer * buffer, jb_Any * bufferOffset, jb_Any * data);

/**
 * @brief Calls the `writeBuffer` method. 
*/
jb_Undefined GPUQueue_writeBuffer1(GPUQueue* self , GPUBuffer * buffer, jb_Any * bufferOffset, jb_Any * data, jb_Any * dataOffset);

/**
 * @brief Calls the `writeBuffer` method. 
*/
jb_Undefined GPUQueue_writeBuffer2(GPUQueue* self , GPUBuffer * buffer, jb_Any * bufferOffset, jb_Any * data, jb_Any * dataOffset, jb_Any * size);

/**
 * @brief Calls the `writeTexture` method. 
*/
jb_Undefined GPUQueue_writeTexture(GPUQueue* self , GPUTexelCopyTextureInfo * destination, jb_Any * data, GPUTexelCopyBufferLayout * dataLayout, jb_Any * size);

/**
 * @brief Calls the `copyExternalImageToTexture` method. 
*/
jb_Undefined GPUQueue_copyExternalImageToTexture(GPUQueue* self , GPUCopyExternalImageSourceInfo * source, GPUCopyExternalImageDestInfo * destination, jb_Any * copySize);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUQueue_label(const GPUQueue *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUQueue_set_label(GPUQueue* self, jb_String * value);

#ifdef __cplusplus
}
#endif
