#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EventListenerOptions, em_Val);

bool EventListenerOptions_capture(const EventListenerOptions *self);

void EventListenerOptions_set_capture(EventListenerOptions* self, bool value);

EventListenerOptions EventListenerOptions_new();

#ifdef __cplusplus
}
#endif
