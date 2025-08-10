#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUTextureDescriptor, GPUObjectDescriptorBase);

jb_Any GPUTextureDescriptor_size(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_size(GPUTextureDescriptor* self, jb_Any * value);

jb_Any GPUTextureDescriptor_mipLevelCount(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_mipLevelCount(GPUTextureDescriptor* self, jb_Any * value);

jb_Any GPUTextureDescriptor_sampleCount(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_sampleCount(GPUTextureDescriptor* self, jb_Any * value);

GPUTextureDimension GPUTextureDescriptor_dimension(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_dimension(GPUTextureDescriptor* self, GPUTextureDimension * value);

GPUTextureFormat GPUTextureDescriptor_format(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_format(GPUTextureDescriptor* self, GPUTextureFormat * value);

jb_Any GPUTextureDescriptor_usage(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_usage(GPUTextureDescriptor* self, jb_Any * value);

jb_Array GPUTextureDescriptor_viewFormats(const GPUTextureDescriptor *self);

void GPUTextureDescriptor_set_viewFormats(GPUTextureDescriptor* self, jb_Array * value);

GPUTextureDescriptor GPUTextureDescriptor_new();

#ifdef __cplusplus
}
#endif
