#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStreamTrackEventInit MediaStreamTrackEventInit;
typedef struct MediaStreamTrack MediaStreamTrack;

DECLARE_EMLITE_TYPE(MediaStreamTrackEvent, Event);

MediaStreamTrackEvent MediaStreamTrackEvent_new(jb_String * type, MediaStreamTrackEventInit * eventInitDict);

MediaStreamTrack MediaStreamTrackEvent_track(const MediaStreamTrackEvent *self);

#ifdef __cplusplus
}
#endif
