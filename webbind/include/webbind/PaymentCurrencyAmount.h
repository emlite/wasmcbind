#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentCurrencyAmount, em_Val);

jb_String PaymentCurrencyAmount_currency(const PaymentCurrencyAmount *self);

void PaymentCurrencyAmount_set_currency(PaymentCurrencyAmount* self, jb_String * value);

jb_String PaymentCurrencyAmount_value(const PaymentCurrencyAmount *self);

void PaymentCurrencyAmount_set_value(PaymentCurrencyAmount* self, jb_String * value);

PaymentCurrencyAmount PaymentCurrencyAmount_new();

#ifdef __cplusplus
}
#endif
