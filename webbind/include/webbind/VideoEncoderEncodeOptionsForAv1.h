#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoEncoderEncodeOptionsForAv1, em_Val);

unsigned short VideoEncoderEncodeOptionsForAv1_quantizer(const VideoEncoderEncodeOptionsForAv1 *self);

void VideoEncoderEncodeOptionsForAv1_set_quantizer(VideoEncoderEncodeOptionsForAv1* self, unsigned short value);

VideoEncoderEncodeOptionsForAv1 VideoEncoderEncodeOptionsForAv1_new();

#ifdef __cplusplus
}
#endif
