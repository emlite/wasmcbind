#include <webbind/FontData.h>
#include <webbind/Blob.h>


DEFINE_EMLITE_TYPE(FontData, em_Val);


jb_Promise FontData_blob(FontData* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "blob"));
}


jb_USVString FontData_postscriptName(const FontData *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "postscriptName"));
}


jb_USVString FontData_fullName(const FontData *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "fullName"));
}


jb_USVString FontData_family(const FontData *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "family"));
}


jb_USVString FontData_style(const FontData *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "style"));
}

