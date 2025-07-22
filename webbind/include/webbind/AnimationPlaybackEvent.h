#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} AnimationPlaybackEvent;


DECLARE_EMLITE_TYPE(AnimationPlaybackEvent, Event);

AnimationPlaybackEvent AnimationPlaybackEvent_new(const jb_DOMString* type);

AnimationPlaybackEvent AnimationPlaybackEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_Any AnimationPlaybackEvent_currentTime( const AnimationPlaybackEvent *self);

jb_Any AnimationPlaybackEvent_timelineTime( const AnimationPlaybackEvent *self);
