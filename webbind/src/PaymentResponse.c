#include <webbind/PaymentResponse.h>
#include <webbind/ContactAddress.h>


DEFINE_EMLITE_TYPE(PaymentCompleteDetails, em_Val);


jb_Object PaymentCompleteDetails_data(const PaymentCompleteDetails *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), "data"));
}


void PaymentCompleteDetails_set_data(PaymentCompleteDetails* self, const jb_Object* value) {
    em_Val_set(em_Val_as_val(self->inner), "data", value);
}

DEFINE_EMLITE_TYPE(PaymentValidationErrors, em_Val);


jb_Any PaymentValidationErrors_payer(const PaymentValidationErrors *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "payer"));
}


void PaymentValidationErrors_set_payer(PaymentValidationErrors* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "payer", value);
}


jb_Any PaymentValidationErrors_shippingAddress(const PaymentValidationErrors *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "shippingAddress"));
}


void PaymentValidationErrors_set_shippingAddress(PaymentValidationErrors* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "shippingAddress", value);
}


jb_DOMString PaymentValidationErrors_error(const PaymentValidationErrors *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "error"));
}


void PaymentValidationErrors_set_error(PaymentValidationErrors* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "error", value);
}


jb_Object PaymentValidationErrors_paymentMethod(const PaymentValidationErrors *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), "paymentMethod"));
}


void PaymentValidationErrors_set_paymentMethod(PaymentValidationErrors* self, const jb_Object* value) {
    em_Val_set(em_Val_as_val(self->inner), "paymentMethod", value);
}

DEFINE_EMLITE_TYPE(PaymentResponse, EventTarget);


jb_Object PaymentResponse_toJSON(PaymentResponse* self ) {
    return em_Val_as(jb_Object, em_Val_call(EventTarget_as_val(self->inner), "toJSON"));
}


jb_DOMString PaymentResponse_requestId(const PaymentResponse *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "requestId"));
}


jb_DOMString PaymentResponse_methodName(const PaymentResponse *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "methodName"));
}


jb_Object PaymentResponse_details(const PaymentResponse *self) {
    return em_Val_as(jb_Object, em_Val_get(EventTarget_as_val(self->inner), "details"));
}


ContactAddress PaymentResponse_shippingAddress(const PaymentResponse *self) {
    return em_Val_as(ContactAddress, em_Val_get(EventTarget_as_val(self->inner), "shippingAddress"));
}


jb_DOMString PaymentResponse_shippingOption(const PaymentResponse *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "shippingOption"));
}


jb_DOMString PaymentResponse_payerName(const PaymentResponse *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "payerName"));
}


jb_DOMString PaymentResponse_payerEmail(const PaymentResponse *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "payerEmail"));
}


jb_DOMString PaymentResponse_payerPhone(const PaymentResponse *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "payerPhone"));
}


jb_Promise PaymentResponse_complete(PaymentResponse* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "complete"));
}


jb_Promise PaymentResponse_complete(PaymentResponse* self , const PaymentComplete* result) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "complete", em_Val_from(result)));
}


jb_Promise PaymentResponse_complete(PaymentResponse* self , const PaymentComplete* result, const PaymentCompleteDetails* details) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "complete", em_Val_from(result), em_Val_from(details)));
}


jb_Promise PaymentResponse_retry(PaymentResponse* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "retry"));
}


jb_Promise PaymentResponse_retry(PaymentResponse* self , const PaymentValidationErrors* errorFields) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "retry", em_Val_from(errorFields)));
}


jb_Any PaymentResponse_onpayerdetailchange(const PaymentResponse *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onpayerdetailchange"));
}


void PaymentResponse_set_onpayerdetailchange(PaymentResponse* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onpayerdetailchange", value);
}

