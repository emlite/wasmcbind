#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct MediaStreamTrack MediaStreamTrack;


DECLARE_EMLITE_TYPE(MediaStreamTrackEvent, Event);

MediaStreamTrackEvent MediaStreamTrackEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

MediaStreamTrack MediaStreamTrackEvent_track(const MediaStreamTrackEvent *self);
