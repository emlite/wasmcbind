#include <webbind/PaymentCurrencyAmount.h>

DEFINE_EMLITE_TYPE(PaymentCurrencyAmount, em_Val);


jb_String PaymentCurrencyAmount_currency(const PaymentCurrencyAmount *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("currency")));
}


void PaymentCurrencyAmount_set_currency(PaymentCurrencyAmount* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("currency"), em_Val_from(value));
}


jb_String PaymentCurrencyAmount_value(const PaymentCurrencyAmount *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void PaymentCurrencyAmount_set_value(PaymentCurrencyAmount* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


PaymentCurrencyAmount PaymentCurrencyAmount_new() {
    em_Val obj = em_Val_object();
    return PaymentCurrencyAmount_from_val(&obj);
}

