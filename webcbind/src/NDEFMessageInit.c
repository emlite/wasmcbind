#include <webcbind/NDEFMessageInit.h>

DEFINE_EMLITE_TYPE(NDEFMessageInit, em_Val);


jb_Array NDEFMessageInit_records(const NDEFMessageInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("records")));
}


void NDEFMessageInit_set_records(NDEFMessageInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("records"), em_Val_from(value));
}


NDEFMessageInit NDEFMessageInit_new() {
    em_Val obj = em_Val_object();
    return NDEFMessageInit_from_val(&obj);
}

