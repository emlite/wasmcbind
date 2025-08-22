#include <webcbind/TableDescriptor.h>

DEFINE_EMLITE_TYPE(TableDescriptor, em_Val);


TableKind TableDescriptor_element(const TableDescriptor *self) {
    return em_Val_as(TableKind, em_Val_get(em_Val_as_val(self->inner), em_Val_from("element")));
}


void TableDescriptor_set_element(TableDescriptor* self, TableKind * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("element"), em_Val_from(value));
}


unsigned long TableDescriptor_initial(const TableDescriptor *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("initial")));
}


void TableDescriptor_set_initial(TableDescriptor* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("initial"), em_Val_from(value));
}


unsigned long TableDescriptor_maximum(const TableDescriptor *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maximum")));
}


void TableDescriptor_set_maximum(TableDescriptor* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maximum"), em_Val_from(value));
}


TableDescriptor TableDescriptor_new() {
    em_Val obj = em_Val_object();
    return TableDescriptor_from_val(&obj);
}

