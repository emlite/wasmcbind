#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HIDDevice HIDDevice;
typedef struct HIDDeviceRequestOptions HIDDeviceRequestOptions;

DECLARE_EMLITE_TYPE(HID, EventTarget);

jb_Any HID_onconnect(const HID *self);

void HID_set_onconnect(HID* self, jb_Any * value);

jb_Any HID_ondisconnect(const HID *self);

void HID_set_ondisconnect(HID* self, jb_Any * value);

jb_Promise HID_getDevices(HID* self );

jb_Promise HID_requestDevice(HID* self , HIDDeviceRequestOptions * options);

#ifdef __cplusplus
}
#endif
