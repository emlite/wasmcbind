#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct ContactAddress ContactAddress;
typedef struct PaymentCompleteDetails PaymentCompleteDetails;
typedef struct PaymentValidationErrors PaymentValidationErrors;


typedef struct {
  em_Val inner;
} PaymentCompleteDetails;


DECLARE_EMLITE_TYPE(PaymentCompleteDetails, em_Val);

jb_Object PaymentCompleteDetails_data( const PaymentCompleteDetails *self);

void PaymentCompleteDetails_set_data(PaymentCompleteDetails* self, const jb_Object* value);
typedef struct {
  em_Val inner;
} PaymentValidationErrors;


DECLARE_EMLITE_TYPE(PaymentValidationErrors, em_Val);

jb_Any PaymentValidationErrors_payer( const PaymentValidationErrors *self);

void PaymentValidationErrors_set_payer(PaymentValidationErrors* self, const jb_Any* value);

jb_Any PaymentValidationErrors_shippingAddress( const PaymentValidationErrors *self);

void PaymentValidationErrors_set_shippingAddress(PaymentValidationErrors* self, const jb_Any* value);

jb_DOMString PaymentValidationErrors_error( const PaymentValidationErrors *self);

void PaymentValidationErrors_set_error(PaymentValidationErrors* self, const jb_DOMString* value);

jb_Object PaymentValidationErrors_paymentMethod( const PaymentValidationErrors *self);

void PaymentValidationErrors_set_paymentMethod(PaymentValidationErrors* self, const jb_Object* value);
typedef struct {
  EventTarget inner;
} PaymentResponse;


DECLARE_EMLITE_TYPE(PaymentResponse, EventTarget);

jb_Object PaymentResponse_toJSON(PaymentResponse* self );

jb_DOMString PaymentResponse_requestId( const PaymentResponse *self);

jb_DOMString PaymentResponse_methodName( const PaymentResponse *self);

jb_Object PaymentResponse_details( const PaymentResponse *self);

ContactAddress PaymentResponse_shippingAddress( const PaymentResponse *self);

jb_DOMString PaymentResponse_shippingOption( const PaymentResponse *self);

jb_DOMString PaymentResponse_payerName( const PaymentResponse *self);

jb_DOMString PaymentResponse_payerEmail( const PaymentResponse *self);

jb_DOMString PaymentResponse_payerPhone( const PaymentResponse *self);

jb_Promise PaymentResponse_complete(PaymentResponse* self );

jb_Promise PaymentResponse_complete(PaymentResponse* self , const PaymentComplete* result);

jb_Promise PaymentResponse_complete(PaymentResponse* self , const PaymentComplete* result, const PaymentCompleteDetails* details);

jb_Promise PaymentResponse_retry(PaymentResponse* self );

jb_Promise PaymentResponse_retry(PaymentResponse* self , const PaymentValidationErrors* errorFields);

jb_Any PaymentResponse_onpayerdetailchange( const PaymentResponse *self);

void PaymentResponse_set_onpayerdetailchange(PaymentResponse* self, const jb_Any* value);
