#include <webcbind/FileSystemHandlePermissionDescriptor.h>

DEFINE_EMLITE_TYPE(FileSystemHandlePermissionDescriptor, em_Val);


FileSystemPermissionMode FileSystemHandlePermissionDescriptor_mode(const FileSystemHandlePermissionDescriptor *self) {
    return em_Val_as(FileSystemPermissionMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void FileSystemHandlePermissionDescriptor_set_mode(FileSystemHandlePermissionDescriptor* self, FileSystemPermissionMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


FileSystemHandlePermissionDescriptor FileSystemHandlePermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return FileSystemHandlePermissionDescriptor_from_val(&obj);
}

