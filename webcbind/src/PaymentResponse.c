#include <webcbind/PaymentResponse.h>

#include <webcbind/ContactAddress.h>
#include <webcbind/PaymentCompleteDetails.h>
#include <webcbind/PaymentValidationErrors.h>

DEFINE_EMLITE_TYPE(PaymentResponse, EventTarget);


jb_Object PaymentResponse_toJSON(PaymentResponse* self ) {
    return em_Val_as(jb_Object, em_Val_call(EventTarget_as_val(self->inner), "toJSON"));
}


jb_String PaymentResponse_requestId(const PaymentResponse *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("requestId")));
}


jb_String PaymentResponse_methodName(const PaymentResponse *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("methodName")));
}


jb_Object PaymentResponse_details(const PaymentResponse *self) {
    return em_Val_as(jb_Object, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("details")));
}


ContactAddress PaymentResponse_shippingAddress(const PaymentResponse *self) {
    return em_Val_as(ContactAddress, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("shippingAddress")));
}


jb_String PaymentResponse_shippingOption(const PaymentResponse *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("shippingOption")));
}


jb_String PaymentResponse_payerName(const PaymentResponse *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("payerName")));
}


jb_String PaymentResponse_payerEmail(const PaymentResponse *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("payerEmail")));
}


jb_String PaymentResponse_payerPhone(const PaymentResponse *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("payerPhone")));
}


jb_Promise PaymentResponse_complete0(PaymentResponse* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "complete"));
}


jb_Promise PaymentResponse_complete1(PaymentResponse* self , PaymentComplete * result) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "complete", em_Val_from(result)));
}


jb_Promise PaymentResponse_complete2(PaymentResponse* self , PaymentComplete * result, PaymentCompleteDetails * details) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "complete", em_Val_from(result), em_Val_from(details)));
}


jb_Promise PaymentResponse_retry0(PaymentResponse* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "retry"));
}


jb_Promise PaymentResponse_retry1(PaymentResponse* self , PaymentValidationErrors * errorFields) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "retry", em_Val_from(errorFields)));
}


jb_Any PaymentResponse_onpayerdetailchange(const PaymentResponse *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onpayerdetailchange")));
}


void PaymentResponse_set_onpayerdetailchange(PaymentResponse* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onpayerdetailchange"), em_Val_from(value));
}

