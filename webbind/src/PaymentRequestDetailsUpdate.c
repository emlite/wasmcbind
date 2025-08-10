#include <webbind/PaymentRequestDetailsUpdate.h>

DEFINE_EMLITE_TYPE(PaymentRequestDetailsUpdate, em_Val);


jb_String PaymentRequestDetailsUpdate_error(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("error")));
}


void PaymentRequestDetailsUpdate_set_error(PaymentRequestDetailsUpdate* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


PaymentCurrencyAmount PaymentRequestDetailsUpdate_total(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(PaymentCurrencyAmount, em_Val_get(em_Val_as_val(self->inner), em_Val_from("total")));
}


void PaymentRequestDetailsUpdate_set_total(PaymentRequestDetailsUpdate* self, PaymentCurrencyAmount * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("total"), em_Val_from(value));
}


jb_Array PaymentRequestDetailsUpdate_modifiers(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("modifiers")));
}


void PaymentRequestDetailsUpdate_set_modifiers(PaymentRequestDetailsUpdate* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("modifiers"), em_Val_from(value));
}


jb_Array PaymentRequestDetailsUpdate_shippingOptions(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shippingOptions")));
}


void PaymentRequestDetailsUpdate_set_shippingOptions(PaymentRequestDetailsUpdate* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shippingOptions"), em_Val_from(value));
}


jb_Object PaymentRequestDetailsUpdate_paymentMethodErrors(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("paymentMethodErrors")));
}


void PaymentRequestDetailsUpdate_set_paymentMethodErrors(PaymentRequestDetailsUpdate* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("paymentMethodErrors"), em_Val_from(value));
}


AddressErrors PaymentRequestDetailsUpdate_shippingAddressErrors(const PaymentRequestDetailsUpdate *self) {
    return em_Val_as(AddressErrors, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shippingAddressErrors")));
}


void PaymentRequestDetailsUpdate_set_shippingAddressErrors(PaymentRequestDetailsUpdate* self, AddressErrors * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shippingAddressErrors"), em_Val_from(value));
}


PaymentRequestDetailsUpdate PaymentRequestDetailsUpdate_new() {
    em_Val obj = em_Val_object();
    return PaymentRequestDetailsUpdate_from_val(&obj);
}

