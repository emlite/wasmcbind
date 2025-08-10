#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PaymentRequestUpdateEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PaymentMethodChangeEventInit PaymentMethodChangeEventInit;

DECLARE_EMLITE_TYPE(PaymentMethodChangeEvent, PaymentRequestUpdateEvent);

PaymentMethodChangeEvent PaymentMethodChangeEvent_new0(jb_String * type);

PaymentMethodChangeEvent PaymentMethodChangeEvent_new1(jb_String * type, PaymentMethodChangeEventInit * eventInitDict);

jb_String PaymentMethodChangeEvent_methodName(const PaymentMethodChangeEvent *self);

jb_Object PaymentMethodChangeEvent_methodDetails(const PaymentMethodChangeEvent *self);

#ifdef __cplusplus
}
#endif
