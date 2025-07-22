#include <webbind/File.h>


DEFINE_EMLITE_TYPE(File, Blob);


File File_new0(jb_Sequence * fileBits, jb_USVString * fileName) {
        em_Val vv = em_Val_new(em_Val_global("File") , em_Val_from(fileBits), em_Val_from(fileName));
        return File_from_val(&vv);
      }


File File_new1(jb_Sequence * fileBits, jb_USVString * fileName, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("File") , em_Val_from(fileBits), em_Val_from(fileName), em_Val_from(options));
        return File_from_val(&vv);
      }


jb_DOMString File_name(const File *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Blob_as_val(self->inner), em_Val_from("name")));
}


long long File_lastModified(const File *self) {
    return em_Val_as(long long, em_Val_get(Blob_as_val(self->inner), em_Val_from("lastModified")));
}


jb_USVString File_webkitRelativePath(const File *self) {
    return em_Val_as(jb_USVString, em_Val_get(Blob_as_val(self->inner), em_Val_from("webkitRelativePath")));
}

