#include <webbind/File.h>


DEFINE_EMLITE_TYPE(File, Blob);


File File_new(const jb_Sequence* fileBits, const jb_USVString* fileName) : Blob(em_Val_global("File").new_(em_Val_from(fileBits), em_Val_from(fileName))) {
        return File(em_Val_new(em_Val_global("File", em_Val_from(fileBits), em_Val_from(fileName)));
      }


File File_new(const jb_Sequence* fileBits, const jb_USVString* fileName, const jb_Any* options) : Blob(em_Val_global("File").new_(em_Val_from(fileBits), em_Val_from(fileName), em_Val_from(options))) {
        return File(em_Val_new(em_Val_global("File", em_Val_from(fileBits), em_Val_from(fileName), em_Val_from(options)));
      }


jb_DOMString File_name(const File *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Blob_as_val(self->inner), "name"));
}


long long File_lastModified(const File *self) {
    return em_Val_as(long long, em_Val_get(Blob_as_val(self->inner), "lastModified"));
}


jb_USVString File_webkitRelativePath(const File *self) {
    return em_Val_as(jb_USVString, em_Val_get(Blob_as_val(self->inner), "webkitRelativePath"));
}

