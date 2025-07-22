#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct MediaDeviceInfo MediaDeviceInfo;


DECLARE_EMLITE_TYPE(DeviceChangeEvent, Event);

DeviceChangeEvent DeviceChangeEvent_new0(jb_DOMString * type);

DeviceChangeEvent DeviceChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_FrozenArray DeviceChangeEvent_devices( const DeviceChangeEvent *self);

jb_FrozenArray DeviceChangeEvent_userInsertedDevices( const DeviceChangeEvent *self);
