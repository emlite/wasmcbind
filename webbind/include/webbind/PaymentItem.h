#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentCurrencyAmount.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentItem, em_Val);

jb_String PaymentItem_label(const PaymentItem *self);

void PaymentItem_set_label(PaymentItem* self, jb_String * value);

PaymentCurrencyAmount PaymentItem_amount(const PaymentItem *self);

void PaymentItem_set_amount(PaymentItem* self, PaymentCurrencyAmount * value);

bool PaymentItem_pending(const PaymentItem *self);

void PaymentItem_set_pending(PaymentItem* self, bool value);

PaymentItem PaymentItem_new();

#ifdef __cplusplus
}
#endif
