#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} DeviceOrientationEvent;


DECLARE_EMLITE_TYPE(DeviceOrientationEvent, Event);

DeviceOrientationEvent DeviceOrientationEvent_new(const jb_DOMString* type);

DeviceOrientationEvent DeviceOrientationEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

double DeviceOrientationEvent_alpha( const DeviceOrientationEvent *self);

double DeviceOrientationEvent_beta( const DeviceOrientationEvent *self);

double DeviceOrientationEvent_gamma( const DeviceOrientationEvent *self);

bool DeviceOrientationEvent_absolute( const DeviceOrientationEvent *self);

jb_Promise DeviceOrientationEvent_requestPermission(DeviceOrientationEvent* self );

jb_Promise DeviceOrientationEvent_requestPermission(DeviceOrientationEvent* self , bool absolute);
