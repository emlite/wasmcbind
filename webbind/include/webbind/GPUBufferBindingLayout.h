#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUBufferBindingLayout, em_Val);

GPUBufferBindingType GPUBufferBindingLayout_type(const GPUBufferBindingLayout *self);

void GPUBufferBindingLayout_set_type(GPUBufferBindingLayout* self, GPUBufferBindingType * value);

bool GPUBufferBindingLayout_hasDynamicOffset(const GPUBufferBindingLayout *self);

void GPUBufferBindingLayout_set_hasDynamicOffset(GPUBufferBindingLayout* self, bool value);

jb_Any GPUBufferBindingLayout_minBindingSize(const GPUBufferBindingLayout *self);

void GPUBufferBindingLayout_set_minBindingSize(GPUBufferBindingLayout* self, jb_Any * value);

GPUBufferBindingLayout GPUBufferBindingLayout_new();

#ifdef __cplusplus
}
#endif
