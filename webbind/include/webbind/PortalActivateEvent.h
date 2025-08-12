#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PortalActivateEventInit PortalActivateEventInit;
typedef struct HTMLPortalElement HTMLPortalElement;


/**
 * @brief Interface PortalActivateEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PortalActivateEvent)
 */
DECLARE_EMLITE_TYPE(PortalActivateEvent, Event);

/**
 * @brief Creates a new `PortalActivateEvent` object. 
*/
PortalActivateEvent PortalActivateEvent_new0(jb_String * type);

/**
 * @brief Creates a new `PortalActivateEvent` object. 
*/
PortalActivateEvent PortalActivateEvent_new1(jb_String * type, PortalActivateEventInit * eventInitDict);

/**
 * @brief Gets the `data` property. 
*/
jb_Any PortalActivateEvent_data(const PortalActivateEvent *self);

/**
 * @brief Calls the `adoptPredecessor` method. 
*/
HTMLPortalElement PortalActivateEvent_adoptPredecessor(PortalActivateEvent* self );

#ifdef __cplusplus
}
#endif
