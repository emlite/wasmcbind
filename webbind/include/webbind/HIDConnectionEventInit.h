#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HIDDevice HIDDevice;

DECLARE_EMLITE_TYPE(HIDConnectionEventInit, EventInit);

HIDDevice HIDConnectionEventInit_device(const HIDConnectionEventInit *self);

void HIDConnectionEventInit_set_device(HIDConnectionEventInit* self, HIDDevice * value);

HIDConnectionEventInit HIDConnectionEventInit_new();

#ifdef __cplusplus
}
#endif
