#include <webbind/PaymentRequest.h>
#include <webbind/PaymentResponse.h>
#include <webbind/ContactAddress.h>
#include <webbind/PaymentRequestEvent.h>


DEFINE_EMLITE_TYPE(PaymentDetailsUpdate, em_Val);


jb_DOMString PaymentDetailsUpdate_error(const PaymentDetailsUpdate *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "error"));
}


void PaymentDetailsUpdate_set_error(PaymentDetailsUpdate* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "error", value);
}


jb_Any PaymentDetailsUpdate_total(const PaymentDetailsUpdate *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "total"));
}


void PaymentDetailsUpdate_set_total(PaymentDetailsUpdate* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "total", value);
}


jb_Any PaymentDetailsUpdate_shippingAddressErrors(const PaymentDetailsUpdate *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "shippingAddressErrors"));
}


void PaymentDetailsUpdate_set_shippingAddressErrors(PaymentDetailsUpdate* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "shippingAddressErrors", value);
}


jb_Any PaymentDetailsUpdate_payerErrors(const PaymentDetailsUpdate *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "payerErrors"));
}


void PaymentDetailsUpdate_set_payerErrors(PaymentDetailsUpdate* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "payerErrors", value);
}


jb_Object PaymentDetailsUpdate_paymentMethodErrors(const PaymentDetailsUpdate *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), "paymentMethodErrors"));
}


void PaymentDetailsUpdate_set_paymentMethodErrors(PaymentDetailsUpdate* self, const jb_Object* value) {
    em_Val_set(em_Val_as_val(self->inner), "paymentMethodErrors", value);
}

DEFINE_EMLITE_TYPE(PaymentRequest, EventTarget);


PaymentRequest PaymentRequest_new(const jb_Sequence* methodData, const jb_Any* details) : EventTarget(em_Val_global("PaymentRequest").new_(em_Val_from(methodData), em_Val_from(details))) {
        return PaymentRequest(em_Val_new(em_Val_global("PaymentRequest", em_Val_from(methodData), em_Val_from(details)));
      }


PaymentRequest PaymentRequest_new(const jb_Sequence* methodData, const jb_Any* details, const jb_Any* options) : EventTarget(em_Val_global("PaymentRequest").new_(em_Val_from(methodData), em_Val_from(details), em_Val_from(options))) {
        return PaymentRequest(em_Val_new(em_Val_global("PaymentRequest", em_Val_from(methodData), em_Val_from(details), em_Val_from(options)));
      }


jb_Promise PaymentRequest_show(PaymentRequest* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "show"));
}


jb_Promise PaymentRequest_show(PaymentRequest* self , const jb_Promise* detailsPromise) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "show", em_Val_from(detailsPromise)));
}


jb_Promise PaymentRequest_abort(PaymentRequest* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "abort"));
}


jb_Promise PaymentRequest_canMakePayment(PaymentRequest* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "canMakePayment"));
}


jb_DOMString PaymentRequest_id(const PaymentRequest *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "id"));
}


ContactAddress PaymentRequest_shippingAddress(const PaymentRequest *self) {
    return em_Val_as(ContactAddress, em_Val_get(EventTarget_as_val(self->inner), "shippingAddress"));
}


jb_DOMString PaymentRequest_shippingOption(const PaymentRequest *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "shippingOption"));
}


PaymentShippingType PaymentRequest_shippingType(const PaymentRequest *self) {
    return em_Val_as(PaymentShippingType, em_Val_get(EventTarget_as_val(self->inner), "shippingType"));
}


jb_Any PaymentRequest_onshippingaddresschange(const PaymentRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onshippingaddresschange"));
}


void PaymentRequest_set_onshippingaddresschange(PaymentRequest* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onshippingaddresschange", value);
}


jb_Any PaymentRequest_onshippingoptionchange(const PaymentRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onshippingoptionchange"));
}


void PaymentRequest_set_onshippingoptionchange(PaymentRequest* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onshippingoptionchange", value);
}


jb_Any PaymentRequest_onpaymentmethodchange(const PaymentRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onpaymentmethodchange"));
}


void PaymentRequest_set_onpaymentmethodchange(PaymentRequest* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onpaymentmethodchange", value);
}


jb_Promise PaymentRequest_securePaymentConfirmationAvailability(PaymentRequest* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("paymentrequest"), "securePaymentConfirmationAvailability"));
}

