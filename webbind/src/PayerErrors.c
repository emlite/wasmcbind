#include <webbind/PayerErrors.h>

DEFINE_EMLITE_TYPE(PayerErrors, em_Val);


jb_String PayerErrors_email(const PayerErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("email")));
}


void PayerErrors_set_email(PayerErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("email"), em_Val_from(value));
}


jb_String PayerErrors_name(const PayerErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void PayerErrors_set_name(PayerErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String PayerErrors_phone(const PayerErrors *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("phone")));
}


void PayerErrors_set_phone(PayerErrors* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("phone"), em_Val_from(value));
}


PayerErrors PayerErrors_new() {
    em_Val obj = em_Val_object();
    return PayerErrors_from_val(&obj);
}

