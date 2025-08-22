#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DeviceOrientationEventInit DeviceOrientationEventInit;


/**
 * @brief Interface DeviceOrientationEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DeviceOrientationEvent)
 */
DECLARE_EMLITE_TYPE(DeviceOrientationEvent, Event);

/**
 * @brief Creates a new `DeviceOrientationEvent` object. 
*/
DeviceOrientationEvent DeviceOrientationEvent_new0(jb_String * type);

/**
 * @brief Creates a new `DeviceOrientationEvent` object. 
*/
DeviceOrientationEvent DeviceOrientationEvent_new1(jb_String * type, DeviceOrientationEventInit * eventInitDict);

/**
 * @brief Gets the `alpha` property. 
*/
double DeviceOrientationEvent_alpha(const DeviceOrientationEvent *self);

/**
 * @brief Gets the `beta` property. 
*/
double DeviceOrientationEvent_beta(const DeviceOrientationEvent *self);

/**
 * @brief Gets the `gamma` property. 
*/
double DeviceOrientationEvent_gamma(const DeviceOrientationEvent *self);

/**
 * @brief Gets the `absolute` property. 
*/
bool DeviceOrientationEvent_absolute(const DeviceOrientationEvent *self);

/**
 * @brief Calls the `requestPermission` method. 
*/
jb_Promise DeviceOrientationEvent_requestPermission0(DeviceOrientationEvent* self );

/**
 * @brief Calls the `requestPermission` method. 
*/
jb_Promise DeviceOrientationEvent_requestPermission1(DeviceOrientationEvent* self , bool absolute);

#ifdef __cplusplus
}
#endif
