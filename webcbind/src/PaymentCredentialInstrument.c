#include <webcbind/PaymentCredentialInstrument.h>

DEFINE_EMLITE_TYPE(PaymentCredentialInstrument, em_Val);


jb_String PaymentCredentialInstrument_displayName(const PaymentCredentialInstrument *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayName")));
}


void PaymentCredentialInstrument_set_displayName(PaymentCredentialInstrument* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displayName"), em_Val_from(value));
}


jb_String PaymentCredentialInstrument_icon(const PaymentCredentialInstrument *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("icon")));
}


void PaymentCredentialInstrument_set_icon(PaymentCredentialInstrument* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("icon"), em_Val_from(value));
}


bool PaymentCredentialInstrument_iconMustBeShown(const PaymentCredentialInstrument *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("iconMustBeShown")));
}


void PaymentCredentialInstrument_set_iconMustBeShown(PaymentCredentialInstrument* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("iconMustBeShown"), em_Val_from(value));
}


jb_String PaymentCredentialInstrument_details(const PaymentCredentialInstrument *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("details")));
}


void PaymentCredentialInstrument_set_details(PaymentCredentialInstrument* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("details"), em_Val_from(value));
}


PaymentCredentialInstrument PaymentCredentialInstrument_new() {
    em_Val obj = em_Val_object();
    return PaymentCredentialInstrument_from_val(&obj);
}

