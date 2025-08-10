#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
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

DECLARE_EMLITE_TYPE(GPUDevice, EventTarget);

GPUSupportedFeatures GPUDevice_features(const GPUDevice *self);

GPUSupportedLimits GPUDevice_limits(const GPUDevice *self);

GPUAdapterInfo GPUDevice_adapterInfo(const GPUDevice *self);

GPUQueue GPUDevice_queue(const GPUDevice *self);

jb_Undefined GPUDevice_destroy(GPUDevice* self );

GPUBuffer GPUDevice_createBuffer(GPUDevice* self , GPUBufferDescriptor * descriptor);

GPUTexture GPUDevice_createTexture(GPUDevice* self , GPUTextureDescriptor * descriptor);

GPUSampler GPUDevice_createSampler0(GPUDevice* self );

GPUSampler GPUDevice_createSampler1(GPUDevice* self , GPUSamplerDescriptor * descriptor);

GPUExternalTexture GPUDevice_importExternalTexture(GPUDevice* self , GPUExternalTextureDescriptor * descriptor);

GPUBindGroupLayout GPUDevice_createBindGroupLayout(GPUDevice* self , GPUBindGroupLayoutDescriptor * descriptor);

GPUPipelineLayout GPUDevice_createPipelineLayout(GPUDevice* self , GPUPipelineLayoutDescriptor * descriptor);

GPUBindGroup GPUDevice_createBindGroup(GPUDevice* self , GPUBindGroupDescriptor * descriptor);

GPUShaderModule GPUDevice_createShaderModule(GPUDevice* self , GPUShaderModuleDescriptor * descriptor);

GPUComputePipeline GPUDevice_createComputePipeline(GPUDevice* self , GPUComputePipelineDescriptor * descriptor);

GPURenderPipeline GPUDevice_createRenderPipeline(GPUDevice* self , GPURenderPipelineDescriptor * descriptor);

jb_Promise GPUDevice_createComputePipelineAsync(GPUDevice* self , GPUComputePipelineDescriptor * descriptor);

jb_Promise GPUDevice_createRenderPipelineAsync(GPUDevice* self , GPURenderPipelineDescriptor * descriptor);

GPUCommandEncoder GPUDevice_createCommandEncoder0(GPUDevice* self );

GPUCommandEncoder GPUDevice_createCommandEncoder1(GPUDevice* self , GPUCommandEncoderDescriptor * descriptor);

GPURenderBundleEncoder GPUDevice_createRenderBundleEncoder(GPUDevice* self , GPURenderBundleEncoderDescriptor * descriptor);

GPUQuerySet GPUDevice_createQuerySet(GPUDevice* self , GPUQuerySetDescriptor * descriptor);

jb_Promise GPUDevice_lost(const GPUDevice *self);

jb_Undefined GPUDevice_pushErrorScope(GPUDevice* self , GPUErrorFilter * filter);

jb_Promise GPUDevice_popErrorScope(GPUDevice* self );

jb_Any GPUDevice_onuncapturederror(const GPUDevice *self);

void GPUDevice_set_onuncapturederror(GPUDevice* self, jb_Any * value);

jb_String GPUDevice_label(const GPUDevice *self);

void GPUDevice_set_label(GPUDevice* self, jb_String * value);

#ifdef __cplusplus
}
#endif
