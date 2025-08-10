#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ImageDecodeOptions, em_Val);

unsigned long ImageDecodeOptions_frameIndex(const ImageDecodeOptions *self);

void ImageDecodeOptions_set_frameIndex(ImageDecodeOptions* self, unsigned long value);

bool ImageDecodeOptions_completeFramesOnly(const ImageDecodeOptions *self);

void ImageDecodeOptions_set_completeFramesOnly(ImageDecodeOptions* self, bool value);

ImageDecodeOptions ImageDecodeOptions_new();

#ifdef __cplusplus
}
#endif
