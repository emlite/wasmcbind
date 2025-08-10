#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ValueEventInit, EventInit);

jb_Any ValueEventInit_value(const ValueEventInit *self);

void ValueEventInit_set_value(ValueEventInit* self, jb_Any * value);

ValueEventInit ValueEventInit_new();

#ifdef __cplusplus
}
#endif
