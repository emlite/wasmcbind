#include <webbind/ConstrainPoint2DParameters.h>

DEFINE_EMLITE_TYPE(ConstrainPoint2DParameters, em_Val);


jb_Array ConstrainPoint2DParameters_exact(const ConstrainPoint2DParameters *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exact")));
}


void ConstrainPoint2DParameters_set_exact(ConstrainPoint2DParameters* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exact"), em_Val_from(value));
}


jb_Array ConstrainPoint2DParameters_ideal(const ConstrainPoint2DParameters *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ideal")));
}


void ConstrainPoint2DParameters_set_ideal(ConstrainPoint2DParameters* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ideal"), em_Val_from(value));
}


ConstrainPoint2DParameters ConstrainPoint2DParameters_new() {
    em_Val obj = em_Val_object();
    return ConstrainPoint2DParameters_from_val(&obj);
}

