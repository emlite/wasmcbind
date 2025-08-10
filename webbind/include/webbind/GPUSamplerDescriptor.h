#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUSamplerDescriptor, GPUObjectDescriptorBase);

GPUAddressMode GPUSamplerDescriptor_addressModeU(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_addressModeU(GPUSamplerDescriptor* self, GPUAddressMode * value);

GPUAddressMode GPUSamplerDescriptor_addressModeV(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_addressModeV(GPUSamplerDescriptor* self, GPUAddressMode * value);

GPUAddressMode GPUSamplerDescriptor_addressModeW(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_addressModeW(GPUSamplerDescriptor* self, GPUAddressMode * value);

GPUFilterMode GPUSamplerDescriptor_magFilter(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_magFilter(GPUSamplerDescriptor* self, GPUFilterMode * value);

GPUFilterMode GPUSamplerDescriptor_minFilter(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_minFilter(GPUSamplerDescriptor* self, GPUFilterMode * value);

GPUMipmapFilterMode GPUSamplerDescriptor_mipmapFilter(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_mipmapFilter(GPUSamplerDescriptor* self, GPUMipmapFilterMode * value);

float GPUSamplerDescriptor_lodMinClamp(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_lodMinClamp(GPUSamplerDescriptor* self, float value);

float GPUSamplerDescriptor_lodMaxClamp(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_lodMaxClamp(GPUSamplerDescriptor* self, float value);

GPUCompareFunction GPUSamplerDescriptor_compare(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_compare(GPUSamplerDescriptor* self, GPUCompareFunction * value);

unsigned short GPUSamplerDescriptor_maxAnisotropy(const GPUSamplerDescriptor *self);

void GPUSamplerDescriptor_set_maxAnisotropy(GPUSamplerDescriptor* self, unsigned short value);

GPUSamplerDescriptor GPUSamplerDescriptor_new();

#ifdef __cplusplus
}
#endif
