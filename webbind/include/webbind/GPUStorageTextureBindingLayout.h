#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUStorageTextureBindingLayout, em_Val);

GPUStorageTextureAccess GPUStorageTextureBindingLayout_access(const GPUStorageTextureBindingLayout *self);

void GPUStorageTextureBindingLayout_set_access(GPUStorageTextureBindingLayout* self, GPUStorageTextureAccess * value);

GPUTextureFormat GPUStorageTextureBindingLayout_format(const GPUStorageTextureBindingLayout *self);

void GPUStorageTextureBindingLayout_set_format(GPUStorageTextureBindingLayout* self, GPUTextureFormat * value);

GPUTextureViewDimension GPUStorageTextureBindingLayout_viewDimension(const GPUStorageTextureBindingLayout *self);

void GPUStorageTextureBindingLayout_set_viewDimension(GPUStorageTextureBindingLayout* self, GPUTextureViewDimension * value);

GPUStorageTextureBindingLayout GPUStorageTextureBindingLayout_new();

#ifdef __cplusplus
}
#endif
