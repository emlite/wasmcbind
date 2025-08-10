#include <webbind/ConstrainULongRange.h>

DEFINE_EMLITE_TYPE(ConstrainULongRange, ULongRange);


unsigned long ConstrainULongRange_exact(const ConstrainULongRange *self) {
    return em_Val_as(unsigned long, em_Val_get(ULongRange_as_val(self->inner), em_Val_from("exact")));
}


void ConstrainULongRange_set_exact(ConstrainULongRange* self, unsigned long value) {
    em_Val_set(ULongRange_as_val(self->inner), em_Val_from("exact"), em_Val_from(value));
}


unsigned long ConstrainULongRange_ideal(const ConstrainULongRange *self) {
    return em_Val_as(unsigned long, em_Val_get(ULongRange_as_val(self->inner), em_Val_from("ideal")));
}


void ConstrainULongRange_set_ideal(ConstrainULongRange* self, unsigned long value) {
    em_Val_set(ULongRange_as_val(self->inner), em_Val_from("ideal"), em_Val_from(value));
}


ConstrainULongRange ConstrainULongRange_new() {
    em_Val obj = em_Val_object();
    return ConstrainULongRange_from_val(&obj);
}

