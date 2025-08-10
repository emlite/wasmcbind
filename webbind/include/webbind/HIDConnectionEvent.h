#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HIDConnectionEventInit HIDConnectionEventInit;
typedef struct HIDDevice HIDDevice;

DECLARE_EMLITE_TYPE(HIDConnectionEvent, Event);

HIDConnectionEvent HIDConnectionEvent_new(jb_String * type, HIDConnectionEventInit * eventInitDict);

HIDDevice HIDConnectionEvent_device(const HIDConnectionEvent *self);

#ifdef __cplusplus
}
#endif
