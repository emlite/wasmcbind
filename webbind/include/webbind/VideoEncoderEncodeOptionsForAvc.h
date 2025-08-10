#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoEncoderEncodeOptionsForAvc, em_Val);

unsigned short VideoEncoderEncodeOptionsForAvc_quantizer(const VideoEncoderEncodeOptionsForAvc *self);

void VideoEncoderEncodeOptionsForAvc_set_quantizer(VideoEncoderEncodeOptionsForAvc* self, unsigned short value);

VideoEncoderEncodeOptionsForAvc VideoEncoderEncodeOptionsForAvc_new();

#ifdef __cplusplus
}
#endif
