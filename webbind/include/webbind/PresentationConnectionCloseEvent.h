#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PresentationConnectionCloseEventInit PresentationConnectionCloseEventInit;


/**
 * @brief Interface PresentationConnectionCloseEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionCloseEvent)
 */
DECLARE_EMLITE_TYPE(PresentationConnectionCloseEvent, Event);

/**
 * @brief Creates a new `PresentationConnectionCloseEvent` object. 
*/
PresentationConnectionCloseEvent PresentationConnectionCloseEvent_new(jb_String * type, PresentationConnectionCloseEventInit * eventInitDict);

/**
 * @brief Gets the `reason` property. 
*/
PresentationConnectionCloseReason PresentationConnectionCloseEvent_reason(const PresentationConnectionCloseEvent *self);

/**
 * @brief Gets the `message` property. 
*/
jb_String PresentationConnectionCloseEvent_message(const PresentationConnectionCloseEvent *self);

#ifdef __cplusplus
}
#endif
