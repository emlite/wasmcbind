#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PaymentRequestUpdateEventInit PaymentRequestUpdateEventInit;
typedef struct PaymentDetailsUpdate PaymentDetailsUpdate;


/**
 * @brief Interface PaymentRequestUpdateEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestUpdateEvent)
 */
DECLARE_EMLITE_TYPE(PaymentRequestUpdateEvent, Event);

/**
 * @brief Creates a new `PaymentRequestUpdateEvent` object. 
*/
PaymentRequestUpdateEvent PaymentRequestUpdateEvent_new0(jb_String * type);

/**
 * @brief Creates a new `PaymentRequestUpdateEvent` object. 
*/
PaymentRequestUpdateEvent PaymentRequestUpdateEvent_new1(jb_String * type, PaymentRequestUpdateEventInit * eventInitDict);

/**
 * @brief Calls the `updateWith` method. 
*/
jb_Undefined PaymentRequestUpdateEvent_updateWith(PaymentRequestUpdateEvent* self , jb_Promise * detailsPromise);

#ifdef __cplusplus
}
#endif
