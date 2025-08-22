#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PromiseRejectionEventInit PromiseRejectionEventInit;


/**
 * @brief Interface PromiseRejectionEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PromiseRejectionEvent)
 */
DECLARE_EMLITE_TYPE(PromiseRejectionEvent, Event);

/**
 * @brief Creates a new `PromiseRejectionEvent` object. 
*/
PromiseRejectionEvent PromiseRejectionEvent_new(jb_String * type, PromiseRejectionEventInit * eventInitDict);

/**
 * @brief Gets the `promise` property. 
*/
jb_Object PromiseRejectionEvent_promise(const PromiseRejectionEvent *self);

/**
 * @brief Gets the `reason` property. 
*/
jb_Any PromiseRejectionEvent_reason(const PromiseRejectionEvent *self);

#ifdef __cplusplus
}
#endif
