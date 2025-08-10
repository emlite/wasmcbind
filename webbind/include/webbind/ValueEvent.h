#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ValueEventInit ValueEventInit;

DECLARE_EMLITE_TYPE(ValueEvent, Event);

ValueEvent ValueEvent_new0(jb_String * type);

ValueEvent ValueEvent_new1(jb_String * type, ValueEventInit * initDict);

jb_Any ValueEvent_value(const ValueEvent *self);

#ifdef __cplusplus
}
#endif
