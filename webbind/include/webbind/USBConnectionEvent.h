#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct USBDevice USBDevice;


DECLARE_EMLITE_TYPE(USBConnectionEvent, Event);

USBConnectionEvent USBConnectionEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

USBDevice USBConnectionEvent_device(const USBConnectionEvent *self);
