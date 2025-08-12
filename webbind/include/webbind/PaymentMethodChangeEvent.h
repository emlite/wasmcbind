#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentRequestUpdateEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PaymentMethodChangeEventInit PaymentMethodChangeEventInit;


/**
 * @brief Interface PaymentMethodChangeEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PaymentMethodChangeEvent)
 */
DECLARE_EMLITE_TYPE(PaymentMethodChangeEvent, PaymentRequestUpdateEvent);

/**
 * @brief Creates a new `PaymentMethodChangeEvent` object. 
*/
PaymentMethodChangeEvent PaymentMethodChangeEvent_new0(jb_String * type);

/**
 * @brief Creates a new `PaymentMethodChangeEvent` object. 
*/
PaymentMethodChangeEvent PaymentMethodChangeEvent_new1(jb_String * type, PaymentMethodChangeEventInit * eventInitDict);

/**
 * @brief Gets the `methodName` property. 
*/
jb_String PaymentMethodChangeEvent_methodName(const PaymentMethodChangeEvent *self);

/**
 * @brief Gets the `methodDetails` property. 
*/
jb_Object PaymentMethodChangeEvent_methodDetails(const PaymentMethodChangeEvent *self);

#ifdef __cplusplus
}
#endif
