#include <webcbind/PaymentDetailsInit.h>

DEFINE_EMLITE_TYPE(PaymentDetailsInit, PaymentDetailsBase);


jb_String PaymentDetailsInit_id(const PaymentDetailsInit *self) {
    return em_Val_as(jb_String, em_Val_get(PaymentDetailsBase_as_val(self->inner), em_Val_from("id")));
}


void PaymentDetailsInit_set_id(PaymentDetailsInit* self, jb_String * value) {
    em_Val_set(PaymentDetailsBase_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


PaymentItem PaymentDetailsInit_total(const PaymentDetailsInit *self) {
    return em_Val_as(PaymentItem, em_Val_get(PaymentDetailsBase_as_val(self->inner), em_Val_from("total")));
}


void PaymentDetailsInit_set_total(PaymentDetailsInit* self, PaymentItem * value) {
    em_Val_set(PaymentDetailsBase_as_val(self->inner), em_Val_from("total"), em_Val_from(value));
}


PaymentDetailsInit PaymentDetailsInit_new() {
    em_Val obj = em_Val_object();
    return PaymentDetailsInit_from_val(&obj);
}

