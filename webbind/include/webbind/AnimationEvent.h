#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} AnimationEvent;


DECLARE_EMLITE_TYPE(AnimationEvent, Event);

AnimationEvent AnimationEvent_new(const jb_CSSOMString* type);

AnimationEvent AnimationEvent_new(const jb_CSSOMString* type, const jb_Any* animationEventInitDict);

jb_CSSOMString AnimationEvent_animationName( const AnimationEvent *self);

double AnimationEvent_elapsedTime( const AnimationEvent *self);

jb_CSSOMString AnimationEvent_pseudoElement( const AnimationEvent *self);
