#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PaymentCurrencyAmount.h"
#include "PaymentDetailsModifier.h"
#include "PaymentShippingOption.h"
#include "AddressErrors.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentRequestDetailsUpdate */
DECLARE_EMLITE_TYPE(PaymentRequestDetailsUpdate, em_Val);

/** @brief Getter of the error property */
jb_String PaymentRequestDetailsUpdate_error(const PaymentRequestDetailsUpdate *self);

/** @brief Setter of the error property */
void PaymentRequestDetailsUpdate_set_error(PaymentRequestDetailsUpdate* self, jb_String * value);

/** @brief Getter of the total property */
PaymentCurrencyAmount PaymentRequestDetailsUpdate_total(const PaymentRequestDetailsUpdate *self);

/** @brief Setter of the total property */
void PaymentRequestDetailsUpdate_set_total(PaymentRequestDetailsUpdate* self, PaymentCurrencyAmount * value);

/** @brief Getter of the modifiers property */
jb_Array PaymentRequestDetailsUpdate_modifiers(const PaymentRequestDetailsUpdate *self);

/** @brief Setter of the modifiers property */
void PaymentRequestDetailsUpdate_set_modifiers(PaymentRequestDetailsUpdate* self, jb_Array * value);

/** @brief Getter of the shippingOptions property */
jb_Array PaymentRequestDetailsUpdate_shippingOptions(const PaymentRequestDetailsUpdate *self);

/** @brief Setter of the shippingOptions property */
void PaymentRequestDetailsUpdate_set_shippingOptions(PaymentRequestDetailsUpdate* self, jb_Array * value);

/** @brief Getter of the paymentMethodErrors property */
jb_Object PaymentRequestDetailsUpdate_paymentMethodErrors(const PaymentRequestDetailsUpdate *self);

/** @brief Setter of the paymentMethodErrors property */
void PaymentRequestDetailsUpdate_set_paymentMethodErrors(PaymentRequestDetailsUpdate* self, jb_Object * value);

/** @brief Getter of the shippingAddressErrors property */
AddressErrors PaymentRequestDetailsUpdate_shippingAddressErrors(const PaymentRequestDetailsUpdate *self);

/** @brief Setter of the shippingAddressErrors property */
void PaymentRequestDetailsUpdate_set_shippingAddressErrors(PaymentRequestDetailsUpdate* self, AddressErrors * value);

/** @brief Constructor of the PaymentRequestDetailsUpdate dictionary type */
PaymentRequestDetailsUpdate PaymentRequestDetailsUpdate_new();

#ifdef __cplusplus
}
#endif
