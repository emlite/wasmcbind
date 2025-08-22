#include <webcbind/PaymentDetailsModifier.h>

DEFINE_EMLITE_TYPE(PaymentDetailsModifier, em_Val);


jb_String PaymentDetailsModifier_supportedMethods(const PaymentDetailsModifier *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supportedMethods")));
}


void PaymentDetailsModifier_set_supportedMethods(PaymentDetailsModifier* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supportedMethods"), em_Val_from(value));
}


PaymentItem PaymentDetailsModifier_total(const PaymentDetailsModifier *self) {
    return em_Val_as(PaymentItem, em_Val_get(em_Val_as_val(self->inner), em_Val_from("total")));
}


void PaymentDetailsModifier_set_total(PaymentDetailsModifier* self, PaymentItem * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("total"), em_Val_from(value));
}


jb_Array PaymentDetailsModifier_additionalDisplayItems(const PaymentDetailsModifier *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("additionalDisplayItems")));
}


void PaymentDetailsModifier_set_additionalDisplayItems(PaymentDetailsModifier* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("additionalDisplayItems"), em_Val_from(value));
}


jb_Object PaymentDetailsModifier_data(const PaymentDetailsModifier *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void PaymentDetailsModifier_set_data(PaymentDetailsModifier* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


PaymentDetailsModifier PaymentDetailsModifier_new() {
    em_Val obj = em_Val_object();
    return PaymentDetailsModifier_from_val(&obj);
}

