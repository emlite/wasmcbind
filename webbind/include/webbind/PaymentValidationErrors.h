#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PayerErrors.h"
#include "AddressErrors.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentValidationErrors, em_Val);

PayerErrors PaymentValidationErrors_payer(const PaymentValidationErrors *self);

void PaymentValidationErrors_set_payer(PaymentValidationErrors* self, PayerErrors * value);

AddressErrors PaymentValidationErrors_shippingAddress(const PaymentValidationErrors *self);

void PaymentValidationErrors_set_shippingAddress(PaymentValidationErrors* self, AddressErrors * value);

jb_String PaymentValidationErrors_error(const PaymentValidationErrors *self);

void PaymentValidationErrors_set_error(PaymentValidationErrors* self, jb_String * value);

jb_Object PaymentValidationErrors_paymentMethod(const PaymentValidationErrors *self);

void PaymentValidationErrors_set_paymentMethod(PaymentValidationErrors* self, jb_Object * value);

PaymentValidationErrors PaymentValidationErrors_new();

#ifdef __cplusplus
}
#endif
