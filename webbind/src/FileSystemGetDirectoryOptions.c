#include <webbind/FileSystemGetDirectoryOptions.h>

DEFINE_EMLITE_TYPE(FileSystemGetDirectoryOptions, em_Val);


bool FileSystemGetDirectoryOptions_create(const FileSystemGetDirectoryOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("create")));
}


void FileSystemGetDirectoryOptions_set_create(FileSystemGetDirectoryOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("create"), em_Val_from(value));
}


FileSystemGetDirectoryOptions FileSystemGetDirectoryOptions_new() {
    em_Val obj = em_Val_object();
    return FileSystemGetDirectoryOptions_from_val(&obj);
}

