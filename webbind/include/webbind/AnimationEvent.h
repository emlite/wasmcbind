#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(AnimationEvent, Event);

AnimationEvent AnimationEvent_new0(jb_CSSOMString * type);

AnimationEvent AnimationEvent_new1(jb_CSSOMString * type, jb_Any * animationEventInitDict);

jb_CSSOMString AnimationEvent_animationName(const AnimationEvent *self);

double AnimationEvent_elapsedTime(const AnimationEvent *self);

jb_CSSOMString AnimationEvent_pseudoElement(const AnimationEvent *self);
