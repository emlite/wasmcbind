#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUOrigin2DDict */
DECLARE_EMLITE_TYPE(GPUOrigin2DDict, em_Val);

/** @brief Getter of the x property */
jb_Any GPUOrigin2DDict_x(const GPUOrigin2DDict *self);

/** @brief Setter of the x property */
void GPUOrigin2DDict_set_x(GPUOrigin2DDict* self, jb_Any * value);

/** @brief Getter of the y property */
jb_Any GPUOrigin2DDict_y(const GPUOrigin2DDict *self);

/** @brief Setter of the y property */
void GPUOrigin2DDict_set_y(GPUOrigin2DDict* self, jb_Any * value);

/** @brief Constructor of the GPUOrigin2DDict dictionary type */
GPUOrigin2DDict GPUOrigin2DDict_new();

#ifdef __cplusplus
}
#endif
