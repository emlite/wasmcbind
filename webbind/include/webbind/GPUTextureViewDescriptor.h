#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUTextureViewDescriptor, GPUObjectDescriptorBase);

GPUTextureFormat GPUTextureViewDescriptor_format(const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_format(GPUTextureViewDescriptor* self, GPUTextureFormat * value);

GPUTextureViewDimension GPUTextureViewDescriptor_dimension(const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_dimension(GPUTextureViewDescriptor* self, GPUTextureViewDimension * value);

jb_Any GPUTextureViewDescriptor_usage(const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_usage(GPUTextureViewDescriptor* self, jb_Any * value);

GPUTextureAspect GPUTextureViewDescriptor_aspect(const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_aspect(GPUTextureViewDescriptor* self, GPUTextureAspect * value);

jb_Any GPUTextureViewDescriptor_baseMipLevel(const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_baseMipLevel(GPUTextureViewDescriptor* self, jb_Any * value);

jb_Any GPUTextureViewDescriptor_mipLevelCount(const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_mipLevelCount(GPUTextureViewDescriptor* self, jb_Any * value);

jb_Any GPUTextureViewDescriptor_baseArrayLayer(const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_baseArrayLayer(GPUTextureViewDescriptor* self, jb_Any * value);

jb_Any GPUTextureViewDescriptor_arrayLayerCount(const GPUTextureViewDescriptor *self);

void GPUTextureViewDescriptor_set_arrayLayerCount(GPUTextureViewDescriptor* self, jb_Any * value);

GPUTextureViewDescriptor GPUTextureViewDescriptor_new();

#ifdef __cplusplus
}
#endif
