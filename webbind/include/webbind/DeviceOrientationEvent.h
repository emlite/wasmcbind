#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DeviceOrientationEventInit DeviceOrientationEventInit;

DECLARE_EMLITE_TYPE(DeviceOrientationEvent, Event);

DeviceOrientationEvent DeviceOrientationEvent_new0(jb_String * type);

DeviceOrientationEvent DeviceOrientationEvent_new1(jb_String * type, DeviceOrientationEventInit * eventInitDict);

double DeviceOrientationEvent_alpha(const DeviceOrientationEvent *self);

double DeviceOrientationEvent_beta(const DeviceOrientationEvent *self);

double DeviceOrientationEvent_gamma(const DeviceOrientationEvent *self);

bool DeviceOrientationEvent_absolute(const DeviceOrientationEvent *self);

jb_Promise DeviceOrientationEvent_requestPermission0(DeviceOrientationEvent* self );

jb_Promise DeviceOrientationEvent_requestPermission1(DeviceOrientationEvent* self , bool absolute);

#ifdef __cplusplus
}
#endif
