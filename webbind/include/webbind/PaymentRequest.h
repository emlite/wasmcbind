#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PaymentMethodData PaymentMethodData;
typedef struct PaymentDetailsInit PaymentDetailsInit;
typedef struct PaymentOptions PaymentOptions;
typedef struct PaymentResponse PaymentResponse;
typedef struct PaymentDetailsUpdate PaymentDetailsUpdate;
typedef struct ContactAddress ContactAddress;


/**
 * @brief Interface PaymentRequest
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PaymentRequest)
 */
DECLARE_EMLITE_TYPE(PaymentRequest, EventTarget);

/**
 * @brief Creates a new `PaymentRequest` object. 
*/
PaymentRequest PaymentRequest_new0(jb_Array * methodData, PaymentDetailsInit * details);

/**
 * @brief Creates a new `PaymentRequest` object. 
*/
PaymentRequest PaymentRequest_new1(jb_Array * methodData, PaymentDetailsInit * details, PaymentOptions * options);

/**
 * @brief Calls the `show` method. 
*/
jb_Promise PaymentRequest_show0(PaymentRequest* self );

/**
 * @brief Calls the `show` method. 
*/
jb_Promise PaymentRequest_show1(PaymentRequest* self , jb_Promise * detailsPromise);

/**
 * @brief Calls the `abort` method. 
*/
jb_Promise PaymentRequest_abort(PaymentRequest* self );

/**
 * @brief Calls the `canMakePayment` method. 
*/
jb_Promise PaymentRequest_canMakePayment(PaymentRequest* self );

/**
 * @brief Gets the `id` property. 
*/
jb_String PaymentRequest_id(const PaymentRequest *self);

/**
 * @brief Gets the `shippingAddress` property. 
*/
ContactAddress PaymentRequest_shippingAddress(const PaymentRequest *self);

/**
 * @brief Gets the `shippingOption` property. 
*/
jb_String PaymentRequest_shippingOption(const PaymentRequest *self);

/**
 * @brief Gets the `shippingType` property. 
*/
PaymentShippingType PaymentRequest_shippingType(const PaymentRequest *self);

/**
 * @brief Gets the `onshippingaddresschange` property. 
*/
jb_Any PaymentRequest_onshippingaddresschange(const PaymentRequest *self);

/**
 * @brief Sets the `onshippingaddresschange` property. 
*/
void PaymentRequest_set_onshippingaddresschange(PaymentRequest* self, jb_Any * value);

/**
 * @brief Gets the `onshippingoptionchange` property. 
*/
jb_Any PaymentRequest_onshippingoptionchange(const PaymentRequest *self);

/**
 * @brief Sets the `onshippingoptionchange` property. 
*/
void PaymentRequest_set_onshippingoptionchange(PaymentRequest* self, jb_Any * value);

/**
 * @brief Gets the `onpaymentmethodchange` property. 
*/
jb_Any PaymentRequest_onpaymentmethodchange(const PaymentRequest *self);

/**
 * @brief Sets the `onpaymentmethodchange` property. 
*/
void PaymentRequest_set_onpaymentmethodchange(PaymentRequest* self, jb_Any * value);

/**
 * @brief Calls the `securePaymentConfirmationAvailability` method. 
*/
jb_Promise PaymentRequest_securePaymentConfirmationAvailability(PaymentRequest* self );

#ifdef __cplusplus
}
#endif
