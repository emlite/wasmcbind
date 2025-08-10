#include <webbind/FileSystemHandle.h>

#include <webbind/FileSystemHandlePermissionDescriptor.h>

DEFINE_EMLITE_TYPE(FileSystemHandle, em_Val);


FileSystemHandleKind FileSystemHandle_kind(const FileSystemHandle *self) {
    return em_Val_as(FileSystemHandleKind, em_Val_get(em_Val_as_val(self->inner), em_Val_from("kind")));
}


jb_String FileSystemHandle_name(const FileSystemHandle *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


jb_Promise FileSystemHandle_isSameEntry(FileSystemHandle* self , FileSystemHandle * other) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "isSameEntry", em_Val_from(other)));
}


jb_Promise FileSystemHandle_queryPermission0(FileSystemHandle* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "queryPermission"));
}


jb_Promise FileSystemHandle_queryPermission1(FileSystemHandle* self , FileSystemHandlePermissionDescriptor * descriptor) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "queryPermission", em_Val_from(descriptor)));
}


jb_Promise FileSystemHandle_requestPermission0(FileSystemHandle* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestPermission"));
}


jb_Promise FileSystemHandle_requestPermission1(FileSystemHandle* self , FileSystemHandlePermissionDescriptor * descriptor) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestPermission", em_Val_from(descriptor)));
}

