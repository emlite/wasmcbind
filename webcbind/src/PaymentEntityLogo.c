#include <webcbind/PaymentEntityLogo.h>

DEFINE_EMLITE_TYPE(PaymentEntityLogo, em_Val);


jb_String PaymentEntityLogo_url(const PaymentEntityLogo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void PaymentEntityLogo_set_url(PaymentEntityLogo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


jb_String PaymentEntityLogo_label(const PaymentEntityLogo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void PaymentEntityLogo_set_label(PaymentEntityLogo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


PaymentEntityLogo PaymentEntityLogo_new() {
    em_Val obj = em_Val_object();
    return PaymentEntityLogo_from_val(&obj);
}

