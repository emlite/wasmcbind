#include <webbind/IDBDatabaseInfo.h>

DEFINE_EMLITE_TYPE(IDBDatabaseInfo, em_Val);


jb_String IDBDatabaseInfo_name(const IDBDatabaseInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void IDBDatabaseInfo_set_name(IDBDatabaseInfo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


long long IDBDatabaseInfo_version(const IDBDatabaseInfo *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("version")));
}


void IDBDatabaseInfo_set_version(IDBDatabaseInfo* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("version"), em_Val_from(value));
}


IDBDatabaseInfo IDBDatabaseInfo_new() {
    em_Val obj = em_Val_object();
    return IDBDatabaseInfo_from_val(&obj);
}

