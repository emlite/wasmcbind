#include <webbind/PaymentMethodData.h>

DEFINE_EMLITE_TYPE(PaymentMethodData, em_Val);


jb_String PaymentMethodData_supportedMethods(const PaymentMethodData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supportedMethods")));
}


void PaymentMethodData_set_supportedMethods(PaymentMethodData* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supportedMethods"), em_Val_from(value));
}


jb_Object PaymentMethodData_data(const PaymentMethodData *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void PaymentMethodData_set_data(PaymentMethodData* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


PaymentMethodData PaymentMethodData_new() {
    em_Val obj = em_Val_object();
    return PaymentMethodData_from_val(&obj);
}

