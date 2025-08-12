#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentOptions */
DECLARE_EMLITE_TYPE(PaymentOptions, em_Val);

/** @brief Getter of the requestPayerName property */
bool PaymentOptions_requestPayerName(const PaymentOptions *self);

/** @brief Setter of the requestPayerName property */
void PaymentOptions_set_requestPayerName(PaymentOptions* self, bool value);

/** @brief Getter of the requestBillingAddress property */
bool PaymentOptions_requestBillingAddress(const PaymentOptions *self);

/** @brief Setter of the requestBillingAddress property */
void PaymentOptions_set_requestBillingAddress(PaymentOptions* self, bool value);

/** @brief Getter of the requestPayerEmail property */
bool PaymentOptions_requestPayerEmail(const PaymentOptions *self);

/** @brief Setter of the requestPayerEmail property */
void PaymentOptions_set_requestPayerEmail(PaymentOptions* self, bool value);

/** @brief Getter of the requestPayerPhone property */
bool PaymentOptions_requestPayerPhone(const PaymentOptions *self);

/** @brief Setter of the requestPayerPhone property */
void PaymentOptions_set_requestPayerPhone(PaymentOptions* self, bool value);

/** @brief Getter of the requestShipping property */
bool PaymentOptions_requestShipping(const PaymentOptions *self);

/** @brief Setter of the requestShipping property */
void PaymentOptions_set_requestShipping(PaymentOptions* self, bool value);

/** @brief Getter of the shippingType property */
PaymentShippingType PaymentOptions_shippingType(const PaymentOptions *self);

/** @brief Setter of the shippingType property */
void PaymentOptions_set_shippingType(PaymentOptions* self, PaymentShippingType * value);

/** @brief Constructor of the PaymentOptions dictionary type */
PaymentOptions PaymentOptions_new();

#ifdef __cplusplus
}
#endif
