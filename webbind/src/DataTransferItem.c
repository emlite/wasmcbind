#include <webbind/DataTransferItem.h>
#include <webbind/File.h>
#include <webbind/FileSystemEntry.h>
#include <webbind/FileSystemHandle.h>


DEFINE_EMLITE_TYPE(DataTransferItem, em_Val);


jb_String DataTransferItem_kind(const DataTransferItem *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("kind")));
}


jb_String DataTransferItem_type(const DataTransferItem *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


jb_Undefined DataTransferItem_getAsString(DataTransferItem* self , jb_Any * callback) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "getAsString", em_Val_from(callback)));
}


File DataTransferItem_getAsFile(DataTransferItem* self ) {
    return em_Val_as(File, em_Val_call(em_Val_as_val(self->inner), "getAsFile"));
}


FileSystemEntry DataTransferItem_webkitGetAsEntry(DataTransferItem* self ) {
    return em_Val_as(FileSystemEntry, em_Val_call(em_Val_as_val(self->inner), "webkitGetAsEntry"));
}


jb_Promise DataTransferItem_getAsFileSystemHandle(DataTransferItem* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getAsFileSystemHandle"));
}

