#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentDetailsBase.h"
#include "PaymentItem.h"
#include "AddressErrors.h"
#include "PayerErrors.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentDetailsUpdate, PaymentDetailsBase);

jb_String PaymentDetailsUpdate_error(const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_error(PaymentDetailsUpdate* self, jb_String * value);

PaymentItem PaymentDetailsUpdate_total(const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_total(PaymentDetailsUpdate* self, PaymentItem * value);

AddressErrors PaymentDetailsUpdate_shippingAddressErrors(const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_shippingAddressErrors(PaymentDetailsUpdate* self, AddressErrors * value);

PayerErrors PaymentDetailsUpdate_payerErrors(const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_payerErrors(PaymentDetailsUpdate* self, PayerErrors * value);

jb_Object PaymentDetailsUpdate_paymentMethodErrors(const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_paymentMethodErrors(PaymentDetailsUpdate* self, jb_Object * value);

PaymentDetailsUpdate PaymentDetailsUpdate_new();

#ifdef __cplusplus
}
#endif
