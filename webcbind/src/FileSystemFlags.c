#include <webcbind/FileSystemFlags.h>

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


FileSystemFlags FileSystemFlags_new() {
    em_Val obj = em_Val_object();
    return FileSystemFlags_from_val(&obj);
}

