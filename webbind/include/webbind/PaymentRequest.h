#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct PaymentResponse PaymentResponse;
typedef struct PaymentDetailsUpdate PaymentDetailsUpdate;
typedef struct ContactAddress ContactAddress;
typedef struct PaymentMethodData PaymentMethodData;


typedef struct {
  em_Val inner;
} PaymentDetailsUpdate;


DECLARE_EMLITE_TYPE(PaymentDetailsUpdate, em_Val);

jb_DOMString PaymentDetailsUpdate_error( const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_error(PaymentDetailsUpdate* self, const jb_DOMString* value);

jb_Any PaymentDetailsUpdate_total( const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_total(PaymentDetailsUpdate* self, const jb_Any* value);

jb_Any PaymentDetailsUpdate_shippingAddressErrors( const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_shippingAddressErrors(PaymentDetailsUpdate* self, const jb_Any* value);

jb_Any PaymentDetailsUpdate_payerErrors( const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_payerErrors(PaymentDetailsUpdate* self, const jb_Any* value);

jb_Object PaymentDetailsUpdate_paymentMethodErrors( const PaymentDetailsUpdate *self);

void PaymentDetailsUpdate_set_paymentMethodErrors(PaymentDetailsUpdate* self, const jb_Object* value);
typedef struct {
  EventTarget inner;
} PaymentRequest;


DECLARE_EMLITE_TYPE(PaymentRequest, EventTarget);

PaymentRequest PaymentRequest_new(const jb_Sequence* methodData, const jb_Any* details);

PaymentRequest PaymentRequest_new(const jb_Sequence* methodData, const jb_Any* details, const jb_Any* options);

jb_Promise PaymentRequest_show(PaymentRequest* self );

jb_Promise PaymentRequest_show(PaymentRequest* self , const jb_Promise* detailsPromise);

jb_Promise PaymentRequest_abort(PaymentRequest* self );

jb_Promise PaymentRequest_canMakePayment(PaymentRequest* self );

jb_DOMString PaymentRequest_id( const PaymentRequest *self);

ContactAddress PaymentRequest_shippingAddress( const PaymentRequest *self);

jb_DOMString PaymentRequest_shippingOption( const PaymentRequest *self);

PaymentShippingType PaymentRequest_shippingType( const PaymentRequest *self);

jb_Any PaymentRequest_onshippingaddresschange( const PaymentRequest *self);

void PaymentRequest_set_onshippingaddresschange(PaymentRequest* self, const jb_Any* value);

jb_Any PaymentRequest_onshippingoptionchange( const PaymentRequest *self);

void PaymentRequest_set_onshippingoptionchange(PaymentRequest* self, const jb_Any* value);

jb_Any PaymentRequest_onpaymentmethodchange( const PaymentRequest *self);

void PaymentRequest_set_onpaymentmethodchange(PaymentRequest* self, const jb_Any* value);

jb_Promise PaymentRequest_securePaymentConfirmationAvailability(PaymentRequest* self );
