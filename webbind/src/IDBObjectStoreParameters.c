#include <webbind/IDBObjectStoreParameters.h>

DEFINE_EMLITE_TYPE(IDBObjectStoreParameters, em_Val);


jb_Any IDBObjectStoreParameters_keyPath(const IDBObjectStoreParameters *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keyPath")));
}


void IDBObjectStoreParameters_set_keyPath(IDBObjectStoreParameters* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keyPath"), em_Val_from(value));
}


bool IDBObjectStoreParameters_autoIncrement(const IDBObjectStoreParameters *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("autoIncrement")));
}


void IDBObjectStoreParameters_set_autoIncrement(IDBObjectStoreParameters* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("autoIncrement"), em_Val_from(value));
}


IDBObjectStoreParameters IDBObjectStoreParameters_new() {
    em_Val obj = em_Val_object();
    return IDBObjectStoreParameters_from_val(&obj);
}

