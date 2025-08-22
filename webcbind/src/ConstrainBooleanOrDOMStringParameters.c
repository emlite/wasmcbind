#include <webcbind/ConstrainBooleanOrDOMStringParameters.h>

DEFINE_EMLITE_TYPE(ConstrainBooleanOrDOMStringParameters, em_Val);


jb_Any ConstrainBooleanOrDOMStringParameters_exact(const ConstrainBooleanOrDOMStringParameters *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exact")));
}


void ConstrainBooleanOrDOMStringParameters_set_exact(ConstrainBooleanOrDOMStringParameters* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exact"), em_Val_from(value));
}


jb_Any ConstrainBooleanOrDOMStringParameters_ideal(const ConstrainBooleanOrDOMStringParameters *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ideal")));
}


void ConstrainBooleanOrDOMStringParameters_set_ideal(ConstrainBooleanOrDOMStringParameters* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ideal"), em_Val_from(value));
}


ConstrainBooleanOrDOMStringParameters ConstrainBooleanOrDOMStringParameters_new() {
    em_Val obj = em_Val_object();
    return ConstrainBooleanOrDOMStringParameters_from_val(&obj);
}

