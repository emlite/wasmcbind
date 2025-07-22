#include <webbind/FileSystemHandle.h>


DEFINE_EMLITE_TYPE(FileSystemHandlePermissionDescriptor, em_Val);


FileSystemPermissionMode FileSystemHandlePermissionDescriptor_mode(const FileSystemHandlePermissionDescriptor *self) {
    return em_Val_as(FileSystemPermissionMode, em_Val_get(em_Val_as_val(self->inner), "mode"));
}


void FileSystemHandlePermissionDescriptor_set_mode(FileSystemHandlePermissionDescriptor* self, const FileSystemPermissionMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "mode", value);
}

DEFINE_EMLITE_TYPE(FileSystemHandle, em_Val);


FileSystemHandleKind FileSystemHandle_kind(const FileSystemHandle *self) {
    return em_Val_as(FileSystemHandleKind, em_Val_get(em_Val_as_val(self->inner), "kind"));
}


jb_USVString FileSystemHandle_name(const FileSystemHandle *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


jb_Promise FileSystemHandle_isSameEntry(FileSystemHandle* self , const FileSystemHandle* other) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "isSameEntry", em_Val_from(other)));
}


jb_Promise FileSystemHandle_queryPermission(FileSystemHandle* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "queryPermission"));
}


jb_Promise FileSystemHandle_queryPermission(FileSystemHandle* self , const FileSystemHandlePermissionDescriptor* descriptor) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "queryPermission", em_Val_from(descriptor)));
}


jb_Promise FileSystemHandle_requestPermission(FileSystemHandle* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestPermission"));
}


jb_Promise FileSystemHandle_requestPermission(FileSystemHandle* self , const FileSystemHandlePermissionDescriptor* descriptor) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestPermission", em_Val_from(descriptor)));
}

