#include <webbind/FileSystemPermissionDescriptor.h>

#include <webbind/FileSystemHandle.h>

DEFINE_EMLITE_TYPE(FileSystemPermissionDescriptor, PermissionDescriptor);


FileSystemHandle FileSystemPermissionDescriptor_handle(const FileSystemPermissionDescriptor *self) {
    return em_Val_as(FileSystemHandle, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("handle")));
}


void FileSystemPermissionDescriptor_set_handle(FileSystemPermissionDescriptor* self, FileSystemHandle * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("handle"), em_Val_from(value));
}


FileSystemPermissionMode FileSystemPermissionDescriptor_mode(const FileSystemPermissionDescriptor *self) {
    return em_Val_as(FileSystemPermissionMode, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("mode")));
}


void FileSystemPermissionDescriptor_set_mode(FileSystemPermissionDescriptor* self, FileSystemPermissionMode * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


FileSystemPermissionDescriptor FileSystemPermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return FileSystemPermissionDescriptor_from_val(&obj);
}

