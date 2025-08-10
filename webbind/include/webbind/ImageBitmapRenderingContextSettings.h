#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ImageBitmapRenderingContextSettings, em_Val);

bool ImageBitmapRenderingContextSettings_alpha(const ImageBitmapRenderingContextSettings *self);

void ImageBitmapRenderingContextSettings_set_alpha(ImageBitmapRenderingContextSettings* self, bool value);

ImageBitmapRenderingContextSettings ImageBitmapRenderingContextSettings_new();

#ifdef __cplusplus
}
#endif
