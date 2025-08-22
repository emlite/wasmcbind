#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUSupportedFeatures GPUSupportedFeatures;
typedef struct GPUSupportedLimits GPUSupportedLimits;
typedef struct GPUAdapterInfo GPUAdapterInfo;
typedef struct GPUQueue GPUQueue;
typedef struct GPUBuffer GPUBuffer;
typedef struct GPUBufferDescriptor GPUBufferDescriptor;
typedef struct GPUTexture GPUTexture;
typedef struct GPUTextureDescriptor GPUTextureDescriptor;
typedef struct GPUSampler GPUSampler;
typedef struct GPUSamplerDescriptor GPUSamplerDescriptor;
typedef struct GPUExternalTexture GPUExternalTexture;
typedef struct GPUExternalTextureDescriptor GPUExternalTextureDescriptor;
typedef struct GPUBindGroupLayout GPUBindGroupLayout;
typedef struct GPUBindGroupLayoutDescriptor GPUBindGroupLayoutDescriptor;
typedef struct GPUPipelineLayout GPUPipelineLayout;
typedef struct GPUPipelineLayoutDescriptor GPUPipelineLayoutDescriptor;
typedef struct GPUBindGroup GPUBindGroup;
typedef struct GPUBindGroupDescriptor GPUBindGroupDescriptor;
typedef struct GPUShaderModule GPUShaderModule;
typedef struct GPUShaderModuleDescriptor GPUShaderModuleDescriptor;
typedef struct GPUComputePipeline GPUComputePipeline;
typedef struct GPUComputePipelineDescriptor GPUComputePipelineDescriptor;
typedef struct GPURenderPipeline GPURenderPipeline;
typedef struct GPURenderPipelineDescriptor GPURenderPipelineDescriptor;
typedef struct GPUCommandEncoder GPUCommandEncoder;
typedef struct GPUCommandEncoderDescriptor GPUCommandEncoderDescriptor;
typedef struct GPURenderBundleEncoder GPURenderBundleEncoder;
typedef struct GPURenderBundleEncoderDescriptor GPURenderBundleEncoderDescriptor;
typedef struct GPUQuerySet GPUQuerySet;
typedef struct GPUQuerySetDescriptor GPUQuerySetDescriptor;
typedef struct GPUDeviceLostInfo GPUDeviceLostInfo;
typedef struct GPUError GPUError;


/**
 * @brief Interface GPUDevice
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUDevice)
 */
DECLARE_EMLITE_TYPE(GPUDevice, EventTarget);

/**
 * @brief Gets the `features` property. 
*/
GPUSupportedFeatures GPUDevice_features(const GPUDevice *self);

/**
 * @brief Gets the `limits` property. 
*/
GPUSupportedLimits GPUDevice_limits(const GPUDevice *self);

/**
 * @brief Gets the `adapterInfo` property. 
*/
GPUAdapterInfo GPUDevice_adapterInfo(const GPUDevice *self);

/**
 * @brief Gets the `queue` property. 
*/
GPUQueue GPUDevice_queue(const GPUDevice *self);

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined GPUDevice_destroy(GPUDevice* self );

/**
 * @brief Calls the `createBuffer` method. 
*/
GPUBuffer GPUDevice_createBuffer(GPUDevice* self , GPUBufferDescriptor * descriptor);

/**
 * @brief Calls the `createTexture` method. 
*/
GPUTexture GPUDevice_createTexture(GPUDevice* self , GPUTextureDescriptor * descriptor);

/**
 * @brief Calls the `createSampler` method. 
*/
GPUSampler GPUDevice_createSampler0(GPUDevice* self );

/**
 * @brief Calls the `createSampler` method. 
*/
GPUSampler GPUDevice_createSampler1(GPUDevice* self , GPUSamplerDescriptor * descriptor);

/**
 * @brief Calls the `importExternalTexture` method. 
*/
GPUExternalTexture GPUDevice_importExternalTexture(GPUDevice* self , GPUExternalTextureDescriptor * descriptor);

/**
 * @brief Calls the `createBindGroupLayout` method. 
*/
GPUBindGroupLayout GPUDevice_createBindGroupLayout(GPUDevice* self , GPUBindGroupLayoutDescriptor * descriptor);

/**
 * @brief Calls the `createPipelineLayout` method. 
*/
GPUPipelineLayout GPUDevice_createPipelineLayout(GPUDevice* self , GPUPipelineLayoutDescriptor * descriptor);

/**
 * @brief Calls the `createBindGroup` method. 
*/
GPUBindGroup GPUDevice_createBindGroup(GPUDevice* self , GPUBindGroupDescriptor * descriptor);

/**
 * @brief Calls the `createShaderModule` method. 
*/
GPUShaderModule GPUDevice_createShaderModule(GPUDevice* self , GPUShaderModuleDescriptor * descriptor);

/**
 * @brief Calls the `createComputePipeline` method. 
*/
GPUComputePipeline GPUDevice_createComputePipeline(GPUDevice* self , GPUComputePipelineDescriptor * descriptor);

/**
 * @brief Calls the `createRenderPipeline` method. 
*/
GPURenderPipeline GPUDevice_createRenderPipeline(GPUDevice* self , GPURenderPipelineDescriptor * descriptor);

/**
 * @brief Calls the `createComputePipelineAsync` method. 
*/
jb_Promise GPUDevice_createComputePipelineAsync(GPUDevice* self , GPUComputePipelineDescriptor * descriptor);

/**
 * @brief Calls the `createRenderPipelineAsync` method. 
*/
jb_Promise GPUDevice_createRenderPipelineAsync(GPUDevice* self , GPURenderPipelineDescriptor * descriptor);

/**
 * @brief Calls the `createCommandEncoder` method. 
*/
GPUCommandEncoder GPUDevice_createCommandEncoder0(GPUDevice* self );

/**
 * @brief Calls the `createCommandEncoder` method. 
*/
GPUCommandEncoder GPUDevice_createCommandEncoder1(GPUDevice* self , GPUCommandEncoderDescriptor * descriptor);

/**
 * @brief Calls the `createRenderBundleEncoder` method. 
*/
GPURenderBundleEncoder GPUDevice_createRenderBundleEncoder(GPUDevice* self , GPURenderBundleEncoderDescriptor * descriptor);

/**
 * @brief Calls the `createQuerySet` method. 
*/
GPUQuerySet GPUDevice_createQuerySet(GPUDevice* self , GPUQuerySetDescriptor * descriptor);

/**
 * @brief Gets the `lost` property. 
*/
jb_Promise GPUDevice_lost(const GPUDevice *self);

/**
 * @brief Calls the `pushErrorScope` method. 
*/
jb_Undefined GPUDevice_pushErrorScope(GPUDevice* self , GPUErrorFilter * filter);

/**
 * @brief Calls the `popErrorScope` method. 
*/
jb_Promise GPUDevice_popErrorScope(GPUDevice* self );

/**
 * @brief Gets the `onuncapturederror` property. 
*/
jb_Any GPUDevice_onuncapturederror(const GPUDevice *self);

/**
 * @brief Sets the `onuncapturederror` property. 
*/
void GPUDevice_set_onuncapturederror(GPUDevice* self, jb_Any * value);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUDevice_label(const GPUDevice *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUDevice_set_label(GPUDevice* self, jb_String * value);

#ifdef __cplusplus
}
#endif
