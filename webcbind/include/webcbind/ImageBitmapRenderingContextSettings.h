#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ImageBitmapRenderingContextSettings */
DECLARE_EMLITE_TYPE(ImageBitmapRenderingContextSettings, em_Val);

/** @brief Getter of the alpha property */
bool ImageBitmapRenderingContextSettings_alpha(const ImageBitmapRenderingContextSettings *self);

/** @brief Setter of the alpha property */
void ImageBitmapRenderingContextSettings_set_alpha(ImageBitmapRenderingContextSettings* self, bool value);

/** @brief Constructor of the ImageBitmapRenderingContextSettings dictionary type */
ImageBitmapRenderingContextSettings ImageBitmapRenderingContextSettings_new();

#ifdef __cplusplus
}
#endif
