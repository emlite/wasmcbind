#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUExtent3DDict */
DECLARE_EMLITE_TYPE(GPUExtent3DDict, em_Val);

/** @brief Getter of the width property */
jb_Any GPUExtent3DDict_width(const GPUExtent3DDict *self);

/** @brief Setter of the width property */
void GPUExtent3DDict_set_width(GPUExtent3DDict* self, jb_Any * value);

/** @brief Getter of the height property */
jb_Any GPUExtent3DDict_height(const GPUExtent3DDict *self);

/** @brief Setter of the height property */
void GPUExtent3DDict_set_height(GPUExtent3DDict* self, jb_Any * value);

/** @brief Getter of the depthOrArrayLayers property */
jb_Any GPUExtent3DDict_depthOrArrayLayers(const GPUExtent3DDict *self);

/** @brief Setter of the depthOrArrayLayers property */
void GPUExtent3DDict_set_depthOrArrayLayers(GPUExtent3DDict* self, jb_Any * value);

/** @brief Constructor of the GPUExtent3DDict dictionary type */
GPUExtent3DDict GPUExtent3DDict_new();

#ifdef __cplusplus
}
#endif
