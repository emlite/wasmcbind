#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBConnectionEventInit USBConnectionEventInit;
typedef struct USBDevice USBDevice;

DECLARE_EMLITE_TYPE(USBConnectionEvent, Event);

USBConnectionEvent USBConnectionEvent_new(jb_String * type, USBConnectionEventInit * eventInitDict);

USBDevice USBConnectionEvent_device(const USBConnectionEvent *self);

#ifdef __cplusplus
}
#endif
