#include <webcbind/Font.h>

DEFINE_EMLITE_TYPE(Font, em_Val);


jb_String Font_name(const Font *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


unsigned long Font_glyphsRendered(const Font *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("glyphsRendered")));
}

