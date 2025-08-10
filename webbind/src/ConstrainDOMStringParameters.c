#include <webbind/ConstrainDOMStringParameters.h>

DEFINE_EMLITE_TYPE(ConstrainDOMStringParameters, em_Val);


jb_Any ConstrainDOMStringParameters_exact(const ConstrainDOMStringParameters *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exact")));
}


void ConstrainDOMStringParameters_set_exact(ConstrainDOMStringParameters* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exact"), em_Val_from(value));
}


jb_Any ConstrainDOMStringParameters_ideal(const ConstrainDOMStringParameters *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ideal")));
}


void ConstrainDOMStringParameters_set_ideal(ConstrainDOMStringParameters* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ideal"), em_Val_from(value));
}


ConstrainDOMStringParameters ConstrainDOMStringParameters_new() {
    em_Val obj = em_Val_object();
    return ConstrainDOMStringParameters_from_val(&obj);
}

