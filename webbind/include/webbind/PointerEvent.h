#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MouseEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PointerEventInit PointerEventInit;


/**
 * @brief Interface PointerEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent)
 */
DECLARE_EMLITE_TYPE(PointerEvent, MouseEvent);

/**
 * @brief Creates a new `PointerEvent` object. 
*/
PointerEvent PointerEvent_new0(jb_String * type);

/**
 * @brief Creates a new `PointerEvent` object. 
*/
PointerEvent PointerEvent_new1(jb_String * type, PointerEventInit * eventInitDict);

/**
 * @brief Gets the `pointerId` property. 
*/
long PointerEvent_pointerId(const PointerEvent *self);

/**
 * @brief Gets the `width` property. 
*/
double PointerEvent_width(const PointerEvent *self);

/**
 * @brief Gets the `height` property. 
*/
double PointerEvent_height(const PointerEvent *self);

/**
 * @brief Gets the `pressure` property. 
*/
float PointerEvent_pressure(const PointerEvent *self);

/**
 * @brief Gets the `tangentialPressure` property. 
*/
float PointerEvent_tangentialPressure(const PointerEvent *self);

/**
 * @brief Gets the `tiltX` property. 
*/
long PointerEvent_tiltX(const PointerEvent *self);

/**
 * @brief Gets the `tiltY` property. 
*/
long PointerEvent_tiltY(const PointerEvent *self);

/**
 * @brief Gets the `twist` property. 
*/
long PointerEvent_twist(const PointerEvent *self);

/**
 * @brief Gets the `altitudeAngle` property. 
*/
double PointerEvent_altitudeAngle(const PointerEvent *self);

/**
 * @brief Gets the `azimuthAngle` property. 
*/
double PointerEvent_azimuthAngle(const PointerEvent *self);

/**
 * @brief Gets the `pointerType` property. 
*/
jb_String PointerEvent_pointerType(const PointerEvent *self);

/**
 * @brief Gets the `isPrimary` property. 
*/
bool PointerEvent_isPrimary(const PointerEvent *self);

/**
 * @brief Gets the `persistentDeviceId` property. 
*/
long PointerEvent_persistentDeviceId(const PointerEvent *self);

/**
 * @brief Calls the `getCoalescedEvents` method. 
*/
jb_Array PointerEvent_getCoalescedEvents(PointerEvent* self );

/**
 * @brief Calls the `getPredictedEvents` method. 
*/
jb_Array PointerEvent_getPredictedEvents(PointerEvent* self );

#ifdef __cplusplus
}
#endif
