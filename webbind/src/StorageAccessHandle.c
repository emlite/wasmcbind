#include <webbind/StorageAccessHandle.h>

#include <webbind/Storage.h>
#include <webbind/IDBFactory.h>
#include <webbind/LockManager.h>
#include <webbind/CacheStorage.h>
#include <webbind/FileSystemDirectoryHandle.h>
#include <webbind/StorageEstimate.h>
#include <webbind/BroadcastChannel.h>
#include <webbind/SharedWorker.h>

DEFINE_EMLITE_TYPE(StorageAccessHandle, em_Val);


Storage StorageAccessHandle_sessionStorage(const StorageAccessHandle *self) {
    return em_Val_as(Storage, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sessionStorage")));
}


Storage StorageAccessHandle_localStorage(const StorageAccessHandle *self) {
    return em_Val_as(Storage, em_Val_get(em_Val_as_val(self->inner), em_Val_from("localStorage")));
}


IDBFactory StorageAccessHandle_indexedDB(const StorageAccessHandle *self) {
    return em_Val_as(IDBFactory, em_Val_get(em_Val_as_val(self->inner), em_Val_from("indexedDB")));
}


LockManager StorageAccessHandle_locks(const StorageAccessHandle *self) {
    return em_Val_as(LockManager, em_Val_get(em_Val_as_val(self->inner), em_Val_from("locks")));
}


CacheStorage StorageAccessHandle_caches(const StorageAccessHandle *self) {
    return em_Val_as(CacheStorage, em_Val_get(em_Val_as_val(self->inner), em_Val_from("caches")));
}


jb_Promise StorageAccessHandle_getDirectory(StorageAccessHandle* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getDirectory"));
}


jb_Promise StorageAccessHandle_estimate(StorageAccessHandle* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "estimate"));
}


jb_String StorageAccessHandle_createObjectURL(StorageAccessHandle* self , jb_Any * obj) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "createObjectURL", em_Val_from(obj)));
}


jb_Undefined StorageAccessHandle_revokeObjectURL(StorageAccessHandle* self , jb_String * url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "revokeObjectURL", em_Val_from(url)));
}


BroadcastChannel StorageAccessHandle_BroadcastChannel_(StorageAccessHandle* self , jb_String * name) {
    return em_Val_as(BroadcastChannel, em_Val_call(em_Val_as_val(self->inner), "BroadcastChannel", em_Val_from(name)));
}


SharedWorker StorageAccessHandle_SharedWorker_0(StorageAccessHandle* self , jb_String * scriptURL) {
    return em_Val_as(SharedWorker, em_Val_call(em_Val_as_val(self->inner), "SharedWorker", em_Val_from(scriptURL)));
}


SharedWorker StorageAccessHandle_SharedWorker_1(StorageAccessHandle* self , jb_String * scriptURL, jb_Any * options) {
    return em_Val_as(SharedWorker, em_Val_call(em_Val_as_val(self->inner), "SharedWorker", em_Val_from(scriptURL), em_Val_from(options)));
}

