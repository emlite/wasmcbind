#include <webcbind/IDBFactory.h>

#include <webcbind/IDBOpenDBRequest.h>
#include <webcbind/IDBDatabaseInfo.h>

DEFINE_EMLITE_TYPE(IDBFactory, em_Val);


IDBOpenDBRequest IDBFactory_open0(IDBFactory* self , jb_String * name) {
    return em_Val_as(IDBOpenDBRequest, em_Val_call(em_Val_as_val(self->inner), "open", em_Val_from(name)));
}


IDBOpenDBRequest IDBFactory_open1(IDBFactory* self , jb_String * name, long long version) {
    return em_Val_as(IDBOpenDBRequest, em_Val_call(em_Val_as_val(self->inner), "open", em_Val_from(name), em_Val_from(version)));
}


IDBOpenDBRequest IDBFactory_deleteDatabase(IDBFactory* self , jb_String * name) {
    return em_Val_as(IDBOpenDBRequest, em_Val_call(em_Val_as_val(self->inner), "deleteDatabase", em_Val_from(name)));
}


jb_Promise IDBFactory_databases(IDBFactory* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "databases"));
}


short IDBFactory_cmp(IDBFactory* self , jb_Any * first, jb_Any * second) {
    return em_Val_as(short, em_Val_call(em_Val_as_val(self->inner), "cmp", em_Val_from(first), em_Val_from(second)));
}

