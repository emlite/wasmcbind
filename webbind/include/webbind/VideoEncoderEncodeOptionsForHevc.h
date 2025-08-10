#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoEncoderEncodeOptionsForHevc, em_Val);

unsigned short VideoEncoderEncodeOptionsForHevc_quantizer(const VideoEncoderEncodeOptionsForHevc *self);

void VideoEncoderEncodeOptionsForHevc_set_quantizer(VideoEncoderEncodeOptionsForHevc* self, unsigned short value);

VideoEncoderEncodeOptionsForHevc VideoEncoderEncodeOptionsForHevc_new();

#ifdef __cplusplus
}
#endif
