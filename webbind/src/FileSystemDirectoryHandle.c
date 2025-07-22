#include <webbind/FileSystemDirectoryHandle.h>
#include <webbind/FileSystemFileHandle.h>


DEFINE_EMLITE_TYPE(FileSystemGetFileOptions, em_Val);


bool FileSystemGetFileOptions_create(const FileSystemGetFileOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("create")));
}


void FileSystemGetFileOptions_set_create(FileSystemGetFileOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("create"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(FileSystemGetDirectoryOptions, em_Val);


bool FileSystemGetDirectoryOptions_create(const FileSystemGetDirectoryOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("create")));
}


void FileSystemGetDirectoryOptions_set_create(FileSystemGetDirectoryOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("create"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(FileSystemRemoveOptions, em_Val);


bool FileSystemRemoveOptions_recursive(const FileSystemRemoveOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recursive")));
}


void FileSystemRemoveOptions_set_recursive(FileSystemRemoveOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recursive"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(FileSystemDirectoryHandle, FileSystemHandle);


jb_Promise FileSystemDirectoryHandle_getFileHandle0(FileSystemDirectoryHandle* self , jb_USVString * name) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "getFileHandle", em_Val_from(name)));
}


jb_Promise FileSystemDirectoryHandle_getFileHandle1(FileSystemDirectoryHandle* self , jb_USVString * name, FileSystemGetFileOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "getFileHandle", em_Val_from(name), em_Val_from(options)));
}


jb_Promise FileSystemDirectoryHandle_getDirectoryHandle0(FileSystemDirectoryHandle* self , jb_USVString * name) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "getDirectoryHandle", em_Val_from(name)));
}


jb_Promise FileSystemDirectoryHandle_getDirectoryHandle1(FileSystemDirectoryHandle* self , jb_USVString * name, FileSystemGetDirectoryOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "getDirectoryHandle", em_Val_from(name), em_Val_from(options)));
}


jb_Promise FileSystemDirectoryHandle_removeEntry0(FileSystemDirectoryHandle* self , jb_USVString * name) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "removeEntry", em_Val_from(name)));
}


jb_Promise FileSystemDirectoryHandle_removeEntry1(FileSystemDirectoryHandle* self , jb_USVString * name, FileSystemRemoveOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "removeEntry", em_Val_from(name), em_Val_from(options)));
}


jb_Promise FileSystemDirectoryHandle_resolve(FileSystemDirectoryHandle* self , FileSystemHandle * possibleDescendant) {
    return em_Val_as(jb_Promise, em_Val_call(FileSystemHandle_as_val(self->inner), "resolve", em_Val_from(possibleDescendant)));
}

