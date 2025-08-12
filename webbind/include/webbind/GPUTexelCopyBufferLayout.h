#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUTexelCopyBufferLayout */
DECLARE_EMLITE_TYPE(GPUTexelCopyBufferLayout, em_Val);

/** @brief Getter of the offset property */
jb_Any GPUTexelCopyBufferLayout_offset(const GPUTexelCopyBufferLayout *self);

/** @brief Setter of the offset property */
void GPUTexelCopyBufferLayout_set_offset(GPUTexelCopyBufferLayout* self, jb_Any * value);

/** @brief Getter of the bytesPerRow property */
jb_Any GPUTexelCopyBufferLayout_bytesPerRow(const GPUTexelCopyBufferLayout *self);

/** @brief Setter of the bytesPerRow property */
void GPUTexelCopyBufferLayout_set_bytesPerRow(GPUTexelCopyBufferLayout* self, jb_Any * value);

/** @brief Getter of the rowsPerImage property */
jb_Any GPUTexelCopyBufferLayout_rowsPerImage(const GPUTexelCopyBufferLayout *self);

/** @brief Setter of the rowsPerImage property */
void GPUTexelCopyBufferLayout_set_rowsPerImage(GPUTexelCopyBufferLayout* self, jb_Any * value);

/** @brief Constructor of the GPUTexelCopyBufferLayout dictionary type */
GPUTexelCopyBufferLayout GPUTexelCopyBufferLayout_new();

#ifdef __cplusplus
}
#endif
