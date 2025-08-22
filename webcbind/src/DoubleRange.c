#include <webcbind/DoubleRange.h>

DEFINE_EMLITE_TYPE(DoubleRange, em_Val);


double DoubleRange_max(const DoubleRange *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("max")));
}


void DoubleRange_set_max(DoubleRange* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("max"), em_Val_from(value));
}


double DoubleRange_min(const DoubleRange *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("min")));
}


void DoubleRange_set_min(DoubleRange* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("min"), em_Val_from(value));
}


DoubleRange DoubleRange_new() {
    em_Val obj = em_Val_object();
    return DoubleRange_from_val(&obj);
}

