#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoEncoderEncodeOptionsForVp9, em_Val);

unsigned short VideoEncoderEncodeOptionsForVp9_quantizer(const VideoEncoderEncodeOptionsForVp9 *self);

void VideoEncoderEncodeOptionsForVp9_set_quantizer(VideoEncoderEncodeOptionsForVp9* self, unsigned short value);

VideoEncoderEncodeOptionsForVp9 VideoEncoderEncodeOptionsForVp9_new();

#ifdef __cplusplus
}
#endif
