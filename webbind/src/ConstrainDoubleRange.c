#include <webbind/ConstrainDoubleRange.h>

DEFINE_EMLITE_TYPE(ConstrainDoubleRange, DoubleRange);


double ConstrainDoubleRange_exact(const ConstrainDoubleRange *self) {
    return em_Val_as(double, em_Val_get(DoubleRange_as_val(self->inner), em_Val_from("exact")));
}


void ConstrainDoubleRange_set_exact(ConstrainDoubleRange* self, double value) {
    em_Val_set(DoubleRange_as_val(self->inner), em_Val_from("exact"), em_Val_from(value));
}


double ConstrainDoubleRange_ideal(const ConstrainDoubleRange *self) {
    return em_Val_as(double, em_Val_get(DoubleRange_as_val(self->inner), em_Val_from("ideal")));
}


void ConstrainDoubleRange_set_ideal(ConstrainDoubleRange* self, double value) {
    em_Val_set(DoubleRange_as_val(self->inner), em_Val_from("ideal"), em_Val_from(value));
}


ConstrainDoubleRange ConstrainDoubleRange_new() {
    em_Val obj = em_Val_object();
    return ConstrainDoubleRange_from_val(&obj);
}

