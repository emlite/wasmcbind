#include <webcbind/FileSystemCreateWritableOptions.h>

DEFINE_EMLITE_TYPE(FileSystemCreateWritableOptions, em_Val);


bool FileSystemCreateWritableOptions_keepExistingData(const FileSystemCreateWritableOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keepExistingData")));
}


void FileSystemCreateWritableOptions_set_keepExistingData(FileSystemCreateWritableOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keepExistingData"), em_Val_from(value));
}


FileSystemCreateWritableOptions FileSystemCreateWritableOptions_new() {
    em_Val obj = em_Val_object();
    return FileSystemCreateWritableOptions_from_val(&obj);
}

