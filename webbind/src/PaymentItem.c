#include <webbind/PaymentItem.h>

DEFINE_EMLITE_TYPE(PaymentItem, em_Val);


jb_String PaymentItem_label(const PaymentItem *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void PaymentItem_set_label(PaymentItem* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


PaymentCurrencyAmount PaymentItem_amount(const PaymentItem *self) {
    return em_Val_as(PaymentCurrencyAmount, em_Val_get(em_Val_as_val(self->inner), em_Val_from("amount")));
}


void PaymentItem_set_amount(PaymentItem* self, PaymentCurrencyAmount * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("amount"), em_Val_from(value));
}


bool PaymentItem_pending(const PaymentItem *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pending")));
}


void PaymentItem_set_pending(PaymentItem* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pending"), em_Val_from(value));
}


PaymentItem PaymentItem_new() {
    em_Val obj = em_Val_object();
    return PaymentItem_from_val(&obj);
}

