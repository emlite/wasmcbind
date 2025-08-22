#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MediaSettingsRange.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PhotoCapabilities */
DECLARE_EMLITE_TYPE(PhotoCapabilities, em_Val);

/** @brief Getter of the redEyeReduction property */
RedEyeReduction PhotoCapabilities_redEyeReduction(const PhotoCapabilities *self);

/** @brief Setter of the redEyeReduction property */
void PhotoCapabilities_set_redEyeReduction(PhotoCapabilities* self, RedEyeReduction * value);

/** @brief Getter of the imageHeight property */
MediaSettingsRange PhotoCapabilities_imageHeight(const PhotoCapabilities *self);

/** @brief Setter of the imageHeight property */
void PhotoCapabilities_set_imageHeight(PhotoCapabilities* self, MediaSettingsRange * value);

/** @brief Getter of the imageWidth property */
MediaSettingsRange PhotoCapabilities_imageWidth(const PhotoCapabilities *self);

/** @brief Setter of the imageWidth property */
void PhotoCapabilities_set_imageWidth(PhotoCapabilities* self, MediaSettingsRange * value);

/** @brief Getter of the fillLightMode property */
jb_Array PhotoCapabilities_fillLightMode(const PhotoCapabilities *self);

/** @brief Setter of the fillLightMode property */
void PhotoCapabilities_set_fillLightMode(PhotoCapabilities* self, jb_Array * value);

/** @brief Constructor of the PhotoCapabilities dictionary type */
PhotoCapabilities PhotoCapabilities_new();

#ifdef __cplusplus
}
#endif
