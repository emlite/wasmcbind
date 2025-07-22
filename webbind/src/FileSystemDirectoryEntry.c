#include <webbind/FileSystemDirectoryEntry.h>
#include <webbind/FileSystemDirectoryReader.h>


DEFINE_EMLITE_TYPE(FileSystemFlags, em_Val);


bool FileSystemFlags_create(const FileSystemFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("create")));
}


void FileSystemFlags_set_create(FileSystemFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("create"), em_Val_from(value));
}


bool FileSystemFlags_exclusive(const FileSystemFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exclusive")));
}


void FileSystemFlags_set_exclusive(FileSystemFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exclusive"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(FileSystemDirectoryEntry, FileSystemEntry);


FileSystemDirectoryReader FileSystemDirectoryEntry_createReader(FileSystemDirectoryEntry* self ) {
    return em_Val_as(FileSystemDirectoryReader, em_Val_call(FileSystemEntry_as_val(self->inner), "createReader"));
}


jb_Undefined FileSystemDirectoryEntry_getFile0(FileSystemDirectoryEntry* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(FileSystemEntry_as_val(self->inner), "getFile"));
}


jb_Undefined FileSystemDirectoryEntry_getFile1(FileSystemDirectoryEntry* self , jb_USVString * path) {
    return em_Val_as(jb_Undefined, em_Val_call(FileSystemEntry_as_val(self->inner), "getFile", em_Val_from(path)));
}


jb_Undefined FileSystemDirectoryEntry_getFile2(FileSystemDirectoryEntry* self , jb_USVString * path, FileSystemFlags * options) {
    return em_Val_as(jb_Undefined, em_Val_call(FileSystemEntry_as_val(self->inner), "getFile", em_Val_from(path), em_Val_from(options)));
}


jb_Undefined FileSystemDirectoryEntry_getFile3(FileSystemDirectoryEntry* self , jb_USVString * path, FileSystemFlags * options, jb_Function * successCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(FileSystemEntry_as_val(self->inner), "getFile", em_Val_from(path), em_Val_from(options), em_Val_from(successCallback)));
}


jb_Undefined FileSystemDirectoryEntry_getFile4(FileSystemDirectoryEntry* self , jb_USVString * path, FileSystemFlags * options, jb_Function * successCallback, jb_Function * errorCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(FileSystemEntry_as_val(self->inner), "getFile", em_Val_from(path), em_Val_from(options), em_Val_from(successCallback), em_Val_from(errorCallback)));
}


jb_Undefined FileSystemDirectoryEntry_getDirectory0(FileSystemDirectoryEntry* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(FileSystemEntry_as_val(self->inner), "getDirectory"));
}


jb_Undefined FileSystemDirectoryEntry_getDirectory1(FileSystemDirectoryEntry* self , jb_USVString * path) {
    return em_Val_as(jb_Undefined, em_Val_call(FileSystemEntry_as_val(self->inner), "getDirectory", em_Val_from(path)));
}


jb_Undefined FileSystemDirectoryEntry_getDirectory2(FileSystemDirectoryEntry* self , jb_USVString * path, FileSystemFlags * options) {
    return em_Val_as(jb_Undefined, em_Val_call(FileSystemEntry_as_val(self->inner), "getDirectory", em_Val_from(path), em_Val_from(options)));
}


jb_Undefined FileSystemDirectoryEntry_getDirectory3(FileSystemDirectoryEntry* self , jb_USVString * path, FileSystemFlags * options, jb_Function * successCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(FileSystemEntry_as_val(self->inner), "getDirectory", em_Val_from(path), em_Val_from(options), em_Val_from(successCallback)));
}


jb_Undefined FileSystemDirectoryEntry_getDirectory4(FileSystemDirectoryEntry* self , jb_USVString * path, FileSystemFlags * options, jb_Function * successCallback, jb_Function * errorCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(FileSystemEntry_as_val(self->inner), "getDirectory", em_Val_from(path), em_Val_from(options), em_Val_from(successCallback), em_Val_from(errorCallback)));
}

