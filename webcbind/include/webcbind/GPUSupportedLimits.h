#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUSupportedLimits
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedLimits)
 */
DECLARE_EMLITE_TYPE(GPUSupportedLimits, em_Val);

/**
 * @brief Gets the `maxTextureDimension1D` property. 
*/
unsigned long GPUSupportedLimits_maxTextureDimension1D(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxTextureDimension2D` property. 
*/
unsigned long GPUSupportedLimits_maxTextureDimension2D(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxTextureDimension3D` property. 
*/
unsigned long GPUSupportedLimits_maxTextureDimension3D(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxTextureArrayLayers` property. 
*/
unsigned long GPUSupportedLimits_maxTextureArrayLayers(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxBindGroups` property. 
*/
unsigned long GPUSupportedLimits_maxBindGroups(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxBindGroupsPlusVertexBuffers` property. 
*/
unsigned long GPUSupportedLimits_maxBindGroupsPlusVertexBuffers(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxBindingsPerBindGroup` property. 
*/
unsigned long GPUSupportedLimits_maxBindingsPerBindGroup(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxDynamicUniformBuffersPerPipelineLayout` property. 
*/
unsigned long GPUSupportedLimits_maxDynamicUniformBuffersPerPipelineLayout(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxDynamicStorageBuffersPerPipelineLayout` property. 
*/
unsigned long GPUSupportedLimits_maxDynamicStorageBuffersPerPipelineLayout(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxSampledTexturesPerShaderStage` property. 
*/
unsigned long GPUSupportedLimits_maxSampledTexturesPerShaderStage(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxSamplersPerShaderStage` property. 
*/
unsigned long GPUSupportedLimits_maxSamplersPerShaderStage(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxStorageBuffersPerShaderStage` property. 
*/
unsigned long GPUSupportedLimits_maxStorageBuffersPerShaderStage(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxStorageTexturesPerShaderStage` property. 
*/
unsigned long GPUSupportedLimits_maxStorageTexturesPerShaderStage(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxUniformBuffersPerShaderStage` property. 
*/
unsigned long GPUSupportedLimits_maxUniformBuffersPerShaderStage(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxUniformBufferBindingSize` property. 
*/
long long GPUSupportedLimits_maxUniformBufferBindingSize(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxStorageBufferBindingSize` property. 
*/
long long GPUSupportedLimits_maxStorageBufferBindingSize(const GPUSupportedLimits *self);

/**
 * @brief Gets the `minUniformBufferOffsetAlignment` property. 
*/
unsigned long GPUSupportedLimits_minUniformBufferOffsetAlignment(const GPUSupportedLimits *self);

/**
 * @brief Gets the `minStorageBufferOffsetAlignment` property. 
*/
unsigned long GPUSupportedLimits_minStorageBufferOffsetAlignment(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxVertexBuffers` property. 
*/
unsigned long GPUSupportedLimits_maxVertexBuffers(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxBufferSize` property. 
*/
long long GPUSupportedLimits_maxBufferSize(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxVertexAttributes` property. 
*/
unsigned long GPUSupportedLimits_maxVertexAttributes(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxVertexBufferArrayStride` property. 
*/
unsigned long GPUSupportedLimits_maxVertexBufferArrayStride(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxInterStageShaderVariables` property. 
*/
unsigned long GPUSupportedLimits_maxInterStageShaderVariables(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxColorAttachments` property. 
*/
unsigned long GPUSupportedLimits_maxColorAttachments(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxColorAttachmentBytesPerSample` property. 
*/
unsigned long GPUSupportedLimits_maxColorAttachmentBytesPerSample(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxComputeWorkgroupStorageSize` property. 
*/
unsigned long GPUSupportedLimits_maxComputeWorkgroupStorageSize(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxComputeInvocationsPerWorkgroup` property. 
*/
unsigned long GPUSupportedLimits_maxComputeInvocationsPerWorkgroup(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxComputeWorkgroupSizeX` property. 
*/
unsigned long GPUSupportedLimits_maxComputeWorkgroupSizeX(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxComputeWorkgroupSizeY` property. 
*/
unsigned long GPUSupportedLimits_maxComputeWorkgroupSizeY(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxComputeWorkgroupSizeZ` property. 
*/
unsigned long GPUSupportedLimits_maxComputeWorkgroupSizeZ(const GPUSupportedLimits *self);

/**
 * @brief Gets the `maxComputeWorkgroupsPerDimension` property. 
*/
unsigned long GPUSupportedLimits_maxComputeWorkgroupsPerDimension(const GPUSupportedLimits *self);

#ifdef __cplusplus
}
#endif
