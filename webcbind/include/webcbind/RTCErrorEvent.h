#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCErrorEventInit RTCErrorEventInit;
typedef struct RTCError RTCError;


/**
 * @brief Interface RTCErrorEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCErrorEvent)
 */
DECLARE_EMLITE_TYPE(RTCErrorEvent, Event);

/**
 * @brief Creates a new `RTCErrorEvent` object. 
*/
RTCErrorEvent RTCErrorEvent_new(jb_String * type, RTCErrorEventInit * eventInitDict);

/**
 * @brief Gets the `error` property. 
*/
RTCError RTCErrorEvent_error(const RTCErrorEvent *self);

#ifdef __cplusplus
}
#endif
