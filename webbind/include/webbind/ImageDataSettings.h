#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ImageDataSettings */
DECLARE_EMLITE_TYPE(ImageDataSettings, em_Val);

/** @brief Getter of the colorSpace property */
PredefinedColorSpace ImageDataSettings_colorSpace(const ImageDataSettings *self);

/** @brief Setter of the colorSpace property */
void ImageDataSettings_set_colorSpace(ImageDataSettings* self, PredefinedColorSpace * value);

/** @brief Getter of the pixelFormat property */
ImageDataPixelFormat ImageDataSettings_pixelFormat(const ImageDataSettings *self);

/** @brief Setter of the pixelFormat property */
void ImageDataSettings_set_pixelFormat(ImageDataSettings* self, ImageDataPixelFormat * value);

/** @brief Constructor of the ImageDataSettings dictionary type */
ImageDataSettings ImageDataSettings_new();

#ifdef __cplusplus
}
#endif
