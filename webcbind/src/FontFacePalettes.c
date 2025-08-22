#include <webcbind/FontFacePalettes.h>

#include <webcbind/FontFacePalette.h>

DEFINE_EMLITE_TYPE(FontFacePalettes, em_Val);


unsigned long FontFacePalettes_length(const FontFacePalettes *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}

