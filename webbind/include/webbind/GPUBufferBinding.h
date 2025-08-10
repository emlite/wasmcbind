#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUBuffer GPUBuffer;

DECLARE_EMLITE_TYPE(GPUBufferBinding, em_Val);

GPUBuffer GPUBufferBinding_buffer(const GPUBufferBinding *self);

void GPUBufferBinding_set_buffer(GPUBufferBinding* self, GPUBuffer * value);

jb_Any GPUBufferBinding_offset(const GPUBufferBinding *self);

void GPUBufferBinding_set_offset(GPUBufferBinding* self, jb_Any * value);

jb_Any GPUBufferBinding_size(const GPUBufferBinding *self);

void GPUBufferBinding_set_size(GPUBufferBinding* self, jb_Any * value);

GPUBufferBinding GPUBufferBinding_new();

#ifdef __cplusplus
}
#endif
