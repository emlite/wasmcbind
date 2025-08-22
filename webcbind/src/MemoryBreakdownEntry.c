#include <webcbind/MemoryBreakdownEntry.h>

DEFINE_EMLITE_TYPE(MemoryBreakdownEntry, em_Val);


long long MemoryBreakdownEntry_bytes(const MemoryBreakdownEntry *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bytes")));
}


void MemoryBreakdownEntry_set_bytes(MemoryBreakdownEntry* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bytes"), em_Val_from(value));
}


jb_Array MemoryBreakdownEntry_attribution(const MemoryBreakdownEntry *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attribution")));
}


void MemoryBreakdownEntry_set_attribution(MemoryBreakdownEntry* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attribution"), em_Val_from(value));
}


jb_Array MemoryBreakdownEntry_types(const MemoryBreakdownEntry *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("types")));
}


void MemoryBreakdownEntry_set_types(MemoryBreakdownEntry* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("types"), em_Val_from(value));
}


MemoryBreakdownEntry MemoryBreakdownEntry_new() {
    em_Val obj = em_Val_object();
    return MemoryBreakdownEntry_from_val(&obj);
}

