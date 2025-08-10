#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentRequestUpdateEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaymentMethodChangeEventInit, PaymentRequestUpdateEventInit);

jb_String PaymentMethodChangeEventInit_methodName(const PaymentMethodChangeEventInit *self);

void PaymentMethodChangeEventInit_set_methodName(PaymentMethodChangeEventInit* self, jb_String * value);

jb_Object PaymentMethodChangeEventInit_methodDetails(const PaymentMethodChangeEventInit *self);

void PaymentMethodChangeEventInit_set_methodDetails(PaymentMethodChangeEventInit* self, jb_Object * value);

PaymentMethodChangeEventInit PaymentMethodChangeEventInit_new();

#ifdef __cplusplus
}
#endif
