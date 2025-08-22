#include <webcbind/File.h>

#include <webcbind/FilePropertyBag.h>

DEFINE_EMLITE_TYPE(File, Blob);


File File_new0(jb_Array * fileBits, jb_String * fileName) {
        em_Val vv = em_Val_new(em_Val_global("File") , em_Val_from(fileBits), em_Val_from(fileName));
        return File_from_val(&vv);
      }


File File_new1(jb_Array * fileBits, jb_String * fileName, FilePropertyBag * options) {
        em_Val vv = em_Val_new(em_Val_global("File") , em_Val_from(fileBits), em_Val_from(fileName), em_Val_from(options));
        return File_from_val(&vv);
      }


jb_String File_name(const File *self) {
    return em_Val_as(jb_String, em_Val_get(Blob_as_val(self->inner), em_Val_from("name")));
}


long long File_lastModified(const File *self) {
    return em_Val_as(long long, em_Val_get(Blob_as_val(self->inner), em_Val_from("lastModified")));
}


jb_String File_webkitRelativePath(const File *self) {
    return em_Val_as(jb_String, em_Val_get(Blob_as_val(self->inner), em_Val_from("webkitRelativePath")));
}

