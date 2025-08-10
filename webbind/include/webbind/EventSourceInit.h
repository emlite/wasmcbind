#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EventSourceInit, em_Val);

bool EventSourceInit_withCredentials(const EventSourceInit *self);

void EventSourceInit_set_withCredentials(EventSourceInit* self, bool value);

EventSourceInit EventSourceInit_new();

#ifdef __cplusplus
}
#endif
