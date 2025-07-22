#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(DeviceOrientationEvent, Event);

DeviceOrientationEvent DeviceOrientationEvent_new0(jb_DOMString * type);

DeviceOrientationEvent DeviceOrientationEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

double DeviceOrientationEvent_alpha( const DeviceOrientationEvent *self);

double DeviceOrientationEvent_beta( const DeviceOrientationEvent *self);

double DeviceOrientationEvent_gamma( const DeviceOrientationEvent *self);

bool DeviceOrientationEvent_absolute( const DeviceOrientationEvent *self);

jb_Promise DeviceOrientationEvent_requestPermission0(DeviceOrientationEvent* self );

jb_Promise DeviceOrientationEvent_requestPermission1(DeviceOrientationEvent* self , bool absolute);
