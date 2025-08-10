#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStreamTrack MediaStreamTrack;

DECLARE_EMLITE_TYPE(MediaStreamTrackAudioSourceOptions, em_Val);

MediaStreamTrack MediaStreamTrackAudioSourceOptions_mediaStreamTrack(const MediaStreamTrackAudioSourceOptions *self);

void MediaStreamTrackAudioSourceOptions_set_mediaStreamTrack(MediaStreamTrackAudioSourceOptions* self, MediaStreamTrack * value);

MediaStreamTrackAudioSourceOptions MediaStreamTrackAudioSourceOptions_new();

#ifdef __cplusplus
}
#endif
