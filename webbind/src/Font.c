#include <webbind/Font.h>


DEFINE_EMLITE_TYPE(Font, em_Val);


jb_DOMString Font_name(const Font *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


unsigned long Font_glyphsRendered(const Font *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "glyphsRendered"));
}

