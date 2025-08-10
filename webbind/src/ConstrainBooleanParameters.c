#include <webbind/ConstrainBooleanParameters.h>

DEFINE_EMLITE_TYPE(ConstrainBooleanParameters, em_Val);


bool ConstrainBooleanParameters_exact(const ConstrainBooleanParameters *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exact")));
}


void ConstrainBooleanParameters_set_exact(ConstrainBooleanParameters* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exact"), em_Val_from(value));
}


bool ConstrainBooleanParameters_ideal(const ConstrainBooleanParameters *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ideal")));
}


void ConstrainBooleanParameters_set_ideal(ConstrainBooleanParameters* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ideal"), em_Val_from(value));
}


ConstrainBooleanParameters ConstrainBooleanParameters_new() {
    em_Val obj = em_Val_object();
    return ConstrainBooleanParameters_from_val(&obj);
}

