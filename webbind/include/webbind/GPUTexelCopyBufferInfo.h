#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUTexelCopyBufferLayout.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUBuffer GPUBuffer;

DECLARE_EMLITE_TYPE(GPUTexelCopyBufferInfo, GPUTexelCopyBufferLayout);

GPUBuffer GPUTexelCopyBufferInfo_buffer(const GPUTexelCopyBufferInfo *self);

void GPUTexelCopyBufferInfo_set_buffer(GPUTexelCopyBufferInfo* self, GPUBuffer * value);

GPUTexelCopyBufferInfo GPUTexelCopyBufferInfo_new();

#ifdef __cplusplus
}
#endif
