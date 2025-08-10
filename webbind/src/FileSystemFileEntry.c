#include <webbind/FileSystemFileEntry.h>

DEFINE_EMLITE_TYPE(FileSystemFileEntry, FileSystemEntry);


jb_Undefined FileSystemFileEntry_file0(FileSystemFileEntry* self , jb_Function * successCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(FileSystemEntry_as_val(self->inner), "file", em_Val_from(successCallback)));
}


jb_Undefined FileSystemFileEntry_file1(FileSystemFileEntry* self , jb_Function * successCallback, jb_Function * errorCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(FileSystemEntry_as_val(self->inner), "file", em_Val_from(successCallback), em_Val_from(errorCallback)));
}

