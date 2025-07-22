#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} TransitionEvent;


DECLARE_EMLITE_TYPE(TransitionEvent, Event);

TransitionEvent TransitionEvent_new(const jb_CSSOMString* type);

TransitionEvent TransitionEvent_new(const jb_CSSOMString* type, const jb_Any* transitionEventInitDict);

jb_CSSOMString TransitionEvent_propertyName( const TransitionEvent *self);

double TransitionEvent_elapsedTime( const TransitionEvent *self);

jb_CSSOMString TransitionEvent_pseudoElement( const TransitionEvent *self);
