#include <webcbind/MemoryMeasurement.h>

DEFINE_EMLITE_TYPE(MemoryMeasurement, em_Val);


long long MemoryMeasurement_bytes(const MemoryMeasurement *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytes")));
}


void MemoryMeasurement_set_bytes(MemoryMeasurement* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytes"), em_Val_from(value));
}


jb_Array MemoryMeasurement_breakdown(const MemoryMeasurement *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("breakdown")));
}


void MemoryMeasurement_set_breakdown(MemoryMeasurement* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("breakdown"), em_Val_from(value));
}


MemoryMeasurement MemoryMeasurement_new() {
    em_Val obj = em_Val_object();
    return MemoryMeasurement_from_val(&obj);
}

