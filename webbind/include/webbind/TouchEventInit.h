#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventModifierInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Touch Touch;

DECLARE_EMLITE_TYPE(TouchEventInit, EventModifierInit);

jb_Array TouchEventInit_touches(const TouchEventInit *self);

void TouchEventInit_set_touches(TouchEventInit* self, jb_Array * value);

jb_Array TouchEventInit_targetTouches(const TouchEventInit *self);

void TouchEventInit_set_targetTouches(TouchEventInit* self, jb_Array * value);

jb_Array TouchEventInit_changedTouches(const TouchEventInit *self);

void TouchEventInit_set_changedTouches(TouchEventInit* self, jb_Array * value);

TouchEventInit TouchEventInit_new();

#ifdef __cplusplus
}
#endif
