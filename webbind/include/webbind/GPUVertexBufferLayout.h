#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUVertexAttribute.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUVertexBufferLayout */
DECLARE_EMLITE_TYPE(GPUVertexBufferLayout, em_Val);

/** @brief Getter of the arrayStride property */
jb_Any GPUVertexBufferLayout_arrayStride(const GPUVertexBufferLayout *self);

/** @brief Setter of the arrayStride property */
void GPUVertexBufferLayout_set_arrayStride(GPUVertexBufferLayout* self, jb_Any * value);

/** @brief Getter of the stepMode property */
GPUVertexStepMode GPUVertexBufferLayout_stepMode(const GPUVertexBufferLayout *self);

/** @brief Setter of the stepMode property */
void GPUVertexBufferLayout_set_stepMode(GPUVertexBufferLayout* self, GPUVertexStepMode * value);

/** @brief Getter of the attributes property */
jb_Array GPUVertexBufferLayout_attributes(const GPUVertexBufferLayout *self);

/** @brief Setter of the attributes property */
void GPUVertexBufferLayout_set_attributes(GPUVertexBufferLayout* self, jb_Array * value);

/** @brief Constructor of the GPUVertexBufferLayout dictionary type */
GPUVertexBufferLayout GPUVertexBufferLayout_new();

#ifdef __cplusplus
}
#endif
