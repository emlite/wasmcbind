#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TransitionEventInit TransitionEventInit;

DECLARE_EMLITE_TYPE(TransitionEvent, Event);

TransitionEvent TransitionEvent_new0(jb_String * type);

TransitionEvent TransitionEvent_new1(jb_String * type, TransitionEventInit * transitionEventInitDict);

jb_String TransitionEvent_propertyName(const TransitionEvent *self);

double TransitionEvent_elapsedTime(const TransitionEvent *self);

jb_String TransitionEvent_pseudoElement(const TransitionEvent *self);

#ifdef __cplusplus
}
#endif
