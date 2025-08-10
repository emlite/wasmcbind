#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ImageDataSettings, em_Val);

PredefinedColorSpace ImageDataSettings_colorSpace(const ImageDataSettings *self);

void ImageDataSettings_set_colorSpace(ImageDataSettings* self, PredefinedColorSpace * value);

ImageDataPixelFormat ImageDataSettings_pixelFormat(const ImageDataSettings *self);

void ImageDataSettings_set_pixelFormat(ImageDataSettings* self, ImageDataPixelFormat * value);

ImageDataSettings ImageDataSettings_new();

#ifdef __cplusplus
}
#endif
