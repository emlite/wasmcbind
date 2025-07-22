#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "PaymentRequest.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(PaymentRequestUpdateEvent, Event);

PaymentRequestUpdateEvent PaymentRequestUpdateEvent_new0(jb_DOMString * type);

PaymentRequestUpdateEvent PaymentRequestUpdateEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_Undefined PaymentRequestUpdateEvent_updateWith(PaymentRequestUpdateEvent* self , jb_Promise * detailsPromise);
