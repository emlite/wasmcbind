#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "VideoDecoderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(VideoDecoderSupport, em_Val);

bool VideoDecoderSupport_supported(const VideoDecoderSupport *self);

void VideoDecoderSupport_set_supported(VideoDecoderSupport* self, bool value);

VideoDecoderConfig VideoDecoderSupport_config(const VideoDecoderSupport *self);

void VideoDecoderSupport_set_config(VideoDecoderSupport* self, VideoDecoderConfig * value);

VideoDecoderSupport VideoDecoderSupport_new();

#ifdef __cplusplus
}
#endif
