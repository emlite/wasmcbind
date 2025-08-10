#include <webbind/FileSystemDirectoryHandle.h>

#include <webbind/FileSystemFileHandle.h>
#include <webbind/FileSystemGetFileOptions.h>
#include <webbind/FileSystemGetDirectoryOptions.h>
#include <webbind/FileSystemRemoveOptions.h>

DEFINE_EMLITE_TYPE(FileSystemDirectoryHandle, FileSystemHandle);


jb_Promise FileSystemDirectoryHandle_getFileHandle0(FileSystemDirectoryHandle* self , jb_String * name) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "getFileHandle", em_Val_from(name)));
}


jb_Promise FileSystemDirectoryHandle_getFileHandle1(FileSystemDirectoryHandle* self , jb_String * name, FileSystemGetFileOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "getFileHandle", em_Val_from(name), em_Val_from(options)));
}


jb_Promise FileSystemDirectoryHandle_getDirectoryHandle0(FileSystemDirectoryHandle* self , jb_String * name) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "getDirectoryHandle", em_Val_from(name)));
}


jb_Promise FileSystemDirectoryHandle_getDirectoryHandle1(FileSystemDirectoryHandle* self , jb_String * name, FileSystemGetDirectoryOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "getDirectoryHandle", em_Val_from(name), em_Val_from(options)));
}


jb_Promise FileSystemDirectoryHandle_removeEntry0(FileSystemDirectoryHandle* self , jb_String * name) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "removeEntry", em_Val_from(name)));
}


jb_Promise FileSystemDirectoryHandle_removeEntry1(FileSystemDirectoryHandle* self , jb_String * name, FileSystemRemoveOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "removeEntry", em_Val_from(name), em_Val_from(options)));
}


jb_Promise FileSystemDirectoryHandle_resolve(FileSystemDirectoryHandle* self , FileSystemHandle * possibleDescendant) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "resolve", em_Val_from(possibleDescendant)));
}

