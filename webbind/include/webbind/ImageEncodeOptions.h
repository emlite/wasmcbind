#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ImageEncodeOptions, em_Val);

jb_String ImageEncodeOptions_type(const ImageEncodeOptions *self);

void ImageEncodeOptions_set_type(ImageEncodeOptions* self, jb_String * value);

double ImageEncodeOptions_quality(const ImageEncodeOptions *self);

void ImageEncodeOptions_set_quality(ImageEncodeOptions* self, double value);

ImageEncodeOptions ImageEncodeOptions_new();

#ifdef __cplusplus
}
#endif
