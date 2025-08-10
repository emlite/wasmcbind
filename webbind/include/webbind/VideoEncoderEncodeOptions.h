#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoEncoderEncodeOptions, em_Val);

bool VideoEncoderEncodeOptions_keyFrame(const VideoEncoderEncodeOptions *self);

void VideoEncoderEncodeOptions_set_keyFrame(VideoEncoderEncodeOptions* self, bool value);

VideoEncoderEncodeOptions VideoEncoderEncodeOptions_new();

#ifdef __cplusplus
}
#endif
