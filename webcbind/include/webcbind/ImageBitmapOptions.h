#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ImageBitmapOptions */
DECLARE_EMLITE_TYPE(ImageBitmapOptions, em_Val);

/** @brief Getter of the imageOrientation property */
ImageOrientation ImageBitmapOptions_imageOrientation(const ImageBitmapOptions *self);

/** @brief Setter of the imageOrientation property */
void ImageBitmapOptions_set_imageOrientation(ImageBitmapOptions* self, ImageOrientation * value);

/** @brief Getter of the premultiplyAlpha property */
PremultiplyAlpha ImageBitmapOptions_premultiplyAlpha(const ImageBitmapOptions *self);

/** @brief Setter of the premultiplyAlpha property */
void ImageBitmapOptions_set_premultiplyAlpha(ImageBitmapOptions* self, PremultiplyAlpha * value);

/** @brief Getter of the colorSpaceConversion property */
ColorSpaceConversion ImageBitmapOptions_colorSpaceConversion(const ImageBitmapOptions *self);

/** @brief Setter of the colorSpaceConversion property */
void ImageBitmapOptions_set_colorSpaceConversion(ImageBitmapOptions* self, ColorSpaceConversion * value);

/** @brief Getter of the resizeWidth property */
unsigned long ImageBitmapOptions_resizeWidth(const ImageBitmapOptions *self);

/** @brief Setter of the resizeWidth property */
void ImageBitmapOptions_set_resizeWidth(ImageBitmapOptions* self, unsigned long value);

/** @brief Getter of the resizeHeight property */
unsigned long ImageBitmapOptions_resizeHeight(const ImageBitmapOptions *self);

/** @brief Setter of the resizeHeight property */
void ImageBitmapOptions_set_resizeHeight(ImageBitmapOptions* self, unsigned long value);

/** @brief Getter of the resizeQuality property */
ResizeQuality ImageBitmapOptions_resizeQuality(const ImageBitmapOptions *self);

/** @brief Setter of the resizeQuality property */
void ImageBitmapOptions_set_resizeQuality(ImageBitmapOptions* self, ResizeQuality * value);

/** @brief Constructor of the ImageBitmapOptions dictionary type */
ImageBitmapOptions ImageBitmapOptions_new();

#ifdef __cplusplus
}
#endif
