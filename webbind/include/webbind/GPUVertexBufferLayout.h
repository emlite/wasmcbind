#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUVertexAttribute.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUVertexBufferLayout, em_Val);

jb_Any GPUVertexBufferLayout_arrayStride(const GPUVertexBufferLayout *self);

void GPUVertexBufferLayout_set_arrayStride(GPUVertexBufferLayout* self, jb_Any * value);

GPUVertexStepMode GPUVertexBufferLayout_stepMode(const GPUVertexBufferLayout *self);

void GPUVertexBufferLayout_set_stepMode(GPUVertexBufferLayout* self, GPUVertexStepMode * value);

jb_Array GPUVertexBufferLayout_attributes(const GPUVertexBufferLayout *self);

void GPUVertexBufferLayout_set_attributes(GPUVertexBufferLayout* self, jb_Array * value);

GPUVertexBufferLayout GPUVertexBufferLayout_new();

#ifdef __cplusplus
}
#endif
