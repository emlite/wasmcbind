#include <webbind/FileSystemSyncAccessHandle.h>


DEFINE_EMLITE_TYPE(FileSystemReadWriteOptions, em_Val);


long long FileSystemReadWriteOptions_at(const FileSystemReadWriteOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "at"));
}


void FileSystemReadWriteOptions_set_at(FileSystemReadWriteOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "at", value);
}

DEFINE_EMLITE_TYPE(FileSystemSyncAccessHandle, em_Val);


long long FileSystemSyncAccessHandle_read(FileSystemSyncAccessHandle* self , const jb_Any* buffer) {
    return em_Val_as(long long, em_Val_call(em_Val_as_val(self->inner), "read", em_Val_from(buffer)));
}


long long FileSystemSyncAccessHandle_read(FileSystemSyncAccessHandle* self , const jb_Any* buffer, const FileSystemReadWriteOptions* options) {
    return em_Val_as(long long, em_Val_call(em_Val_as_val(self->inner), "read", em_Val_from(buffer), em_Val_from(options)));
}


long long FileSystemSyncAccessHandle_write(FileSystemSyncAccessHandle* self , const jb_Any* buffer) {
    return em_Val_as(long long, em_Val_call(em_Val_as_val(self->inner), "write", em_Val_from(buffer)));
}


long long FileSystemSyncAccessHandle_write(FileSystemSyncAccessHandle* self , const jb_Any* buffer, const FileSystemReadWriteOptions* options) {
    return em_Val_as(long long, em_Val_call(em_Val_as_val(self->inner), "write", em_Val_from(buffer), em_Val_from(options)));
}


jb_Undefined FileSystemSyncAccessHandle_truncate(FileSystemSyncAccessHandle* self , long long newSize) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "truncate", em_Val_from(newSize)));
}


long long FileSystemSyncAccessHandle_getSize(FileSystemSyncAccessHandle* self ) {
    return em_Val_as(long long, em_Val_call(em_Val_as_val(self->inner), "getSize"));
}


jb_Undefined FileSystemSyncAccessHandle_flush(FileSystemSyncAccessHandle* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "flush"));
}


jb_Undefined FileSystemSyncAccessHandle_close(FileSystemSyncAccessHandle* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close"));
}

