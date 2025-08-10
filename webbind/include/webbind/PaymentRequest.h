#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PaymentMethodData PaymentMethodData;
typedef struct PaymentDetailsInit PaymentDetailsInit;
typedef struct PaymentOptions PaymentOptions;
typedef struct PaymentResponse PaymentResponse;
typedef struct PaymentDetailsUpdate PaymentDetailsUpdate;
typedef struct ContactAddress ContactAddress;

DECLARE_EMLITE_TYPE(PaymentRequest, EventTarget);

PaymentRequest PaymentRequest_new0(jb_Array * methodData, PaymentDetailsInit * details);

PaymentRequest PaymentRequest_new1(jb_Array * methodData, PaymentDetailsInit * details, PaymentOptions * options);

jb_Promise PaymentRequest_show0(PaymentRequest* self );

jb_Promise PaymentRequest_show1(PaymentRequest* self , jb_Promise * detailsPromise);

jb_Promise PaymentRequest_abort(PaymentRequest* self );

jb_Promise PaymentRequest_canMakePayment(PaymentRequest* self );

jb_String PaymentRequest_id(const PaymentRequest *self);

ContactAddress PaymentRequest_shippingAddress(const PaymentRequest *self);

jb_String PaymentRequest_shippingOption(const PaymentRequest *self);

PaymentShippingType PaymentRequest_shippingType(const PaymentRequest *self);

jb_Any PaymentRequest_onshippingaddresschange(const PaymentRequest *self);

void PaymentRequest_set_onshippingaddresschange(PaymentRequest* self, jb_Any * value);

jb_Any PaymentRequest_onshippingoptionchange(const PaymentRequest *self);

void PaymentRequest_set_onshippingoptionchange(PaymentRequest* self, jb_Any * value);

jb_Any PaymentRequest_onpaymentmethodchange(const PaymentRequest *self);

void PaymentRequest_set_onpaymentmethodchange(PaymentRequest* self, jb_Any * value);

jb_Promise PaymentRequest_securePaymentConfirmationAvailability(PaymentRequest* self );

#ifdef __cplusplus
}
#endif
