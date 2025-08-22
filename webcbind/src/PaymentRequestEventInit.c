#include <webcbind/PaymentRequestEventInit.h>

DEFINE_EMLITE_TYPE(PaymentRequestEventInit, ExtendableEventInit);


jb_String PaymentRequestEventInit_topOrigin(const PaymentRequestEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("topOrigin")));
}


void PaymentRequestEventInit_set_topOrigin(PaymentRequestEventInit* self, jb_String * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("topOrigin"), em_Val_from(value));
}


jb_String PaymentRequestEventInit_paymentRequestOrigin(const PaymentRequestEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("paymentRequestOrigin")));
}


void PaymentRequestEventInit_set_paymentRequestOrigin(PaymentRequestEventInit* self, jb_String * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("paymentRequestOrigin"), em_Val_from(value));
}


jb_String PaymentRequestEventInit_paymentRequestId(const PaymentRequestEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("paymentRequestId")));
}


void PaymentRequestEventInit_set_paymentRequestId(PaymentRequestEventInit* self, jb_String * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("paymentRequestId"), em_Val_from(value));
}


jb_Array PaymentRequestEventInit_methodData(const PaymentRequestEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("methodData")));
}


void PaymentRequestEventInit_set_methodData(PaymentRequestEventInit* self, jb_Array * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("methodData"), em_Val_from(value));
}


PaymentCurrencyAmount PaymentRequestEventInit_total(const PaymentRequestEventInit *self) {
    return em_Val_as(PaymentCurrencyAmount, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("total")));
}


void PaymentRequestEventInit_set_total(PaymentRequestEventInit* self, PaymentCurrencyAmount * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("total"), em_Val_from(value));
}


jb_Array PaymentRequestEventInit_modifiers(const PaymentRequestEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("modifiers")));
}


void PaymentRequestEventInit_set_modifiers(PaymentRequestEventInit* self, jb_Array * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("modifiers"), em_Val_from(value));
}


PaymentOptions PaymentRequestEventInit_paymentOptions(const PaymentRequestEventInit *self) {
    return em_Val_as(PaymentOptions, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("paymentOptions")));
}


void PaymentRequestEventInit_set_paymentOptions(PaymentRequestEventInit* self, PaymentOptions * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("paymentOptions"), em_Val_from(value));
}


jb_Array PaymentRequestEventInit_shippingOptions(const PaymentRequestEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("shippingOptions")));
}


void PaymentRequestEventInit_set_shippingOptions(PaymentRequestEventInit* self, jb_Array * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("shippingOptions"), em_Val_from(value));
}


PaymentRequestEventInit PaymentRequestEventInit_new() {
    em_Val obj = em_Val_object();
    return PaymentRequestEventInit_from_val(&obj);
}

