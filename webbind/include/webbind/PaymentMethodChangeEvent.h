#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PaymentRequestUpdateEvent.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(PaymentMethodChangeEvent, PaymentRequestUpdateEvent);

PaymentMethodChangeEvent PaymentMethodChangeEvent_new0(jb_DOMString * type);

PaymentMethodChangeEvent PaymentMethodChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_DOMString PaymentMethodChangeEvent_methodName(const PaymentMethodChangeEvent *self);

jb_Object PaymentMethodChangeEvent_methodDetails(const PaymentMethodChangeEvent *self);
