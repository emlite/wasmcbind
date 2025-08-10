#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStreamTrack MediaStreamTrack;

DECLARE_EMLITE_TYPE(MediaStreamTrackEventInit, EventInit);

MediaStreamTrack MediaStreamTrackEventInit_track(const MediaStreamTrackEventInit *self);

void MediaStreamTrackEventInit_set_track(MediaStreamTrackEventInit* self, MediaStreamTrack * value);

MediaStreamTrackEventInit MediaStreamTrackEventInit_new();

#ifdef __cplusplus
}
#endif
