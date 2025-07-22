#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"


typedef struct {
  ExtendableEvent inner;
} CanMakePaymentEvent;


DECLARE_EMLITE_TYPE(CanMakePaymentEvent, ExtendableEvent);

CanMakePaymentEvent CanMakePaymentEvent_new(const jb_DOMString* type);

jb_Undefined CanMakePaymentEvent_respondWith(CanMakePaymentEvent* self , const jb_Promise* canMakePaymentResponse);
