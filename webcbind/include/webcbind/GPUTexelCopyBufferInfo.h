#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUTexelCopyBufferLayout.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUBuffer GPUBuffer;

/** @brief Dictionary type GPUTexelCopyBufferInfo */
DECLARE_EMLITE_TYPE(GPUTexelCopyBufferInfo, GPUTexelCopyBufferLayout);

/** @brief Getter of the buffer property */
GPUBuffer GPUTexelCopyBufferInfo_buffer(const GPUTexelCopyBufferInfo *self);

/** @brief Setter of the buffer property */
void GPUTexelCopyBufferInfo_set_buffer(GPUTexelCopyBufferInfo* self, GPUBuffer * value);

/** @brief Constructor of the GPUTexelCopyBufferInfo dictionary type */
GPUTexelCopyBufferInfo GPUTexelCopyBufferInfo_new();

#ifdef __cplusplus
}
#endif
