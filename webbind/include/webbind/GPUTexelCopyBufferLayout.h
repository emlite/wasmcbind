#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUTexelCopyBufferLayout, em_Val);

jb_Any GPUTexelCopyBufferLayout_offset(const GPUTexelCopyBufferLayout *self);

void GPUTexelCopyBufferLayout_set_offset(GPUTexelCopyBufferLayout* self, jb_Any * value);

jb_Any GPUTexelCopyBufferLayout_bytesPerRow(const GPUTexelCopyBufferLayout *self);

void GPUTexelCopyBufferLayout_set_bytesPerRow(GPUTexelCopyBufferLayout* self, jb_Any * value);

jb_Any GPUTexelCopyBufferLayout_rowsPerImage(const GPUTexelCopyBufferLayout *self);

void GPUTexelCopyBufferLayout_set_rowsPerImage(GPUTexelCopyBufferLayout* self, jb_Any * value);

GPUTexelCopyBufferLayout GPUTexelCopyBufferLayout_new();

#ifdef __cplusplus
}
#endif
