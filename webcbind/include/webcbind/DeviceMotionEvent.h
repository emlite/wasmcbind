#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DeviceMotionEventInit DeviceMotionEventInit;
typedef struct DeviceMotionEventAcceleration DeviceMotionEventAcceleration;
typedef struct DeviceMotionEventRotationRate DeviceMotionEventRotationRate;


/**
 * @brief Interface DeviceMotionEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEvent)
 */
DECLARE_EMLITE_TYPE(DeviceMotionEvent, Event);

/**
 * @brief Creates a new `DeviceMotionEvent` object. 
*/
DeviceMotionEvent DeviceMotionEvent_new0(jb_String * type);

/**
 * @brief Creates a new `DeviceMotionEvent` object. 
*/
DeviceMotionEvent DeviceMotionEvent_new1(jb_String * type, DeviceMotionEventInit * eventInitDict);

/**
 * @brief Gets the `acceleration` property. 
*/
DeviceMotionEventAcceleration DeviceMotionEvent_acceleration(const DeviceMotionEvent *self);

/**
 * @brief Gets the `accelerationIncludingGravity` property. 
*/
DeviceMotionEventAcceleration DeviceMotionEvent_accelerationIncludingGravity(const DeviceMotionEvent *self);

/**
 * @brief Gets the `rotationRate` property. 
*/
DeviceMotionEventRotationRate DeviceMotionEvent_rotationRate(const DeviceMotionEvent *self);

/**
 * @brief Gets the `interval` property. 
*/
double DeviceMotionEvent_interval(const DeviceMotionEvent *self);

/**
 * @brief Calls the `requestPermission` method. 
*/
jb_Promise DeviceMotionEvent_requestPermission(DeviceMotionEvent* self );

#ifdef __cplusplus
}
#endif
