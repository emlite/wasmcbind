#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DevicePosture, EventTarget);

DevicePostureType DevicePosture_type(const DevicePosture *self);

jb_Any DevicePosture_onchange(const DevicePosture *self);

void DevicePosture_set_onchange(DevicePosture* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
