#include <webcbind/IDBRecord.h>

DEFINE_EMLITE_TYPE(IDBRecord, em_Val);


jb_Any IDBRecord_key(const IDBRecord *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("key")));
}


jb_Any IDBRecord_primaryKey(const IDBRecord *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("primaryKey")));
}


jb_Any IDBRecord_value(const IDBRecord *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}

