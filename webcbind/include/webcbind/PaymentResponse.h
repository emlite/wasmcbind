#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContactAddress ContactAddress;
typedef struct PaymentCompleteDetails PaymentCompleteDetails;
typedef struct PaymentValidationErrors PaymentValidationErrors;


/**
 * @brief Interface PaymentResponse
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PaymentResponse)
 */
DECLARE_EMLITE_TYPE(PaymentResponse, EventTarget);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object PaymentResponse_toJSON(PaymentResponse* self );

/**
 * @brief Gets the `requestId` property. 
*/
jb_String PaymentResponse_requestId(const PaymentResponse *self);

/**
 * @brief Gets the `methodName` property. 
*/
jb_String PaymentResponse_methodName(const PaymentResponse *self);

/**
 * @brief Gets the `details` property. 
*/
jb_Object PaymentResponse_details(const PaymentResponse *self);

/**
 * @brief Gets the `shippingAddress` property. 
*/
ContactAddress PaymentResponse_shippingAddress(const PaymentResponse *self);

/**
 * @brief Gets the `shippingOption` property. 
*/
jb_String PaymentResponse_shippingOption(const PaymentResponse *self);

/**
 * @brief Gets the `payerName` property. 
*/
jb_String PaymentResponse_payerName(const PaymentResponse *self);

/**
 * @brief Gets the `payerEmail` property. 
*/
jb_String PaymentResponse_payerEmail(const PaymentResponse *self);

/**
 * @brief Gets the `payerPhone` property. 
*/
jb_String PaymentResponse_payerPhone(const PaymentResponse *self);

/**
 * @brief Calls the `complete` method. 
*/
jb_Promise PaymentResponse_complete0(PaymentResponse* self );

/**
 * @brief Calls the `complete` method. 
*/
jb_Promise PaymentResponse_complete1(PaymentResponse* self , PaymentComplete * result);

/**
 * @brief Calls the `complete` method. 
*/
jb_Promise PaymentResponse_complete2(PaymentResponse* self , PaymentComplete * result, PaymentCompleteDetails * details);

/**
 * @brief Calls the `retry` method. 
*/
jb_Promise PaymentResponse_retry0(PaymentResponse* self );

/**
 * @brief Calls the `retry` method. 
*/
jb_Promise PaymentResponse_retry1(PaymentResponse* self , PaymentValidationErrors * errorFields);

/**
 * @brief Gets the `onpayerdetailchange` property. 
*/
jb_Any PaymentResponse_onpayerdetailchange(const PaymentResponse *self);

/**
 * @brief Sets the `onpayerdetailchange` property. 
*/
void PaymentResponse_set_onpayerdetailchange(PaymentResponse* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
