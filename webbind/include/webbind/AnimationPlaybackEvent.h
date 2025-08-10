#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationPlaybackEventInit AnimationPlaybackEventInit;

DECLARE_EMLITE_TYPE(AnimationPlaybackEvent, Event);

AnimationPlaybackEvent AnimationPlaybackEvent_new0(jb_String * type);

AnimationPlaybackEvent AnimationPlaybackEvent_new1(jb_String * type, AnimationPlaybackEventInit * eventInitDict);

jb_Any AnimationPlaybackEvent_currentTime(const AnimationPlaybackEvent *self);

jb_Any AnimationPlaybackEvent_timelineTime(const AnimationPlaybackEvent *self);

#ifdef __cplusplus
}
#endif
