#include <webbind/FilePropertyBag.h>

DEFINE_EMLITE_TYPE(FilePropertyBag, BlobPropertyBag);


long long FilePropertyBag_lastModified(const FilePropertyBag *self) {
    return em_Val_as(long long, em_Val_get(BlobPropertyBag_as_val(self->inner), em_Val_from("lastModified")));
}


void FilePropertyBag_set_lastModified(FilePropertyBag* self, long long value) {
    em_Val_set(BlobPropertyBag_as_val(self->inner), em_Val_from("lastModified"), em_Val_from(value));
}


FilePropertyBag FilePropertyBag_new() {
    em_Val obj = em_Val_object();
    return FilePropertyBag_from_val(&obj);
}

