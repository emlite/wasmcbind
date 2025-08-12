#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PayerErrors.h"
#include "AddressErrors.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaymentValidationErrors */
DECLARE_EMLITE_TYPE(PaymentValidationErrors, em_Val);

/** @brief Getter of the payer property */
PayerErrors PaymentValidationErrors_payer(const PaymentValidationErrors *self);

/** @brief Setter of the payer property */
void PaymentValidationErrors_set_payer(PaymentValidationErrors* self, PayerErrors * value);

/** @brief Getter of the shippingAddress property */
AddressErrors PaymentValidationErrors_shippingAddress(const PaymentValidationErrors *self);

/** @brief Setter of the shippingAddress property */
void PaymentValidationErrors_set_shippingAddress(PaymentValidationErrors* self, AddressErrors * value);

/** @brief Getter of the error property */
jb_String PaymentValidationErrors_error(const PaymentValidationErrors *self);

/** @brief Setter of the error property */
void PaymentValidationErrors_set_error(PaymentValidationErrors* self, jb_String * value);

/** @brief Getter of the paymentMethod property */
jb_Object PaymentValidationErrors_paymentMethod(const PaymentValidationErrors *self);

/** @brief Setter of the paymentMethod property */
void PaymentValidationErrors_set_paymentMethod(PaymentValidationErrors* self, jb_Object * value);

/** @brief Constructor of the PaymentValidationErrors dictionary type */
PaymentValidationErrors PaymentValidationErrors_new();

#ifdef __cplusplus
}
#endif
