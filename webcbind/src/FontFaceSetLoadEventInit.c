#include <webcbind/FontFaceSetLoadEventInit.h>

#include <webcbind/FontFace.h>

DEFINE_EMLITE_TYPE(FontFaceSetLoadEventInit, EventInit);


jb_Array FontFaceSetLoadEventInit_fontfaces(const FontFaceSetLoadEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(EventInit_as_val(self->inner), em_Val_from("fontfaces")));
}


void FontFaceSetLoadEventInit_set_fontfaces(FontFaceSetLoadEventInit* self, jb_Array * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("fontfaces"), em_Val_from(value));
}


FontFaceSetLoadEventInit FontFaceSetLoadEventInit_new() {
    em_Val obj = em_Val_object();
    return FontFaceSetLoadEventInit_from_val(&obj);
}

