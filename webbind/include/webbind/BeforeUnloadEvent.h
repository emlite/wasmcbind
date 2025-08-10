#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BeforeUnloadEvent, Event);

jb_String BeforeUnloadEvent_returnValue(const BeforeUnloadEvent *self);

void BeforeUnloadEvent_set_returnValue(BeforeUnloadEvent* self, jb_String * value);

#ifdef __cplusplus
}
#endif
