#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStreamTrack MediaStreamTrack;

/** @brief Dictionary type MediaStreamTrackAudioSourceOptions */
DECLARE_EMLITE_TYPE(MediaStreamTrackAudioSourceOptions, em_Val);

/** @brief Getter of the mediaStreamTrack property */
MediaStreamTrack MediaStreamTrackAudioSourceOptions_mediaStreamTrack(const MediaStreamTrackAudioSourceOptions *self);

/** @brief Setter of the mediaStreamTrack property */
void MediaStreamTrackAudioSourceOptions_set_mediaStreamTrack(MediaStreamTrackAudioSourceOptions* self, MediaStreamTrack * value);

/** @brief Constructor of the MediaStreamTrackAudioSourceOptions dictionary type */
MediaStreamTrackAudioSourceOptions MediaStreamTrackAudioSourceOptions_new();

#ifdef __cplusplus
}
#endif
