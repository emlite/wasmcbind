#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPURenderBundle GPURenderBundle;
typedef struct GPUBindGroup GPUBindGroup;
typedef struct GPURenderPipeline GPURenderPipeline;
typedef struct GPUBuffer GPUBuffer;


/**
 * @brief Interface GPURenderPassEncoder
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassEncoder)
 */
DECLARE_EMLITE_TYPE(GPURenderPassEncoder, em_Val);

/**
 * @brief Calls the `setViewport` method. 
*/
jb_Undefined GPURenderPassEncoder_setViewport(GPURenderPassEncoder* self , float x, float y, float width, float height, float minDepth, float maxDepth);

/**
 * @brief Calls the `setScissorRect` method. 
*/
jb_Undefined GPURenderPassEncoder_setScissorRect(GPURenderPassEncoder* self , jb_Any * x, jb_Any * y, jb_Any * width, jb_Any * height);

/**
 * @brief Calls the `setBlendConstant` method. 
*/
jb_Undefined GPURenderPassEncoder_setBlendConstant(GPURenderPassEncoder* self , jb_Any * color);

/**
 * @brief Calls the `setStencilReference` method. 
*/
jb_Undefined GPURenderPassEncoder_setStencilReference(GPURenderPassEncoder* self , jb_Any * reference);

/**
 * @brief Calls the `beginOcclusionQuery` method. 
*/
jb_Undefined GPURenderPassEncoder_beginOcclusionQuery(GPURenderPassEncoder* self , jb_Any * queryIndex);

/**
 * @brief Calls the `endOcclusionQuery` method. 
*/
jb_Undefined GPURenderPassEncoder_endOcclusionQuery(GPURenderPassEncoder* self );

/**
 * @brief Calls the `executeBundles` method. 
*/
jb_Undefined GPURenderPassEncoder_executeBundles(GPURenderPassEncoder* self , jb_Array * bundles);

/**
 * @brief Calls the `end` method. 
*/
jb_Undefined GPURenderPassEncoder_end(GPURenderPassEncoder* self );

/**
 * @brief Gets the `label` property. 
*/
jb_String GPURenderPassEncoder_label(const GPURenderPassEncoder *self);

/**
 * @brief Sets the `label` property. 
*/
void GPURenderPassEncoder_set_label(GPURenderPassEncoder* self, jb_String * value);

/**
 * @brief Calls the `pushDebugGroup` method. 
*/
jb_Undefined GPURenderPassEncoder_pushDebugGroup(GPURenderPassEncoder* self , jb_String * groupLabel);

/**
 * @brief Calls the `popDebugGroup` method. 
*/
jb_Undefined GPURenderPassEncoder_popDebugGroup(GPURenderPassEncoder* self );

/**
 * @brief Calls the `insertDebugMarker` method. 
*/
jb_Undefined GPURenderPassEncoder_insertDebugMarker(GPURenderPassEncoder* self , jb_String * markerLabel);

/**
 * @brief Calls the `setBindGroup` method. 
*/
jb_Undefined GPURenderPassEncoder_setBindGroup(GPURenderPassEncoder* self , jb_Any * index, GPUBindGroup * bindGroup, jb_Uint32Array * dynamicOffsetsData, jb_Any * dynamicOffsetsDataStart, jb_Any * dynamicOffsetsDataLength);

/**
 * @brief Calls the `setPipeline` method. 
*/
jb_Undefined GPURenderPassEncoder_setPipeline(GPURenderPassEncoder* self , GPURenderPipeline * pipeline);

/**
 * @brief Calls the `setIndexBuffer` method. 
*/
jb_Undefined GPURenderPassEncoder_setIndexBuffer0(GPURenderPassEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat);

/**
 * @brief Calls the `setIndexBuffer` method. 
*/
jb_Undefined GPURenderPassEncoder_setIndexBuffer1(GPURenderPassEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat, jb_Any * offset);

/**
 * @brief Calls the `setIndexBuffer` method. 
*/
jb_Undefined GPURenderPassEncoder_setIndexBuffer2(GPURenderPassEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat, jb_Any * offset, jb_Any * size);

/**
 * @brief Calls the `setVertexBuffer` method. 
*/
jb_Undefined GPURenderPassEncoder_setVertexBuffer0(GPURenderPassEncoder* self , jb_Any * slot, GPUBuffer * buffer);

/**
 * @brief Calls the `setVertexBuffer` method. 
*/
jb_Undefined GPURenderPassEncoder_setVertexBuffer1(GPURenderPassEncoder* self , jb_Any * slot, GPUBuffer * buffer, jb_Any * offset);

/**
 * @brief Calls the `setVertexBuffer` method. 
*/
jb_Undefined GPURenderPassEncoder_setVertexBuffer2(GPURenderPassEncoder* self , jb_Any * slot, GPUBuffer * buffer, jb_Any * offset, jb_Any * size);

/**
 * @brief Calls the `draw` method. 
*/
jb_Undefined GPURenderPassEncoder_draw0(GPURenderPassEncoder* self , jb_Any * vertexCount);

/**
 * @brief Calls the `draw` method. 
*/
jb_Undefined GPURenderPassEncoder_draw1(GPURenderPassEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount);

/**
 * @brief Calls the `draw` method. 
*/
jb_Undefined GPURenderPassEncoder_draw2(GPURenderPassEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount, jb_Any * firstVertex);

/**
 * @brief Calls the `draw` method. 
*/
jb_Undefined GPURenderPassEncoder_draw3(GPURenderPassEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount, jb_Any * firstVertex, jb_Any * firstInstance);

/**
 * @brief Calls the `drawIndexed` method. 
*/
jb_Undefined GPURenderPassEncoder_drawIndexed0(GPURenderPassEncoder* self , jb_Any * indexCount);

/**
 * @brief Calls the `drawIndexed` method. 
*/
jb_Undefined GPURenderPassEncoder_drawIndexed1(GPURenderPassEncoder* self , jb_Any * indexCount, jb_Any * instanceCount);

/**
 * @brief Calls the `drawIndexed` method. 
*/
jb_Undefined GPURenderPassEncoder_drawIndexed2(GPURenderPassEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex);

/**
 * @brief Calls the `drawIndexed` method. 
*/
jb_Undefined GPURenderPassEncoder_drawIndexed3(GPURenderPassEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex, jb_Any * baseVertex);

/**
 * @brief Calls the `drawIndexed` method. 
*/
jb_Undefined GPURenderPassEncoder_drawIndexed4(GPURenderPassEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex, jb_Any * baseVertex, jb_Any * firstInstance);

/**
 * @brief Calls the `drawIndirect` method. 
*/
jb_Undefined GPURenderPassEncoder_drawIndirect(GPURenderPassEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset);

/**
 * @brief Calls the `drawIndexedIndirect` method. 
*/
jb_Undefined GPURenderPassEncoder_drawIndexedIndirect(GPURenderPassEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset);

#ifdef __cplusplus
}
#endif
