#include <webbind/FileSystemEntry.h>
#include <webbind/FileSystem.h>


DEFINE_EMLITE_TYPE(FileSystemEntry, em_Val);


bool FileSystemEntry_isFile(const FileSystemEntry *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isFile")));
}


bool FileSystemEntry_isDirectory(const FileSystemEntry *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isDirectory")));
}


jb_USVString FileSystemEntry_name(const FileSystemEntry *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


jb_USVString FileSystemEntry_fullPath(const FileSystemEntry *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fullPath")));
}


FileSystem FileSystemEntry_filesystem(const FileSystemEntry *self) {
    return em_Val_as(FileSystem, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filesystem")));
}


jb_Undefined FileSystemEntry_getParent0(FileSystemEntry* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getParent"));
}


jb_Undefined FileSystemEntry_getParent1(FileSystemEntry* self , jb_Function * successCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getParent", em_Val_from(successCallback)));
}


jb_Undefined FileSystemEntry_getParent2(FileSystemEntry* self , jb_Function * successCallback, jb_Function * errorCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getParent", em_Val_from(successCallback), em_Val_from(errorCallback)));
}

