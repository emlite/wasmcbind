#include <webbind/FileSystem.h>

#include <webbind/FileSystemDirectoryEntry.h>

DEFINE_EMLITE_TYPE(FileSystem, em_Val);


jb_String FileSystem_name(const FileSystem *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


FileSystemDirectoryEntry FileSystem_root(const FileSystem *self) {
    return em_Val_as(FileSystemDirectoryEntry, em_Val_get(em_Val_as_val(self->inner), em_Val_from("root")));
}

