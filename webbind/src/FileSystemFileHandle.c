#include <webbind/FileSystemFileHandle.h>

#include <webbind/File.h>
#include <webbind/FileSystemWritableFileStream.h>
#include <webbind/FileSystemCreateWritableOptions.h>
#include <webbind/FileSystemSyncAccessHandle.h>

DEFINE_EMLITE_TYPE(FileSystemFileHandle, FileSystemHandle);


jb_Promise FileSystemFileHandle_getFile(FileSystemFileHandle* self ) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "getFile"));
}


jb_Promise FileSystemFileHandle_createWritable0(FileSystemFileHandle* self ) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "createWritable"));
}


jb_Promise FileSystemFileHandle_createWritable1(FileSystemFileHandle* self , FileSystemCreateWritableOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "createWritable", em_Val_from(options)));
}


jb_Promise FileSystemFileHandle_createSyncAccessHandle(FileSystemFileHandle* self ) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "createSyncAccessHandle"));
}

