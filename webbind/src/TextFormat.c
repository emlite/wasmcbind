#include <webbind/TextFormat.h>

#include <webbind/TextFormatInit.h>

DEFINE_EMLITE_TYPE(TextFormat, em_Val);


TextFormat TextFormat_new0() {
        em_Val vv = em_Val_new(em_Val_global("TextFormat") );
        return TextFormat_from_val(&vv);
      }


TextFormat TextFormat_new1(TextFormatInit * options) {
        em_Val vv = em_Val_new(em_Val_global("TextFormat") , em_Val_from(options));
        return TextFormat_from_val(&vv);
      }


unsigned long TextFormat_rangeStart(const TextFormat *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeStart")));
}


unsigned long TextFormat_rangeEnd(const TextFormat *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeEnd")));
}


UnderlineStyle TextFormat_underlineStyle(const TextFormat *self) {
    return em_Val_as(UnderlineStyle, em_Val_get(em_Val_as_val(self->inner), em_Val_from("underlineStyle")));
}


UnderlineThickness TextFormat_underlineThickness(const TextFormat *self) {
    return em_Val_as(UnderlineThickness, em_Val_get(em_Val_as_val(self->inner), em_Val_from("underlineThickness")));
}

