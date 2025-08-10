#include <webbind/FileSystemDirectoryReader.h>

DEFINE_EMLITE_TYPE(FileSystemDirectoryReader, em_Val);


jb_Undefined FileSystemDirectoryReader_readEntries0(FileSystemDirectoryReader* self , jb_Function * successCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "readEntries", em_Val_from(successCallback)));
}


jb_Undefined FileSystemDirectoryReader_readEntries1(FileSystemDirectoryReader* self , jb_Function * successCallback, jb_Function * errorCallback) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "readEntries", em_Val_from(successCallback), em_Val_from(errorCallback)));
}

