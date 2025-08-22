#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CanMakePaymentEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CanMakePaymentEvent)
 */
DECLARE_EMLITE_TYPE(CanMakePaymentEvent, ExtendableEvent);

/**
 * @brief Creates a new `CanMakePaymentEvent` object. 
*/
CanMakePaymentEvent CanMakePaymentEvent_new(jb_String * type);

/**
 * @brief Calls the `respondWith` method. 
*/
jb_Undefined CanMakePaymentEvent_respondWith(CanMakePaymentEvent* self , jb_Promise * canMakePaymentResponse);

#ifdef __cplusplus
}
#endif
