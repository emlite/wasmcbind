#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"
#include "PaymentMethodData.h"
#include "PaymentCurrencyAmount.h"
#include "PaymentDetailsModifier.h"
#include "PaymentOptions.h"
#include "PaymentShippingOption.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentRequestEventInit */
DECLARE_EMLITE_TYPE(PaymentRequestEventInit, ExtendableEventInit);

/** @brief Getter of the topOrigin property */
jb_String PaymentRequestEventInit_topOrigin(const PaymentRequestEventInit *self);

/** @brief Setter of the topOrigin property */
void PaymentRequestEventInit_set_topOrigin(PaymentRequestEventInit* self, jb_String * value);

/** @brief Getter of the paymentRequestOrigin property */
jb_String PaymentRequestEventInit_paymentRequestOrigin(const PaymentRequestEventInit *self);

/** @brief Setter of the paymentRequestOrigin property */
void PaymentRequestEventInit_set_paymentRequestOrigin(PaymentRequestEventInit* self, jb_String * value);

/** @brief Getter of the paymentRequestId property */
jb_String PaymentRequestEventInit_paymentRequestId(const PaymentRequestEventInit *self);

/** @brief Setter of the paymentRequestId property */
void PaymentRequestEventInit_set_paymentRequestId(PaymentRequestEventInit* self, jb_String * value);

/** @brief Getter of the methodData property */
jb_Array PaymentRequestEventInit_methodData(const PaymentRequestEventInit *self);

/** @brief Setter of the methodData property */
void PaymentRequestEventInit_set_methodData(PaymentRequestEventInit* self, jb_Array * value);

/** @brief Getter of the total property */
PaymentCurrencyAmount PaymentRequestEventInit_total(const PaymentRequestEventInit *self);

/** @brief Setter of the total property */
void PaymentRequestEventInit_set_total(PaymentRequestEventInit* self, PaymentCurrencyAmount * value);

/** @brief Getter of the modifiers property */
jb_Array PaymentRequestEventInit_modifiers(const PaymentRequestEventInit *self);

/** @brief Setter of the modifiers property */
void PaymentRequestEventInit_set_modifiers(PaymentRequestEventInit* self, jb_Array * value);

/** @brief Getter of the paymentOptions property */
PaymentOptions PaymentRequestEventInit_paymentOptions(const PaymentRequestEventInit *self);

/** @brief Setter of the paymentOptions property */
void PaymentRequestEventInit_set_paymentOptions(PaymentRequestEventInit* self, PaymentOptions * value);

/** @brief Getter of the shippingOptions property */
jb_Array PaymentRequestEventInit_shippingOptions(const PaymentRequestEventInit *self);

/** @brief Setter of the shippingOptions property */
void PaymentRequestEventInit_set_shippingOptions(PaymentRequestEventInit* self, jb_Array * value);

/** @brief Constructor of the PaymentRequestEventInit dictionary type */
PaymentRequestEventInit PaymentRequestEventInit_new();

#ifdef __cplusplus
}
#endif
