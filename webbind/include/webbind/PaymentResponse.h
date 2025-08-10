#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContactAddress ContactAddress;
typedef struct PaymentCompleteDetails PaymentCompleteDetails;
typedef struct PaymentValidationErrors PaymentValidationErrors;

DECLARE_EMLITE_TYPE(PaymentResponse, EventTarget);

jb_Object PaymentResponse_toJSON(PaymentResponse* self );

jb_String PaymentResponse_requestId(const PaymentResponse *self);

jb_String PaymentResponse_methodName(const PaymentResponse *self);

jb_Object PaymentResponse_details(const PaymentResponse *self);

ContactAddress PaymentResponse_shippingAddress(const PaymentResponse *self);

jb_String PaymentResponse_shippingOption(const PaymentResponse *self);

jb_String PaymentResponse_payerName(const PaymentResponse *self);

jb_String PaymentResponse_payerEmail(const PaymentResponse *self);

jb_String PaymentResponse_payerPhone(const PaymentResponse *self);

jb_Promise PaymentResponse_complete0(PaymentResponse* self );

jb_Promise PaymentResponse_complete1(PaymentResponse* self , PaymentComplete * result);

jb_Promise PaymentResponse_complete2(PaymentResponse* self , PaymentComplete * result, PaymentCompleteDetails * details);

jb_Promise PaymentResponse_retry0(PaymentResponse* self );

jb_Promise PaymentResponse_retry1(PaymentResponse* self , PaymentValidationErrors * errorFields);

jb_Any PaymentResponse_onpayerdetailchange(const PaymentResponse *self);

void PaymentResponse_set_onpayerdetailchange(PaymentResponse* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
