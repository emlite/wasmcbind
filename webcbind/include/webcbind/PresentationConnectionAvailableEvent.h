#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PresentationConnectionAvailableEventInit PresentationConnectionAvailableEventInit;
typedef struct PresentationConnection PresentationConnection;


/**
 * @brief Interface PresentationConnectionAvailableEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionAvailableEvent)
 */
DECLARE_EMLITE_TYPE(PresentationConnectionAvailableEvent, Event);

/**
 * @brief Creates a new `PresentationConnectionAvailableEvent` object. 
*/
PresentationConnectionAvailableEvent PresentationConnectionAvailableEvent_new(jb_String * type, PresentationConnectionAvailableEventInit * eventInitDict);

/**
 * @brief Gets the `connection` property. 
*/
PresentationConnection PresentationConnectionAvailableEvent_connection(const PresentationConnectionAvailableEvent *self);

#ifdef __cplusplus
}
#endif
