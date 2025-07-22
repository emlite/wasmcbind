#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"


typedef struct {
  EventTarget inner;
} DevicePosture;


DECLARE_EMLITE_TYPE(DevicePosture, EventTarget);

DevicePostureType DevicePosture_type( const DevicePosture *self);

jb_Any DevicePosture_onchange( const DevicePosture *self);

void DevicePosture_set_onchange(DevicePosture* self, const jb_Any* value);
