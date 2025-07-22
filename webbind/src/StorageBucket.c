#include <webbind/StorageBucket.h>
#include <webbind/StorageManager.h>
#include <webbind/IDBFactory.h>
#include <webbind/CacheStorage.h>
#include <webbind/FileSystemDirectoryHandle.h>


DEFINE_EMLITE_TYPE(StorageBucket, em_Val);


jb_DOMString StorageBucket_name(const StorageBucket *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


jb_Promise StorageBucket_persist(StorageBucket* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "persist"));
}


jb_Promise StorageBucket_persisted(StorageBucket* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "persisted"));
}


jb_Promise StorageBucket_estimate(StorageBucket* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "estimate"));
}


jb_Promise StorageBucket_setExpires(StorageBucket* self , const jb_Any* expires) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setExpires", em_Val_from(expires)));
}


jb_Promise StorageBucket_expires(StorageBucket* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "expires"));
}


IDBFactory StorageBucket_indexedDB(const StorageBucket *self) {
    return em_Val_as(IDBFactory, em_Val_get(em_Val_as_val(self->inner), "indexedDB"));
}


CacheStorage StorageBucket_caches(const StorageBucket *self) {
    return em_Val_as(CacheStorage, em_Val_get(em_Val_as_val(self->inner), "caches"));
}


jb_Promise StorageBucket_getDirectory(StorageBucket* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getDirectory"));
}

