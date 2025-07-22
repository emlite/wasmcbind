#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct USBDevice USBDevice;


typedef struct {
  Event inner;
} USBConnectionEvent;


DECLARE_EMLITE_TYPE(USBConnectionEvent, Event);

USBConnectionEvent USBConnectionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

USBDevice USBConnectionEvent_device( const USBConnectionEvent *self);
