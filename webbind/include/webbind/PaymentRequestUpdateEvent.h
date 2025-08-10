#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PaymentRequestUpdateEventInit PaymentRequestUpdateEventInit;
typedef struct PaymentDetailsUpdate PaymentDetailsUpdate;

DECLARE_EMLITE_TYPE(PaymentRequestUpdateEvent, Event);

PaymentRequestUpdateEvent PaymentRequestUpdateEvent_new0(jb_String * type);

PaymentRequestUpdateEvent PaymentRequestUpdateEvent_new1(jb_String * type, PaymentRequestUpdateEventInit * eventInitDict);

jb_Undefined PaymentRequestUpdateEvent_updateWith(PaymentRequestUpdateEvent* self , jb_Promise * detailsPromise);

#ifdef __cplusplus
}
#endif
