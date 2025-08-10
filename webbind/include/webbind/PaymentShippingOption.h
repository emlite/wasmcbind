#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentCurrencyAmount.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentShippingOption, em_Val);

jb_String PaymentShippingOption_id(const PaymentShippingOption *self);

void PaymentShippingOption_set_id(PaymentShippingOption* self, jb_String * value);

jb_String PaymentShippingOption_label(const PaymentShippingOption *self);

void PaymentShippingOption_set_label(PaymentShippingOption* self, jb_String * value);

PaymentCurrencyAmount PaymentShippingOption_amount(const PaymentShippingOption *self);

void PaymentShippingOption_set_amount(PaymentShippingOption* self, PaymentCurrencyAmount * value);

bool PaymentShippingOption_selected(const PaymentShippingOption *self);

void PaymentShippingOption_set_selected(PaymentShippingOption* self, bool value);

PaymentShippingOption PaymentShippingOption_new();

#ifdef __cplusplus
}
#endif
