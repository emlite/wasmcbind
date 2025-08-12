#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type VideoEncoderEncodeOptions */
DECLARE_EMLITE_TYPE(VideoEncoderEncodeOptions, em_Val);

/** @brief Getter of the keyFrame property */
bool VideoEncoderEncodeOptions_keyFrame(const VideoEncoderEncodeOptions *self);

/** @brief Setter of the keyFrame property */
void VideoEncoderEncodeOptions_set_keyFrame(VideoEncoderEncodeOptions* self, bool value);

/** @brief Constructor of the VideoEncoderEncodeOptions dictionary type */
VideoEncoderEncodeOptions VideoEncoderEncodeOptions_new();

#ifdef __cplusplus
}
#endif
