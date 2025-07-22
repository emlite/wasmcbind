#include <webbind/IDBFactory.h>
#include <webbind/IDBOpenDBRequest.h>


DEFINE_EMLITE_TYPE(IDBDatabaseInfo, em_Val);


jb_DOMString IDBDatabaseInfo_name(const IDBDatabaseInfo *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void IDBDatabaseInfo_set_name(IDBDatabaseInfo* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


long long IDBDatabaseInfo_version(const IDBDatabaseInfo *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("version")));
}


void IDBDatabaseInfo_set_version(IDBDatabaseInfo* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("version"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(IDBFactory, em_Val);


IDBOpenDBRequest IDBFactory_open0(IDBFactory* self , jb_DOMString * name) {
    return em_Val_as(IDBOpenDBRequest, em_Val_call(em_Val_as_val(self->inner), "open", em_Val_from(name)));
}


IDBOpenDBRequest IDBFactory_open1(IDBFactory* self , jb_DOMString * name, long long version) {
    return em_Val_as(IDBOpenDBRequest, em_Val_call(em_Val_as_val(self->inner), "open", em_Val_from(name), em_Val_from(version)));
}


IDBOpenDBRequest IDBFactory_deleteDatabase(IDBFactory* self , jb_DOMString * name) {
    return em_Val_as(IDBOpenDBRequest, em_Val_call(em_Val_as_val(self->inner), "deleteDatabase", em_Val_from(name)));
}


jb_Promise IDBFactory_databases(IDBFactory* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "databases"));
}


short IDBFactory_cmp(IDBFactory* self , jb_Any * first, jb_Any * second) {
    return em_Val_as(short, em_Val_call(em_Val_as_val(self->inner), "cmp", em_Val_from(first), em_Val_from(second)));
}

