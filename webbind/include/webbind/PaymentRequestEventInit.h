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

DECLARE_EMLITE_TYPE(PaymentRequestEventInit, ExtendableEventInit);

jb_String PaymentRequestEventInit_topOrigin(const PaymentRequestEventInit *self);

void PaymentRequestEventInit_set_topOrigin(PaymentRequestEventInit* self, jb_String * value);

jb_String PaymentRequestEventInit_paymentRequestOrigin(const PaymentRequestEventInit *self);

void PaymentRequestEventInit_set_paymentRequestOrigin(PaymentRequestEventInit* self, jb_String * value);

jb_String PaymentRequestEventInit_paymentRequestId(const PaymentRequestEventInit *self);

void PaymentRequestEventInit_set_paymentRequestId(PaymentRequestEventInit* self, jb_String * value);

jb_Array PaymentRequestEventInit_methodData(const PaymentRequestEventInit *self);

void PaymentRequestEventInit_set_methodData(PaymentRequestEventInit* self, jb_Array * value);

PaymentCurrencyAmount PaymentRequestEventInit_total(const PaymentRequestEventInit *self);

void PaymentRequestEventInit_set_total(PaymentRequestEventInit* self, PaymentCurrencyAmount * value);

jb_Array PaymentRequestEventInit_modifiers(const PaymentRequestEventInit *self);

void PaymentRequestEventInit_set_modifiers(PaymentRequestEventInit* self, jb_Array * value);

PaymentOptions PaymentRequestEventInit_paymentOptions(const PaymentRequestEventInit *self);

void PaymentRequestEventInit_set_paymentOptions(PaymentRequestEventInit* self, PaymentOptions * value);

jb_Array PaymentRequestEventInit_shippingOptions(const PaymentRequestEventInit *self);

void PaymentRequestEventInit_set_shippingOptions(PaymentRequestEventInit* self, jb_Array * value);

PaymentRequestEventInit PaymentRequestEventInit_new();

#ifdef __cplusplus
}
#endif
