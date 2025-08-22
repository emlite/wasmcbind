#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUBufferBindingLayout */
DECLARE_EMLITE_TYPE(GPUBufferBindingLayout, em_Val);

/** @brief Getter of the type property */
GPUBufferBindingType GPUBufferBindingLayout_type(const GPUBufferBindingLayout *self);

/** @brief Setter of the type property */
void GPUBufferBindingLayout_set_type(GPUBufferBindingLayout* self, GPUBufferBindingType * value);

/** @brief Getter of the hasDynamicOffset property */
bool GPUBufferBindingLayout_hasDynamicOffset(const GPUBufferBindingLayout *self);

/** @brief Setter of the hasDynamicOffset property */
void GPUBufferBindingLayout_set_hasDynamicOffset(GPUBufferBindingLayout* self, bool value);

/** @brief Getter of the minBindingSize property */
jb_Any GPUBufferBindingLayout_minBindingSize(const GPUBufferBindingLayout *self);

/** @brief Setter of the minBindingSize property */
void GPUBufferBindingLayout_set_minBindingSize(GPUBufferBindingLayout* self, jb_Any * value);

/** @brief Constructor of the GPUBufferBindingLayout dictionary type */
GPUBufferBindingLayout GPUBufferBindingLayout_new();

#ifdef __cplusplus
}
#endif
