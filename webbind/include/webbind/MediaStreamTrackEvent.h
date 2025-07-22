#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct MediaStreamTrack MediaStreamTrack;


typedef struct {
  Event inner;
} MediaStreamTrackEvent;


DECLARE_EMLITE_TYPE(MediaStreamTrackEvent, Event);

MediaStreamTrackEvent MediaStreamTrackEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

MediaStreamTrack MediaStreamTrackEvent_track( const MediaStreamTrackEvent *self);
