#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TrackEventInit, EventInit);

jb_Any TrackEventInit_track(const TrackEventInit *self);

void TrackEventInit_set_track(TrackEventInit* self, jb_Any * value);

TrackEventInit TrackEventInit_new();

#ifdef __cplusplus
}
#endif
