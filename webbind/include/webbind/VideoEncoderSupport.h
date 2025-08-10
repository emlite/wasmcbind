#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "VideoEncoderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoEncoderSupport, em_Val);

bool VideoEncoderSupport_supported(const VideoEncoderSupport *self);

void VideoEncoderSupport_set_supported(VideoEncoderSupport* self, bool value);

VideoEncoderConfig VideoEncoderSupport_config(const VideoEncoderSupport *self);

void VideoEncoderSupport_set_config(VideoEncoderSupport* self, VideoEncoderConfig * value);

VideoEncoderSupport VideoEncoderSupport_new();

#ifdef __cplusplus
}
#endif
