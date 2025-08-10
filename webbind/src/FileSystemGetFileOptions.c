#include <webbind/FileSystemGetFileOptions.h>

DEFINE_EMLITE_TYPE(FileSystemGetFileOptions, em_Val);


bool FileSystemGetFileOptions_create(const FileSystemGetFileOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("create")));
}


void FileSystemGetFileOptions_set_create(FileSystemGetFileOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("create"), em_Val_from(value));
}


FileSystemGetFileOptions FileSystemGetFileOptions_new() {
    em_Val obj = em_Val_object();
    return FileSystemGetFileOptions_from_val(&obj);
}

