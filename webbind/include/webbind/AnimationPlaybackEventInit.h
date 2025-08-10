#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AnimationPlaybackEventInit, EventInit);

jb_Any AnimationPlaybackEventInit_currentTime(const AnimationPlaybackEventInit *self);

void AnimationPlaybackEventInit_set_currentTime(AnimationPlaybackEventInit* self, jb_Any * value);

jb_Any AnimationPlaybackEventInit_timelineTime(const AnimationPlaybackEventInit *self);

void AnimationPlaybackEventInit_set_timelineTime(AnimationPlaybackEventInit* self, jb_Any * value);

AnimationPlaybackEventInit AnimationPlaybackEventInit_new();

#ifdef __cplusplus
}
#endif
