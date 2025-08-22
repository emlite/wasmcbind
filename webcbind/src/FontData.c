#include <webcbind/FontData.h>

#include <webcbind/Blob.h>

DEFINE_EMLITE_TYPE(FontData, em_Val);


jb_Promise FontData_blob(FontData* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "blob"));
}


jb_String FontData_postscriptName(const FontData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("postscriptName")));
}


jb_String FontData_fullName(const FontData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fullName")));
}


jb_String FontData_family(const FontData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("family")));
}


jb_String FontData_style(const FontData *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("style")));
}

