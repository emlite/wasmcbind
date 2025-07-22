#include <webbind/FontFacePalette.h>


DEFINE_EMLITE_TYPE(FontFacePalette, em_Val);


unsigned long FontFacePalette_length(const FontFacePalette *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "length"));
}


bool FontFacePalette_usableWithLightBackground(const FontFacePalette *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "usableWithLightBackground"));
}


bool FontFacePalette_usableWithDarkBackground(const FontFacePalette *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "usableWithDarkBackground"));
}

