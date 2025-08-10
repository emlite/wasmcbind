#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EventInit, em_Val);

bool EventInit_bubbles(const EventInit *self);

void EventInit_set_bubbles(EventInit* self, bool value);

bool EventInit_cancelable(const EventInit *self);

void EventInit_set_cancelable(EventInit* self, bool value);

bool EventInit_composed(const EventInit *self);

void EventInit_set_composed(EventInit* self, bool value);

EventInit EventInit_new();

#ifdef __cplusplus
}
#endif
