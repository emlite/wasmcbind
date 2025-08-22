#include <webcbind/IDBIndexParameters.h>

DEFINE_EMLITE_TYPE(IDBIndexParameters, em_Val);


bool IDBIndexParameters_unique(const IDBIndexParameters *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unique")));
}


void IDBIndexParameters_set_unique(IDBIndexParameters* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("unique"), em_Val_from(value));
}


bool IDBIndexParameters_multiEntry(const IDBIndexParameters *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("multiEntry")));
}


void IDBIndexParameters_set_multiEntry(IDBIndexParameters* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("multiEntry"), em_Val_from(value));
}


IDBIndexParameters IDBIndexParameters_new() {
    em_Val obj = em_Val_object();
    return IDBIndexParameters_from_val(&obj);
}

