#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ExtendableEventInit ExtendableEventInit;


/**
 * @brief Interface ExtendableEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableEvent)
 */
DECLARE_EMLITE_TYPE(ExtendableEvent, Event);

/**
 * @brief Creates a new `ExtendableEvent` object. 
*/
ExtendableEvent ExtendableEvent_new0(jb_String * type);

/**
 * @brief Creates a new `ExtendableEvent` object. 
*/
ExtendableEvent ExtendableEvent_new1(jb_String * type, ExtendableEventInit * eventInitDict);

/**
 * @brief Calls the `waitUntil` method. 
*/
jb_Undefined ExtendableEvent_waitUntil(ExtendableEvent* self , jb_Promise * f);

#ifdef __cplusplus
}
#endif
