#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUBuffer GPUBuffer;

/** @brief Dictionary type GPUBufferBinding */
DECLARE_EMLITE_TYPE(GPUBufferBinding, em_Val);

/** @brief Getter of the buffer property */
GPUBuffer GPUBufferBinding_buffer(const GPUBufferBinding *self);

/** @brief Setter of the buffer property */
void GPUBufferBinding_set_buffer(GPUBufferBinding* self, GPUBuffer * value);

/** @brief Getter of the offset property */
jb_Any GPUBufferBinding_offset(const GPUBufferBinding *self);

/** @brief Setter of the offset property */
void GPUBufferBinding_set_offset(GPUBufferBinding* self, jb_Any * value);

/** @brief Getter of the size property */
jb_Any GPUBufferBinding_size(const GPUBufferBinding *self);

/** @brief Setter of the size property */
void GPUBufferBinding_set_size(GPUBufferBinding* self, jb_Any * value);

/** @brief Constructor of the GPUBufferBinding dictionary type */
GPUBufferBinding GPUBufferBinding_new();

#ifdef __cplusplus
}
#endif
