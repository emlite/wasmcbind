#include <webbind/PaymentValidationErrors.h>

DEFINE_EMLITE_TYPE(PaymentValidationErrors, em_Val);


PayerErrors PaymentValidationErrors_payer(const PaymentValidationErrors *self) {
    return em_Val_as(PayerErrors, em_Val_get(em_Val_as_val(self->inner), em_Val_from("payer")));
}


void PaymentValidationErrors_set_payer(PaymentValidationErrors* self, PayerErrors * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("payer"), em_Val_from(value));
}


AddressErrors PaymentValidationErrors_shippingAddress(const PaymentValidationErrors *self) {
    return em_Val_as(AddressErrors, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shippingAddress")));
}


void PaymentValidationErrors_set_shippingAddress(PaymentValidationErrors* self, AddressErrors * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shippingAddress"), em_Val_from(value));
}


jb_String PaymentValidationErrors_error(const PaymentValidationErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("error")));
}


void PaymentValidationErrors_set_error(PaymentValidationErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


jb_Object PaymentValidationErrors_paymentMethod(const PaymentValidationErrors *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("paymentMethod")));
}


void PaymentValidationErrors_set_paymentMethod(PaymentValidationErrors* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("paymentMethod"), em_Val_from(value));
}


PaymentValidationErrors PaymentValidationErrors_new() {
    em_Val obj = em_Val_object();
    return PaymentValidationErrors_from_val(&obj);
}

