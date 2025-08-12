#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MouseEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WheelEventInit WheelEventInit;


/**
 * @brief Interface WheelEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent)
 */
DECLARE_EMLITE_TYPE(WheelEvent, MouseEvent);

/**
 * @brief Creates a new `WheelEvent` object. 
*/
WheelEvent WheelEvent_new0(jb_String * type);

/**
 * @brief Creates a new `WheelEvent` object. 
*/
WheelEvent WheelEvent_new1(jb_String * type, WheelEventInit * eventInitDict);

/**
 * @brief Gets the `deltaX` property. 
*/
double WheelEvent_deltaX(const WheelEvent *self);

/**
 * @brief Gets the `deltaY` property. 
*/
double WheelEvent_deltaY(const WheelEvent *self);

/**
 * @brief Gets the `deltaZ` property. 
*/
double WheelEvent_deltaZ(const WheelEvent *self);

/**
 * @brief Gets the `deltaMode` property. 
*/
unsigned long WheelEvent_deltaMode(const WheelEvent *self);

#ifdef __cplusplus
}
#endif
