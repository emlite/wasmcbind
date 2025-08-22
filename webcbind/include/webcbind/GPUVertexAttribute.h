#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUVertexAttribute */
DECLARE_EMLITE_TYPE(GPUVertexAttribute, em_Val);

/** @brief Getter of the format property */
GPUVertexFormat GPUVertexAttribute_format(const GPUVertexAttribute *self);

/** @brief Setter of the format property */
void GPUVertexAttribute_set_format(GPUVertexAttribute* self, GPUVertexFormat * value);

/** @brief Getter of the offset property */
jb_Any GPUVertexAttribute_offset(const GPUVertexAttribute *self);

/** @brief Setter of the offset property */
void GPUVertexAttribute_set_offset(GPUVertexAttribute* self, jb_Any * value);

/** @brief Getter of the shaderLocation property */
jb_Any GPUVertexAttribute_shaderLocation(const GPUVertexAttribute *self);

/** @brief Setter of the shaderLocation property */
void GPUVertexAttribute_set_shaderLocation(GPUVertexAttribute* self, jb_Any * value);

/** @brief Constructor of the GPUVertexAttribute dictionary type */
GPUVertexAttribute GPUVertexAttribute_new();

#ifdef __cplusplus
}
#endif
