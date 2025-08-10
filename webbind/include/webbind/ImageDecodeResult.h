#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct VideoFrame VideoFrame;

DECLARE_EMLITE_TYPE(ImageDecodeResult, em_Val);

VideoFrame ImageDecodeResult_image(const ImageDecodeResult *self);

void ImageDecodeResult_set_image(ImageDecodeResult* self, VideoFrame * value);

bool ImageDecodeResult_complete(const ImageDecodeResult *self);

void ImageDecodeResult_set_complete(ImageDecodeResult* self, bool value);

ImageDecodeResult ImageDecodeResult_new();

#ifdef __cplusplus
}
#endif
