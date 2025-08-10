#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PaymentRequestEventInit PaymentRequestEventInit;
typedef struct PaymentMethodData PaymentMethodData;
typedef struct PaymentDetailsModifier PaymentDetailsModifier;
typedef struct PaymentShippingOption PaymentShippingOption;
typedef struct WindowClient WindowClient;
typedef struct PaymentRequestDetailsUpdate PaymentRequestDetailsUpdate;
typedef struct AddressInit AddressInit;
typedef struct PaymentHandlerResponse PaymentHandlerResponse;

DECLARE_EMLITE_TYPE(PaymentRequestEvent, ExtendableEvent);

PaymentRequestEvent PaymentRequestEvent_new0(jb_String * type);

PaymentRequestEvent PaymentRequestEvent_new1(jb_String * type, PaymentRequestEventInit * eventInitDict);

jb_String PaymentRequestEvent_topOrigin(const PaymentRequestEvent *self);

jb_String PaymentRequestEvent_paymentRequestOrigin(const PaymentRequestEvent *self);

jb_String PaymentRequestEvent_paymentRequestId(const PaymentRequestEvent *self);

jb_Array PaymentRequestEvent_methodData(const PaymentRequestEvent *self);

jb_Object PaymentRequestEvent_total(const PaymentRequestEvent *self);

jb_Array PaymentRequestEvent_modifiers(const PaymentRequestEvent *self);

jb_Object PaymentRequestEvent_paymentOptions(const PaymentRequestEvent *self);

jb_Array PaymentRequestEvent_shippingOptions(const PaymentRequestEvent *self);

jb_Promise PaymentRequestEvent_openWindow(PaymentRequestEvent* self , jb_String * url);

jb_Promise PaymentRequestEvent_changePaymentMethod0(PaymentRequestEvent* self , jb_String * methodName);

jb_Promise PaymentRequestEvent_changePaymentMethod1(PaymentRequestEvent* self , jb_String * methodName, jb_Object * methodDetails);

jb_Promise PaymentRequestEvent_changeShippingAddress0(PaymentRequestEvent* self );

jb_Promise PaymentRequestEvent_changeShippingAddress1(PaymentRequestEvent* self , AddressInit * shippingAddress);

jb_Promise PaymentRequestEvent_changeShippingOption(PaymentRequestEvent* self , jb_String * shippingOption);

jb_Undefined PaymentRequestEvent_respondWith(PaymentRequestEvent* self , jb_Promise * handlerResponsePromise);

#ifdef __cplusplus
}
#endif
