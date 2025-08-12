#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "VideoConfiguration.h"
#include "AudioConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaConfiguration */
DECLARE_EMLITE_TYPE(MediaConfiguration, em_Val);

/** @brief Getter of the video property */
VideoConfiguration MediaConfiguration_video(const MediaConfiguration *self);

/** @brief Setter of the video property */
void MediaConfiguration_set_video(MediaConfiguration* self, VideoConfiguration * value);

/** @brief Getter of the audio property */
AudioConfiguration MediaConfiguration_audio(const MediaConfiguration *self);

/** @brief Setter of the audio property */
void MediaConfiguration_set_audio(MediaConfiguration* self, AudioConfiguration * value);

/** @brief Constructor of the MediaConfiguration dictionary type */
MediaConfiguration MediaConfiguration_new();

#ifdef __cplusplus
}
#endif
