#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ImageBitmapOptions, em_Val);

ImageOrientation ImageBitmapOptions_imageOrientation(const ImageBitmapOptions *self);

void ImageBitmapOptions_set_imageOrientation(ImageBitmapOptions* self, ImageOrientation * value);

PremultiplyAlpha ImageBitmapOptions_premultiplyAlpha(const ImageBitmapOptions *self);

void ImageBitmapOptions_set_premultiplyAlpha(ImageBitmapOptions* self, PremultiplyAlpha * value);

ColorSpaceConversion ImageBitmapOptions_colorSpaceConversion(const ImageBitmapOptions *self);

void ImageBitmapOptions_set_colorSpaceConversion(ImageBitmapOptions* self, ColorSpaceConversion * value);

unsigned long ImageBitmapOptions_resizeWidth(const ImageBitmapOptions *self);

void ImageBitmapOptions_set_resizeWidth(ImageBitmapOptions* self, unsigned long value);

unsigned long ImageBitmapOptions_resizeHeight(const ImageBitmapOptions *self);

void ImageBitmapOptions_set_resizeHeight(ImageBitmapOptions* self, unsigned long value);

ResizeQuality ImageBitmapOptions_resizeQuality(const ImageBitmapOptions *self);

void ImageBitmapOptions_set_resizeQuality(ImageBitmapOptions* self, ResizeQuality * value);

ImageBitmapOptions ImageBitmapOptions_new();

#ifdef __cplusplus
}
#endif
