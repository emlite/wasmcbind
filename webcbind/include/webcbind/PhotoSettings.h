#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PhotoSettings */
DECLARE_EMLITE_TYPE(PhotoSettings, em_Val);

/** @brief Getter of the fillLightMode property */
FillLightMode PhotoSettings_fillLightMode(const PhotoSettings *self);

/** @brief Setter of the fillLightMode property */
void PhotoSettings_set_fillLightMode(PhotoSettings* self, FillLightMode * value);

/** @brief Getter of the imageHeight property */
double PhotoSettings_imageHeight(const PhotoSettings *self);

/** @brief Setter of the imageHeight property */
void PhotoSettings_set_imageHeight(PhotoSettings* self, double value);

/** @brief Getter of the imageWidth property */
double PhotoSettings_imageWidth(const PhotoSettings *self);

/** @brief Setter of the imageWidth property */
void PhotoSettings_set_imageWidth(PhotoSettings* self, double value);

/** @brief Getter of the redEyeReduction property */
bool PhotoSettings_redEyeReduction(const PhotoSettings *self);

/** @brief Setter of the redEyeReduction property */
void PhotoSettings_set_redEyeReduction(PhotoSettings* self, bool value);

/** @brief Constructor of the PhotoSettings dictionary type */
PhotoSettings PhotoSettings_new();

#ifdef __cplusplus
}
#endif
