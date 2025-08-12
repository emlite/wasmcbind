#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUOrigin3DDict */
DECLARE_EMLITE_TYPE(GPUOrigin3DDict, em_Val);

/** @brief Getter of the x property */
jb_Any GPUOrigin3DDict_x(const GPUOrigin3DDict *self);

/** @brief Setter of the x property */
void GPUOrigin3DDict_set_x(GPUOrigin3DDict* self, jb_Any * value);

/** @brief Getter of the y property */
jb_Any GPUOrigin3DDict_y(const GPUOrigin3DDict *self);

/** @brief Setter of the y property */
void GPUOrigin3DDict_set_y(GPUOrigin3DDict* self, jb_Any * value);

/** @brief Getter of the z property */
jb_Any GPUOrigin3DDict_z(const GPUOrigin3DDict *self);

/** @brief Setter of the z property */
void GPUOrigin3DDict_set_z(GPUOrigin3DDict* self, jb_Any * value);

/** @brief Constructor of the GPUOrigin3DDict dictionary type */
GPUOrigin3DDict GPUOrigin3DDict_new();

#ifdef __cplusplus
}
#endif
