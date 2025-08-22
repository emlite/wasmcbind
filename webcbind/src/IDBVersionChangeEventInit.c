#include <webcbind/IDBVersionChangeEventInit.h>

DEFINE_EMLITE_TYPE(IDBVersionChangeEventInit, EventInit);


long long IDBVersionChangeEventInit_oldVersion(const IDBVersionChangeEventInit *self) {
    return em_Val_as(long long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("oldVersion")));
}


void IDBVersionChangeEventInit_set_oldVersion(IDBVersionChangeEventInit* self, long long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("oldVersion"), em_Val_from(value));
}


long long IDBVersionChangeEventInit_newVersion(const IDBVersionChangeEventInit *self) {
    return em_Val_as(long long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("newVersion")));
}


void IDBVersionChangeEventInit_set_newVersion(IDBVersionChangeEventInit* self, long long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("newVersion"), em_Val_from(value));
}


IDBVersionChangeEventInit IDBVersionChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return IDBVersionChangeEventInit_from_val(&obj);
}

