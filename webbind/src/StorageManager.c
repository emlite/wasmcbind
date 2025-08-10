#include <webbind/StorageManager.h>

#include <webbind/StorageEstimate.h>
#include <webbind/FileSystemDirectoryHandle.h>

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

