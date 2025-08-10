#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TrackEventInit TrackEventInit;

DECLARE_EMLITE_TYPE(TrackEvent, Event);

TrackEvent TrackEvent_new0(jb_String * type);

TrackEvent TrackEvent_new1(jb_String * type, TrackEventInit * eventInitDict);

jb_Any TrackEvent_track(const TrackEvent *self);

#ifdef __cplusplus
}
#endif
