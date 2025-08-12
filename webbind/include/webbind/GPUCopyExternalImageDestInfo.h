#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUTexelCopyTextureInfo.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUCopyExternalImageDestInfo */
DECLARE_EMLITE_TYPE(GPUCopyExternalImageDestInfo, GPUTexelCopyTextureInfo);

/** @brief Getter of the colorSpace property */
PredefinedColorSpace GPUCopyExternalImageDestInfo_colorSpace(const GPUCopyExternalImageDestInfo *self);

/** @brief Setter of the colorSpace property */
void GPUCopyExternalImageDestInfo_set_colorSpace(GPUCopyExternalImageDestInfo* self, PredefinedColorSpace * value);

/** @brief Getter of the premultipliedAlpha property */
bool GPUCopyExternalImageDestInfo_premultipliedAlpha(const GPUCopyExternalImageDestInfo *self);

/** @brief Setter of the premultipliedAlpha property */
void GPUCopyExternalImageDestInfo_set_premultipliedAlpha(GPUCopyExternalImageDestInfo* self, bool value);

/** @brief Constructor of the GPUCopyExternalImageDestInfo dictionary type */
GPUCopyExternalImageDestInfo GPUCopyExternalImageDestInfo_new();

#ifdef __cplusplus
}
#endif
