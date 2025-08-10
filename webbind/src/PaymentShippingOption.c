#include <webbind/PaymentShippingOption.h>

DEFINE_EMLITE_TYPE(PaymentShippingOption, em_Val);


jb_String PaymentShippingOption_id(const PaymentShippingOption *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void PaymentShippingOption_set_id(PaymentShippingOption* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_String PaymentShippingOption_label(const PaymentShippingOption *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void PaymentShippingOption_set_label(PaymentShippingOption* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


PaymentCurrencyAmount PaymentShippingOption_amount(const PaymentShippingOption *self) {
    return em_Val_as(PaymentCurrencyAmount, em_Val_get(em_Val_as_val(self->inner), em_Val_from("amount")));
}


void PaymentShippingOption_set_amount(PaymentShippingOption* self, PaymentCurrencyAmount * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("amount"), em_Val_from(value));
}


bool PaymentShippingOption_selected(const PaymentShippingOption *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("selected")));
}


void PaymentShippingOption_set_selected(PaymentShippingOption* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("selected"), em_Val_from(value));
}


PaymentShippingOption PaymentShippingOption_new() {
    em_Val obj = em_Val_object();
    return PaymentShippingOption_from_val(&obj);
}

