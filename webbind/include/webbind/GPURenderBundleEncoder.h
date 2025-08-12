#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPURenderBundle GPURenderBundle;
typedef struct GPURenderBundleDescriptor GPURenderBundleDescriptor;
typedef struct GPUBindGroup GPUBindGroup;
typedef struct GPURenderPipeline GPURenderPipeline;
typedef struct GPUBuffer GPUBuffer;


/**
 * @brief Interface GPURenderBundleEncoder
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderBundleEncoder)
 */
DECLARE_EMLITE_TYPE(GPURenderBundleEncoder, em_Val);

/**
 * @brief Calls the `finish` method. 
*/
GPURenderBundle GPURenderBundleEncoder_finish0(GPURenderBundleEncoder* self );

/**
 * @brief Calls the `finish` method. 
*/
GPURenderBundle GPURenderBundleEncoder_finish1(GPURenderBundleEncoder* self , GPURenderBundleDescriptor * descriptor);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPURenderBundleEncoder_label(const GPURenderBundleEncoder *self);

/**
 * @brief Sets the `label` property. 
*/
void GPURenderBundleEncoder_set_label(GPURenderBundleEncoder* self, jb_String * value);

/**
 * @brief Calls the `pushDebugGroup` method. 
*/
jb_Undefined GPURenderBundleEncoder_pushDebugGroup(GPURenderBundleEncoder* self , jb_String * groupLabel);

/**
 * @brief Calls the `popDebugGroup` method. 
*/
jb_Undefined GPURenderBundleEncoder_popDebugGroup(GPURenderBundleEncoder* self );

/**
 * @brief Calls the `insertDebugMarker` method. 
*/
jb_Undefined GPURenderBundleEncoder_insertDebugMarker(GPURenderBundleEncoder* self , jb_String * markerLabel);

/**
 * @brief Calls the `setBindGroup` method. 
*/
jb_Undefined GPURenderBundleEncoder_setBindGroup(GPURenderBundleEncoder* self , jb_Any * index, GPUBindGroup * bindGroup, jb_Uint32Array * dynamicOffsetsData, jb_Any * dynamicOffsetsDataStart, jb_Any * dynamicOffsetsDataLength);

/**
 * @brief Calls the `setPipeline` method. 
*/
jb_Undefined GPURenderBundleEncoder_setPipeline(GPURenderBundleEncoder* self , GPURenderPipeline * pipeline);

/**
 * @brief Calls the `setIndexBuffer` method. 
*/
jb_Undefined GPURenderBundleEncoder_setIndexBuffer0(GPURenderBundleEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat);

/**
 * @brief Calls the `setIndexBuffer` method. 
*/
jb_Undefined GPURenderBundleEncoder_setIndexBuffer1(GPURenderBundleEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat, jb_Any * offset);

/**
 * @brief Calls the `setIndexBuffer` method. 
*/
jb_Undefined GPURenderBundleEncoder_setIndexBuffer2(GPURenderBundleEncoder* self , GPUBuffer * buffer, GPUIndexFormat * indexFormat, jb_Any * offset, jb_Any * size);

/**
 * @brief Calls the `setVertexBuffer` method. 
*/
jb_Undefined GPURenderBundleEncoder_setVertexBuffer0(GPURenderBundleEncoder* self , jb_Any * slot, GPUBuffer * buffer);

/**
 * @brief Calls the `setVertexBuffer` method. 
*/
jb_Undefined GPURenderBundleEncoder_setVertexBuffer1(GPURenderBundleEncoder* self , jb_Any * slot, GPUBuffer * buffer, jb_Any * offset);

/**
 * @brief Calls the `setVertexBuffer` method. 
*/
jb_Undefined GPURenderBundleEncoder_setVertexBuffer2(GPURenderBundleEncoder* self , jb_Any * slot, GPUBuffer * buffer, jb_Any * offset, jb_Any * size);

/**
 * @brief Calls the `draw` method. 
*/
jb_Undefined GPURenderBundleEncoder_draw0(GPURenderBundleEncoder* self , jb_Any * vertexCount);

/**
 * @brief Calls the `draw` method. 
*/
jb_Undefined GPURenderBundleEncoder_draw1(GPURenderBundleEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount);

/**
 * @brief Calls the `draw` method. 
*/
jb_Undefined GPURenderBundleEncoder_draw2(GPURenderBundleEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount, jb_Any * firstVertex);

/**
 * @brief Calls the `draw` method. 
*/
jb_Undefined GPURenderBundleEncoder_draw3(GPURenderBundleEncoder* self , jb_Any * vertexCount, jb_Any * instanceCount, jb_Any * firstVertex, jb_Any * firstInstance);

/**
 * @brief Calls the `drawIndexed` method. 
*/
jb_Undefined GPURenderBundleEncoder_drawIndexed0(GPURenderBundleEncoder* self , jb_Any * indexCount);

/**
 * @brief Calls the `drawIndexed` method. 
*/
jb_Undefined GPURenderBundleEncoder_drawIndexed1(GPURenderBundleEncoder* self , jb_Any * indexCount, jb_Any * instanceCount);

/**
 * @brief Calls the `drawIndexed` method. 
*/
jb_Undefined GPURenderBundleEncoder_drawIndexed2(GPURenderBundleEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex);

/**
 * @brief Calls the `drawIndexed` method. 
*/
jb_Undefined GPURenderBundleEncoder_drawIndexed3(GPURenderBundleEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex, jb_Any * baseVertex);

/**
 * @brief Calls the `drawIndexed` method. 
*/
jb_Undefined GPURenderBundleEncoder_drawIndexed4(GPURenderBundleEncoder* self , jb_Any * indexCount, jb_Any * instanceCount, jb_Any * firstIndex, jb_Any * baseVertex, jb_Any * firstInstance);

/**
 * @brief Calls the `drawIndirect` method. 
*/
jb_Undefined GPURenderBundleEncoder_drawIndirect(GPURenderBundleEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset);

/**
 * @brief Calls the `drawIndexedIndirect` method. 
*/
jb_Undefined GPURenderBundleEncoder_drawIndexedIndirect(GPURenderBundleEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset);

#ifdef __cplusplus
}
#endif
