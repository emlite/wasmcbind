#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentCurrencyAmount.h"
#include "PaymentDetailsModifier.h"
#include "PaymentShippingOption.h"
#include "AddressErrors.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentRequestDetailsUpdate, em_Val);

jb_String PaymentRequestDetailsUpdate_error(const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_error(PaymentRequestDetailsUpdate* self, jb_String * value);

PaymentCurrencyAmount PaymentRequestDetailsUpdate_total(const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_total(PaymentRequestDetailsUpdate* self, PaymentCurrencyAmount * value);

jb_Array PaymentRequestDetailsUpdate_modifiers(const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_modifiers(PaymentRequestDetailsUpdate* self, jb_Array * value);

jb_Array PaymentRequestDetailsUpdate_shippingOptions(const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_shippingOptions(PaymentRequestDetailsUpdate* self, jb_Array * value);

jb_Object PaymentRequestDetailsUpdate_paymentMethodErrors(const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_paymentMethodErrors(PaymentRequestDetailsUpdate* self, jb_Object * value);

AddressErrors PaymentRequestDetailsUpdate_shippingAddressErrors(const PaymentRequestDetailsUpdate *self);

void PaymentRequestDetailsUpdate_set_shippingAddressErrors(PaymentRequestDetailsUpdate* self, AddressErrors * value);

PaymentRequestDetailsUpdate PaymentRequestDetailsUpdate_new();

#ifdef __cplusplus
}
#endif
