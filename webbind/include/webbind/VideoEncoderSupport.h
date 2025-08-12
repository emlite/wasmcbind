#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "VideoEncoderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoEncoderSupport */
DECLARE_EMLITE_TYPE(VideoEncoderSupport, em_Val);

/** @brief Getter of the supported property */
bool VideoEncoderSupport_supported(const VideoEncoderSupport *self);

/** @brief Setter of the supported property */
void VideoEncoderSupport_set_supported(VideoEncoderSupport* self, bool value);

/** @brief Getter of the config property */
VideoEncoderConfig VideoEncoderSupport_config(const VideoEncoderSupport *self);

/** @brief Setter of the config property */
void VideoEncoderSupport_set_config(VideoEncoderSupport* self, VideoEncoderConfig * value);

/** @brief Constructor of the VideoEncoderSupport dictionary type */
VideoEncoderSupport VideoEncoderSupport_new();

#ifdef __cplusplus
}
#endif
