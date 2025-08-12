#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBConnectionEventInit USBConnectionEventInit;
typedef struct USBDevice USBDevice;


/**
 * @brief Interface USBConnectionEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/USBConnectionEvent)
 */
DECLARE_EMLITE_TYPE(USBConnectionEvent, Event);

/**
 * @brief Creates a new `USBConnectionEvent` object. 
*/
USBConnectionEvent USBConnectionEvent_new(jb_String * type, USBConnectionEventInit * eventInitDict);

/**
 * @brief Gets the `device` property. 
*/
USBDevice USBConnectionEvent_device(const USBConnectionEvent *self);

#ifdef __cplusplus
}
#endif
