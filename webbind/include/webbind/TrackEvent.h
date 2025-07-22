#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} TrackEvent;


DECLARE_EMLITE_TYPE(TrackEvent, Event);

TrackEvent TrackEvent_new(const jb_DOMString* type);

TrackEvent TrackEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_Any TrackEvent_track( const TrackEvent *self);
