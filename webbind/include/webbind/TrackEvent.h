#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(TrackEvent, Event);

TrackEvent TrackEvent_new0(jb_DOMString * type);

TrackEvent TrackEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_Any TrackEvent_track(const TrackEvent *self);
