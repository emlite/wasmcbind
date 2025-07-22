#include <webbind/StorageManager.h>
#include <webbind/FileSystemDirectoryHandle.h>


DEFINE_EMLITE_TYPE(StorageEstimate, em_Val);


long long StorageEstimate_usage(const StorageEstimate *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usage")));
}


void StorageEstimate_set_usage(StorageEstimate* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usage"), em_Val_from(value));
}


long long StorageEstimate_quota(const StorageEstimate *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("quota")));
}


void StorageEstimate_set_quota(StorageEstimate* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("quota"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(StorageManager, em_Val);


jb_Promise StorageManager_persisted(StorageManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "persisted"));
}


jb_Promise StorageManager_persist(StorageManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "persist"));
}


jb_Promise StorageManager_estimate(StorageManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "estimate"));
}


jb_Promise StorageManager_getDirectory(StorageManager* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getDirectory"));
}

