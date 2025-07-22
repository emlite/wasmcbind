#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PaymentRequestUpdateEvent.h"
#include "enums.h"


typedef struct {
  PaymentRequestUpdateEvent inner;
} PaymentMethodChangeEvent;


DECLARE_EMLITE_TYPE(PaymentMethodChangeEvent, PaymentRequestUpdateEvent);

PaymentMethodChangeEvent PaymentMethodChangeEvent_new(const jb_DOMString* type);

PaymentMethodChangeEvent PaymentMethodChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_DOMString PaymentMethodChangeEvent_methodName( const PaymentMethodChangeEvent *self);

jb_Object PaymentMethodChangeEvent_methodDetails( const PaymentMethodChangeEvent *self);
