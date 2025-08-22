#include <webcbind/Table.h>

#include <webcbind/TableDescriptor.h>

DEFINE_EMLITE_TYPE(Table, em_Val);


Table Table_new0(TableDescriptor * descriptor) {
        em_Val vv = em_Val_new(em_Val_global("Table") , em_Val_from(descriptor));
        return Table_from_val(&vv);
      }


Table Table_new1(TableDescriptor * descriptor, jb_Any * value) {
        em_Val vv = em_Val_new(em_Val_global("Table") , em_Val_from(descriptor), em_Val_from(value));
        return Table_from_val(&vv);
      }


unsigned long Table_grow0(Table* self , unsigned long delta) {
    return em_Val_as(unsigned long, em_Val_call(em_Val_as_val(self->inner), "grow", em_Val_from(delta)));
}


unsigned long Table_grow1(Table* self , unsigned long delta, jb_Any * value) {
    return em_Val_as(unsigned long, em_Val_call(em_Val_as_val(self->inner), "grow", em_Val_from(delta), em_Val_from(value)));
}


jb_Any Table_get(Table* self , unsigned long index) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(index)));
}


jb_Undefined Table_set0(Table* self , unsigned long index) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "set", em_Val_from(index)));
}


jb_Undefined Table_set1(Table* self , unsigned long index, jb_Any * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "set", em_Val_from(index), em_Val_from(value)));
}


unsigned long Table_length(const Table *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}

