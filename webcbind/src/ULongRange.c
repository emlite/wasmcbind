#include <webcbind/ULongRange.h>

DEFINE_EMLITE_TYPE(ULongRange, em_Val);


unsigned long ULongRange_max(const ULongRange *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("max")));
}


void ULongRange_set_max(ULongRange* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("max"), em_Val_from(value));
}


unsigned long ULongRange_min(const ULongRange *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("min")));
}


void ULongRange_set_min(ULongRange* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("min"), em_Val_from(value));
}


ULongRange ULongRange_new() {
    em_Val obj = em_Val_object();
    return ULongRange_from_val(&obj);
}

