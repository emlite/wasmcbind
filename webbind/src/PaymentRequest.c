#include <webbind/PaymentRequest.h>
#include <webbind/PaymentResponse.h>
#include <webbind/ContactAddress.h>
#include <webbind/PaymentRequestEvent.h>


DEFINE_EMLITE_TYPE(PaymentDetailsUpdate, em_Val);


jb_DOMString PaymentDetailsUpdate_error(const PaymentDetailsUpdate *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("error")));
}


void PaymentDetailsUpdate_set_error(PaymentDetailsUpdate* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


jb_Any PaymentDetailsUpdate_total(const PaymentDetailsUpdate *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("total")));
}


void PaymentDetailsUpdate_set_total(PaymentDetailsUpdate* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("total"), em_Val_from(value));
}


jb_Any PaymentDetailsUpdate_shippingAddressErrors(const PaymentDetailsUpdate *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shippingAddressErrors")));
}


void PaymentDetailsUpdate_set_shippingAddressErrors(PaymentDetailsUpdate* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shippingAddressErrors"), em_Val_from(value));
}


jb_Any PaymentDetailsUpdate_payerErrors(const PaymentDetailsUpdate *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payerErrors")));
}


void PaymentDetailsUpdate_set_payerErrors(PaymentDetailsUpdate* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payerErrors"), em_Val_from(value));
}


jb_Object PaymentDetailsUpdate_paymentMethodErrors(const PaymentDetailsUpdate *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("paymentMethodErrors")));
}


void PaymentDetailsUpdate_set_paymentMethodErrors(PaymentDetailsUpdate* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("paymentMethodErrors"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PaymentRequest, EventTarget);


PaymentRequest PaymentRequest_new0(jb_Sequence * methodData, jb_Any * details) {
        em_Val vv = em_Val_new(em_Val_global("PaymentRequest") , em_Val_from(methodData), em_Val_from(details));
        return PaymentRequest_from_val(&vv);
      }


PaymentRequest PaymentRequest_new1(jb_Sequence * methodData, jb_Any * details, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("PaymentRequest") , em_Val_from(methodData), em_Val_from(details), em_Val_from(options));
        return PaymentRequest_from_val(&vv);
      }


jb_Promise PaymentRequest_show0(PaymentRequest* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "show"));
}


jb_Promise PaymentRequest_show1(PaymentRequest* self , jb_Promise * detailsPromise) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "show", em_Val_from(detailsPromise)));
}


jb_Promise PaymentRequest_abort(PaymentRequest* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "abort"));
}


jb_Promise PaymentRequest_canMakePayment(PaymentRequest* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "canMakePayment"));
}


jb_DOMString PaymentRequest_id(const PaymentRequest *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("id")));
}


ContactAddress PaymentRequest_shippingAddress(const PaymentRequest *self) {
    return em_Val_as(ContactAddress, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("shippingAddress")));
}


jb_DOMString PaymentRequest_shippingOption(const PaymentRequest *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("shippingOption")));
}


PaymentShippingType PaymentRequest_shippingType(const PaymentRequest *self) {
    return em_Val_as(PaymentShippingType, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("shippingType")));
}


jb_Any PaymentRequest_onshippingaddresschange(const PaymentRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onshippingaddresschange")));
}


void PaymentRequest_set_onshippingaddresschange(PaymentRequest* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onshippingaddresschange"), em_Val_from(value));
}


jb_Any PaymentRequest_onshippingoptionchange(const PaymentRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onshippingoptionchange")));
}


void PaymentRequest_set_onshippingoptionchange(PaymentRequest* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onshippingoptionchange"), em_Val_from(value));
}


jb_Any PaymentRequest_onpaymentmethodchange(const PaymentRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onpaymentmethodchange")));
}


void PaymentRequest_set_onpaymentmethodchange(PaymentRequest* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onpaymentmethodchange"), em_Val_from(value));
}


jb_Promise PaymentRequest_securePaymentConfirmationAvailability(PaymentRequest* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("paymentrequest"), "securePaymentConfirmationAvailability"));
}

