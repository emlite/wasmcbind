#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUExternalTextureDescriptor, GPUObjectDescriptorBase);

jb_Any GPUExternalTextureDescriptor_source(const GPUExternalTextureDescriptor *self);

void GPUExternalTextureDescriptor_set_source(GPUExternalTextureDescriptor* self, jb_Any * value);

PredefinedColorSpace GPUExternalTextureDescriptor_colorSpace(const GPUExternalTextureDescriptor *self);

void GPUExternalTextureDescriptor_set_colorSpace(GPUExternalTextureDescriptor* self, PredefinedColorSpace * value);

GPUExternalTextureDescriptor GPUExternalTextureDescriptor_new();

#ifdef __cplusplus
}
#endif
