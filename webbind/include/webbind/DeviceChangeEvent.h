#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DeviceChangeEventInit DeviceChangeEventInit;
typedef struct MediaDeviceInfo MediaDeviceInfo;


/**
 * @brief Interface DeviceChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DeviceChangeEvent)
 */
DECLARE_EMLITE_TYPE(DeviceChangeEvent, Event);

/**
 * @brief Creates a new `DeviceChangeEvent` object. 
*/
DeviceChangeEvent DeviceChangeEvent_new0(jb_String * type);

/**
 * @brief Creates a new `DeviceChangeEvent` object. 
*/
DeviceChangeEvent DeviceChangeEvent_new1(jb_String * type, DeviceChangeEventInit * eventInitDict);

/**
 * @brief Gets the `devices` property. 
*/
jb_Array DeviceChangeEvent_devices(const DeviceChangeEvent *self);

/**
 * @brief Gets the `userInsertedDevices` property. 
*/
jb_Array DeviceChangeEvent_userInsertedDevices(const DeviceChangeEvent *self);

#ifdef __cplusplus
}
#endif
