#include <webbind/PaymentOptions.h>

DEFINE_EMLITE_TYPE(PaymentOptions, em_Val);


bool PaymentOptions_requestPayerName(const PaymentOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestPayerName")));
}


void PaymentOptions_set_requestPayerName(PaymentOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestPayerName"), em_Val_from(value));
}


bool PaymentOptions_requestBillingAddress(const PaymentOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestBillingAddress")));
}


void PaymentOptions_set_requestBillingAddress(PaymentOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestBillingAddress"), em_Val_from(value));
}


bool PaymentOptions_requestPayerEmail(const PaymentOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestPayerEmail")));
}


void PaymentOptions_set_requestPayerEmail(PaymentOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestPayerEmail"), em_Val_from(value));
}


bool PaymentOptions_requestPayerPhone(const PaymentOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestPayerPhone")));
}


void PaymentOptions_set_requestPayerPhone(PaymentOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestPayerPhone"), em_Val_from(value));
}


bool PaymentOptions_requestShipping(const PaymentOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestShipping")));
}


void PaymentOptions_set_requestShipping(PaymentOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestShipping"), em_Val_from(value));
}


PaymentShippingType PaymentOptions_shippingType(const PaymentOptions *self) {
    return em_Val_as(PaymentShippingType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shippingType")));
}


void PaymentOptions_set_shippingType(PaymentOptions* self, PaymentShippingType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shippingType"), em_Val_from(value));
}


PaymentOptions PaymentOptions_new() {
    em_Val obj = em_Val_object();
    return PaymentOptions_from_val(&obj);
}

