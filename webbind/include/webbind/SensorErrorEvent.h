#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SensorErrorEventInit SensorErrorEventInit;
typedef struct DOMException DOMException;


/**
 * @brief Interface SensorErrorEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SensorErrorEvent)
 */
DECLARE_EMLITE_TYPE(SensorErrorEvent, Event);

/**
 * @brief Creates a new `SensorErrorEvent` object. 
*/
SensorErrorEvent SensorErrorEvent_new(jb_String * type, SensorErrorEventInit * errorEventInitDict);

/**
 * @brief Gets the `error` property. 
*/
DOMException SensorErrorEvent_error(const SensorErrorEvent *self);

#ifdef __cplusplus
}
#endif
