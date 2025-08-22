#include <webcbind/ColorSelectionResult.h>

DEFINE_EMLITE_TYPE(ColorSelectionResult, em_Val);


jb_String ColorSelectionResult_sRGBHex(const ColorSelectionResult *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sRGBHex")));
}


void ColorSelectionResult_set_sRGBHex(ColorSelectionResult* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sRGBHex"), em_Val_from(value));
}


ColorSelectionResult ColorSelectionResult_new() {
    em_Val obj = em_Val_object();
    return ColorSelectionResult_from_val(&obj);
}

