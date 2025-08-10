#include <webbind/FileSystemReadWriteOptions.h>

DEFINE_EMLITE_TYPE(FileSystemReadWriteOptions, em_Val);


long long FileSystemReadWriteOptions_at(const FileSystemReadWriteOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("at")));
}


void FileSystemReadWriteOptions_set_at(FileSystemReadWriteOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("at"), em_Val_from(value));
}


FileSystemReadWriteOptions FileSystemReadWriteOptions_new() {
    em_Val obj = em_Val_object();
    return FileSystemReadWriteOptions_from_val(&obj);
}

