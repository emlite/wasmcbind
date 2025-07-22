#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "PaymentRequest.h"
#include "enums.h"


typedef struct {
  Event inner;
} PaymentRequestUpdateEvent;


DECLARE_EMLITE_TYPE(PaymentRequestUpdateEvent, Event);

PaymentRequestUpdateEvent PaymentRequestUpdateEvent_new(const jb_DOMString* type);

PaymentRequestUpdateEvent PaymentRequestUpdateEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_Undefined PaymentRequestUpdateEvent_updateWith(PaymentRequestUpdateEvent* self , const jb_Promise* detailsPromise);
