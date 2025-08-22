#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

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


/**
 * @brief Interface GPUCommandEncoder
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandEncoder)
 */
DECLARE_EMLITE_TYPE(GPUCommandEncoder, em_Val);

/**
 * @brief Calls the `beginRenderPass` method. 
*/
GPURenderPassEncoder GPUCommandEncoder_beginRenderPass(GPUCommandEncoder* self , GPURenderPassDescriptor * descriptor);

/**
 * @brief Calls the `beginComputePass` method. 
*/
GPUComputePassEncoder GPUCommandEncoder_beginComputePass0(GPUCommandEncoder* self );

/**
 * @brief Calls the `beginComputePass` method. 
*/
GPUComputePassEncoder GPUCommandEncoder_beginComputePass1(GPUCommandEncoder* self , GPUComputePassDescriptor * descriptor);

/**
 * @brief Calls the `copyBufferToBuffer` method. 
*/
jb_Undefined GPUCommandEncoder_copyBufferToBuffer0(GPUCommandEncoder* self , GPUBuffer * source, jb_Any * sourceOffset, GPUBuffer * destination, jb_Any * destinationOffset);

/**
 * @brief Calls the `copyBufferToBuffer` method. 
*/
jb_Undefined GPUCommandEncoder_copyBufferToBuffer1(GPUCommandEncoder* self , GPUBuffer * source, jb_Any * sourceOffset, GPUBuffer * destination, jb_Any * destinationOffset, jb_Any * size);

/**
 * @brief Calls the `copyBufferToTexture` method. 
*/
jb_Undefined GPUCommandEncoder_copyBufferToTexture(GPUCommandEncoder* self , GPUTexelCopyBufferInfo * source, GPUTexelCopyTextureInfo * destination, jb_Any * copySize);

/**
 * @brief Calls the `copyTextureToBuffer` method. 
*/
jb_Undefined GPUCommandEncoder_copyTextureToBuffer(GPUCommandEncoder* self , GPUTexelCopyTextureInfo * source, GPUTexelCopyBufferInfo * destination, jb_Any * copySize);

/**
 * @brief Calls the `copyTextureToTexture` method. 
*/
jb_Undefined GPUCommandEncoder_copyTextureToTexture(GPUCommandEncoder* self , GPUTexelCopyTextureInfo * source, GPUTexelCopyTextureInfo * destination, jb_Any * copySize);

/**
 * @brief Calls the `clearBuffer` method. 
*/
jb_Undefined GPUCommandEncoder_clearBuffer0(GPUCommandEncoder* self , GPUBuffer * buffer);

/**
 * @brief Calls the `clearBuffer` method. 
*/
jb_Undefined GPUCommandEncoder_clearBuffer1(GPUCommandEncoder* self , GPUBuffer * buffer, jb_Any * offset);

/**
 * @brief Calls the `clearBuffer` method. 
*/
jb_Undefined GPUCommandEncoder_clearBuffer2(GPUCommandEncoder* self , GPUBuffer * buffer, jb_Any * offset, jb_Any * size);

/**
 * @brief Calls the `resolveQuerySet` method. 
*/
jb_Undefined GPUCommandEncoder_resolveQuerySet(GPUCommandEncoder* self , GPUQuerySet * querySet, jb_Any * firstQuery, jb_Any * queryCount, GPUBuffer * destination, jb_Any * destinationOffset);

/**
 * @brief Calls the `finish` method. 
*/
GPUCommandBuffer GPUCommandEncoder_finish0(GPUCommandEncoder* self );

/**
 * @brief Calls the `finish` method. 
*/
GPUCommandBuffer GPUCommandEncoder_finish1(GPUCommandEncoder* self , GPUCommandBufferDescriptor * descriptor);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUCommandEncoder_label(const GPUCommandEncoder *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUCommandEncoder_set_label(GPUCommandEncoder* self, jb_String * value);

/**
 * @brief Calls the `pushDebugGroup` method. 
*/
jb_Undefined GPUCommandEncoder_pushDebugGroup(GPUCommandEncoder* self , jb_String * groupLabel);

/**
 * @brief Calls the `popDebugGroup` method. 
*/
jb_Undefined GPUCommandEncoder_popDebugGroup(GPUCommandEncoder* self );

/**
 * @brief Calls the `insertDebugMarker` method. 
*/
jb_Undefined GPUCommandEncoder_insertDebugMarker(GPUCommandEncoder* self , jb_String * markerLabel);

#ifdef __cplusplus
}
#endif
