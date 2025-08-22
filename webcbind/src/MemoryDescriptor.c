#include <webcbind/MemoryDescriptor.h>

DEFINE_EMLITE_TYPE(MemoryDescriptor, em_Val);


unsigned long MemoryDescriptor_initial(const MemoryDescriptor *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("initial")));
}


void MemoryDescriptor_set_initial(MemoryDescriptor* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("initial"), em_Val_from(value));
}


unsigned long MemoryDescriptor_maximum(const MemoryDescriptor *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maximum")));
}


void MemoryDescriptor_set_maximum(MemoryDescriptor* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maximum"), em_Val_from(value));
}


MemoryDescriptor MemoryDescriptor_new() {
    em_Val obj = em_Val_object();
    return MemoryDescriptor_from_val(&obj);
}

