#include <webbind/PaymentRequest.h>

#include <webbind/PaymentMethodData.h>
#include <webbind/PaymentDetailsInit.h>
#include <webbind/PaymentOptions.h>
#include <webbind/PaymentResponse.h>
#include <webbind/PaymentDetailsUpdate.h>
#include <webbind/ContactAddress.h>

DEFINE_EMLITE_TYPE(PaymentRequest, EventTarget);


PaymentRequest PaymentRequest_new0(jb_Array * methodData, PaymentDetailsInit * details) {
        em_Val vv = em_Val_new(em_Val_global("PaymentRequest") , em_Val_from(methodData), em_Val_from(details));
        return PaymentRequest_from_val(&vv);
      }


PaymentRequest PaymentRequest_new1(jb_Array * methodData, PaymentDetailsInit * details, PaymentOptions * options) {
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


jb_String PaymentRequest_id(const PaymentRequest *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("id")));
}


ContactAddress PaymentRequest_shippingAddress(const PaymentRequest *self) {
    return em_Val_as(ContactAddress, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("shippingAddress")));
}


jb_String PaymentRequest_shippingOption(const PaymentRequest *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("shippingOption")));
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

