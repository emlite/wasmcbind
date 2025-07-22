#include <webbind/FileSystemFileHandle.h>
#include <webbind/File.h>
#include <webbind/FileSystemWritableFileStream.h>
#include <webbind/FileSystemSyncAccessHandle.h>


DEFINE_EMLITE_TYPE(FileSystemCreateWritableOptions, em_Val);


bool FileSystemCreateWritableOptions_keepExistingData(const FileSystemCreateWritableOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "keepExistingData"));
}


void FileSystemCreateWritableOptions_set_keepExistingData(FileSystemCreateWritableOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "keepExistingData", value);
}

DEFINE_EMLITE_TYPE(FileSystemFileHandle, FileSystemHandle);


jb_Promise FileSystemFileHandle_getFile(FileSystemFileHandle* self ) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "getFile"));
}


jb_Promise FileSystemFileHandle_createWritable(FileSystemFileHandle* self ) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "createWritable"));
}


jb_Promise FileSystemFileHandle_createWritable(FileSystemFileHandle* self , const FileSystemCreateWritableOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "createWritable", em_Val_from(options)));
}


jb_Promise FileSystemFileHandle_createSyncAccessHandle(FileSystemFileHandle* self ) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "createSyncAccessHandle"));
}

