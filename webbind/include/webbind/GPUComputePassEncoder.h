#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUComputePipeline GPUComputePipeline;
typedef struct GPUBuffer GPUBuffer;
typedef struct GPUBindGroup GPUBindGroup;


/**
 * @brief Interface GPUComputePassEncoder
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassEncoder)
 */
DECLARE_EMLITE_TYPE(GPUComputePassEncoder, em_Val);

/**
 * @brief Calls the `setPipeline` method. 
*/
jb_Undefined GPUComputePassEncoder_setPipeline(GPUComputePassEncoder* self , GPUComputePipeline * pipeline);

/**
 * @brief Calls the `dispatchWorkgroups` method. 
*/
jb_Undefined GPUComputePassEncoder_dispatchWorkgroups0(GPUComputePassEncoder* self , jb_Any * workgroupCountX);

/**
 * @brief Calls the `dispatchWorkgroups` method. 
*/
jb_Undefined GPUComputePassEncoder_dispatchWorkgroups1(GPUComputePassEncoder* self , jb_Any * workgroupCountX, jb_Any * workgroupCountY);

/**
 * @brief Calls the `dispatchWorkgroups` method. 
*/
jb_Undefined GPUComputePassEncoder_dispatchWorkgroups2(GPUComputePassEncoder* self , jb_Any * workgroupCountX, jb_Any * workgroupCountY, jb_Any * workgroupCountZ);

/**
 * @brief Calls the `dispatchWorkgroupsIndirect` method. 
*/
jb_Undefined GPUComputePassEncoder_dispatchWorkgroupsIndirect(GPUComputePassEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset);

/**
 * @brief Calls the `end` method. 
*/
jb_Undefined GPUComputePassEncoder_end(GPUComputePassEncoder* self );

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUComputePassEncoder_label(const GPUComputePassEncoder *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUComputePassEncoder_set_label(GPUComputePassEncoder* self, jb_String * value);

/**
 * @brief Calls the `pushDebugGroup` method. 
*/
jb_Undefined GPUComputePassEncoder_pushDebugGroup(GPUComputePassEncoder* self , jb_String * groupLabel);

/**
 * @brief Calls the `popDebugGroup` method. 
*/
jb_Undefined GPUComputePassEncoder_popDebugGroup(GPUComputePassEncoder* self );

/**
 * @brief Calls the `insertDebugMarker` method. 
*/
jb_Undefined GPUComputePassEncoder_insertDebugMarker(GPUComputePassEncoder* self , jb_String * markerLabel);

/**
 * @brief Calls the `setBindGroup` method. 
*/
jb_Undefined GPUComputePassEncoder_setBindGroup(GPUComputePassEncoder* self , jb_Any * index, GPUBindGroup * bindGroup, jb_Uint32Array * dynamicOffsetsData, jb_Any * dynamicOffsetsDataStart, jb_Any * dynamicOffsetsDataLength);

#ifdef __cplusplus
}
#endif
