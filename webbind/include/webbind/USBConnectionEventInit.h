#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBDevice USBDevice;

DECLARE_EMLITE_TYPE(USBConnectionEventInit, EventInit);

USBDevice USBConnectionEventInit_device(const USBConnectionEventInit *self);

void USBConnectionEventInit_set_device(USBConnectionEventInit* self, USBDevice * value);

USBConnectionEventInit USBConnectionEventInit_new();

#ifdef __cplusplus
}
#endif
