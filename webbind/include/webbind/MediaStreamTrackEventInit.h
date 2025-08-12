#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStreamTrack MediaStreamTrack;

/** @brief Dictionary type MediaStreamTrackEventInit */
DECLARE_EMLITE_TYPE(MediaStreamTrackEventInit, EventInit);

/** @brief Getter of the track property */
MediaStreamTrack MediaStreamTrackEventInit_track(const MediaStreamTrackEventInit *self);

/** @brief Setter of the track property */
void MediaStreamTrackEventInit_set_track(MediaStreamTrackEventInit* self, MediaStreamTrack * value);

/** @brief Constructor of the MediaStreamTrackEventInit dictionary type */
MediaStreamTrackEventInit MediaStreamTrackEventInit_new();

#ifdef __cplusplus
}
#endif
