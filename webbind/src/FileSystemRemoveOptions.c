#include <webbind/FileSystemRemoveOptions.h>

DEFINE_EMLITE_TYPE(FileSystemRemoveOptions, em_Val);


bool FileSystemRemoveOptions_recursive(const FileSystemRemoveOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recursive")));
}


void FileSystemRemoveOptions_set_recursive(FileSystemRemoveOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recursive"), em_Val_from(value));
}


FileSystemRemoveOptions FileSystemRemoveOptions_new() {
    em_Val obj = em_Val_object();
    return FileSystemRemoveOptions_from_val(&obj);
}

