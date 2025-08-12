#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "VideoDecoderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoDecoderSupport */
DECLARE_EMLITE_TYPE(VideoDecoderSupport, em_Val);

/** @brief Getter of the supported property */
bool VideoDecoderSupport_supported(const VideoDecoderSupport *self);

/** @brief Setter of the supported property */
void VideoDecoderSupport_set_supported(VideoDecoderSupport* self, bool value);

/** @brief Getter of the config property */
VideoDecoderConfig VideoDecoderSupport_config(const VideoDecoderSupport *self);

/** @brief Setter of the config property */
void VideoDecoderSupport_set_config(VideoDecoderSupport* self, VideoDecoderConfig * value);

/** @brief Constructor of the VideoDecoderSupport dictionary type */
VideoDecoderSupport VideoDecoderSupport_new();

#ifdef __cplusplus
}
#endif
