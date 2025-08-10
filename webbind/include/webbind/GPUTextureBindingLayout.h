#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUTextureBindingLayout, em_Val);

GPUTextureSampleType GPUTextureBindingLayout_sampleType(const GPUTextureBindingLayout *self);

void GPUTextureBindingLayout_set_sampleType(GPUTextureBindingLayout* self, GPUTextureSampleType * value);

GPUTextureViewDimension GPUTextureBindingLayout_viewDimension(const GPUTextureBindingLayout *self);

void GPUTextureBindingLayout_set_viewDimension(GPUTextureBindingLayout* self, GPUTextureViewDimension * value);

bool GPUTextureBindingLayout_multisampled(const GPUTextureBindingLayout *self);

void GPUTextureBindingLayout_set_multisampled(GPUTextureBindingLayout* self, bool value);

GPUTextureBindingLayout GPUTextureBindingLayout_new();

#ifdef __cplusplus
}
#endif
