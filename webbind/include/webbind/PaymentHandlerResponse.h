#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AddressInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentHandlerResponse, em_Val);

jb_String PaymentHandlerResponse_methodName(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_methodName(PaymentHandlerResponse* self, jb_String * value);

jb_Object PaymentHandlerResponse_details(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_details(PaymentHandlerResponse* self, jb_Object * value);

jb_String PaymentHandlerResponse_payerName(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_payerName(PaymentHandlerResponse* self, jb_String * value);

jb_String PaymentHandlerResponse_payerEmail(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_payerEmail(PaymentHandlerResponse* self, jb_String * value);

jb_String PaymentHandlerResponse_payerPhone(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_payerPhone(PaymentHandlerResponse* self, jb_String * value);

AddressInit PaymentHandlerResponse_shippingAddress(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_shippingAddress(PaymentHandlerResponse* self, AddressInit * value);

jb_String PaymentHandlerResponse_shippingOption(const PaymentHandlerResponse *self);

void PaymentHandlerResponse_set_shippingOption(PaymentHandlerResponse* self, jb_String * value);

PaymentHandlerResponse PaymentHandlerResponse_new();

#ifdef __cplusplus
}
#endif
