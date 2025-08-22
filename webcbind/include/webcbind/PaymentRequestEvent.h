#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PaymentRequestEventInit PaymentRequestEventInit;
typedef struct PaymentMethodData PaymentMethodData;
typedef struct PaymentDetailsModifier PaymentDetailsModifier;
typedef struct PaymentShippingOption PaymentShippingOption;
typedef struct WindowClient WindowClient;
typedef struct PaymentRequestDetailsUpdate PaymentRequestDetailsUpdate;
typedef struct AddressInit AddressInit;
typedef struct PaymentHandlerResponse PaymentHandlerResponse;


/**
 * @brief Interface PaymentRequestEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequestEvent)
 */
DECLARE_EMLITE_TYPE(PaymentRequestEvent, ExtendableEvent);

/**
 * @brief Creates a new `PaymentRequestEvent` object. 
*/
PaymentRequestEvent PaymentRequestEvent_new0(jb_String * type);

/**
 * @brief Creates a new `PaymentRequestEvent` object. 
*/
PaymentRequestEvent PaymentRequestEvent_new1(jb_String * type, PaymentRequestEventInit * eventInitDict);

/**
 * @brief Gets the `topOrigin` property. 
*/
jb_String PaymentRequestEvent_topOrigin(const PaymentRequestEvent *self);

/**
 * @brief Gets the `paymentRequestOrigin` property. 
*/
jb_String PaymentRequestEvent_paymentRequestOrigin(const PaymentRequestEvent *self);

/**
 * @brief Gets the `paymentRequestId` property. 
*/
jb_String PaymentRequestEvent_paymentRequestId(const PaymentRequestEvent *self);

/**
 * @brief Gets the `methodData` property. 
*/
jb_Array PaymentRequestEvent_methodData(const PaymentRequestEvent *self);

/**
 * @brief Gets the `total` property. 
*/
jb_Object PaymentRequestEvent_total(const PaymentRequestEvent *self);

/**
 * @brief Gets the `modifiers` property. 
*/
jb_Array PaymentRequestEvent_modifiers(const PaymentRequestEvent *self);

/**
 * @brief Gets the `paymentOptions` property. 
*/
jb_Object PaymentRequestEvent_paymentOptions(const PaymentRequestEvent *self);

/**
 * @brief Gets the `shippingOptions` property. 
*/
jb_Array PaymentRequestEvent_shippingOptions(const PaymentRequestEvent *self);

/**
 * @brief Calls the `openWindow` method. 
*/
jb_Promise PaymentRequestEvent_openWindow(PaymentRequestEvent* self , jb_String * url);

/**
 * @brief Calls the `changePaymentMethod` method. 
*/
jb_Promise PaymentRequestEvent_changePaymentMethod0(PaymentRequestEvent* self , jb_String * methodName);

/**
 * @brief Calls the `changePaymentMethod` method. 
*/
jb_Promise PaymentRequestEvent_changePaymentMethod1(PaymentRequestEvent* self , jb_String * methodName, jb_Object * methodDetails);

/**
 * @brief Calls the `changeShippingAddress` method. 
*/
jb_Promise PaymentRequestEvent_changeShippingAddress0(PaymentRequestEvent* self );

/**
 * @brief Calls the `changeShippingAddress` method. 
*/
jb_Promise PaymentRequestEvent_changeShippingAddress1(PaymentRequestEvent* self , AddressInit * shippingAddress);

/**
 * @brief Calls the `changeShippingOption` method. 
*/
jb_Promise PaymentRequestEvent_changeShippingOption(PaymentRequestEvent* self , jb_String * shippingOption);

/**
 * @brief Calls the `respondWith` method. 
*/
jb_Undefined PaymentRequestEvent_respondWith(PaymentRequestEvent* self , jb_Promise * handlerResponsePromise);

#ifdef __cplusplus
}
#endif
