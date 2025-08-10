#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "VideoConfiguration.h"
#include "AudioConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaConfiguration, em_Val);

VideoConfiguration MediaConfiguration_video(const MediaConfiguration *self);

void MediaConfiguration_set_video(MediaConfiguration* self, VideoConfiguration * value);

AudioConfiguration MediaConfiguration_audio(const MediaConfiguration *self);

void MediaConfiguration_set_audio(MediaConfiguration* self, AudioConfiguration * value);

MediaConfiguration MediaConfiguration_new();

#ifdef __cplusplus
}
#endif
