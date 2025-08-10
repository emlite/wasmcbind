#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentOptions, em_Val);

bool PaymentOptions_requestPayerName(const PaymentOptions *self);

void PaymentOptions_set_requestPayerName(PaymentOptions* self, bool value);

bool PaymentOptions_requestBillingAddress(const PaymentOptions *self);

void PaymentOptions_set_requestBillingAddress(PaymentOptions* self, bool value);

bool PaymentOptions_requestPayerEmail(const PaymentOptions *self);

void PaymentOptions_set_requestPayerEmail(PaymentOptions* self, bool value);

bool PaymentOptions_requestPayerPhone(const PaymentOptions *self);

void PaymentOptions_set_requestPayerPhone(PaymentOptions* self, bool value);

bool PaymentOptions_requestShipping(const PaymentOptions *self);

void PaymentOptions_set_requestShipping(PaymentOptions* self, bool value);

PaymentShippingType PaymentOptions_shippingType(const PaymentOptions *self);

void PaymentOptions_set_shippingType(PaymentOptions* self, PaymentShippingType * value);

PaymentOptions PaymentOptions_new();

#ifdef __cplusplus
}
#endif
