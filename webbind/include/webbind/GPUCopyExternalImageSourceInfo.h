#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUCopyExternalImageSourceInfo */
DECLARE_EMLITE_TYPE(GPUCopyExternalImageSourceInfo, em_Val);

/** @brief Getter of the source property */
jb_Any GPUCopyExternalImageSourceInfo_source(const GPUCopyExternalImageSourceInfo *self);

/** @brief Setter of the source property */
void GPUCopyExternalImageSourceInfo_set_source(GPUCopyExternalImageSourceInfo* self, jb_Any * value);

/** @brief Getter of the origin property */
jb_Any GPUCopyExternalImageSourceInfo_origin(const GPUCopyExternalImageSourceInfo *self);

/** @brief Setter of the origin property */
void GPUCopyExternalImageSourceInfo_set_origin(GPUCopyExternalImageSourceInfo* self, jb_Any * value);

/** @brief Getter of the flipY property */
bool GPUCopyExternalImageSourceInfo_flipY(const GPUCopyExternalImageSourceInfo *self);

/** @brief Setter of the flipY property */
void GPUCopyExternalImageSourceInfo_set_flipY(GPUCopyExternalImageSourceInfo* self, bool value);

/** @brief Constructor of the GPUCopyExternalImageSourceInfo dictionary type */
GPUCopyExternalImageSourceInfo GPUCopyExternalImageSourceInfo_new();

#ifdef __cplusplus
}
#endif
