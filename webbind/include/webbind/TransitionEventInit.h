#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TransitionEventInit, EventInit);

jb_String TransitionEventInit_propertyName(const TransitionEventInit *self);

void TransitionEventInit_set_propertyName(TransitionEventInit* self, jb_String * value);

double TransitionEventInit_elapsedTime(const TransitionEventInit *self);

void TransitionEventInit_set_elapsedTime(TransitionEventInit* self, double value);

jb_String TransitionEventInit_pseudoElement(const TransitionEventInit *self);

void TransitionEventInit_set_pseudoElement(TransitionEventInit* self, jb_String * value);

TransitionEventInit TransitionEventInit_new();

#ifdef __cplusplus
}
#endif
