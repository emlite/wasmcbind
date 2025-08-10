#include <webbind/TextFormatInit.h>

DEFINE_EMLITE_TYPE(TextFormatInit, em_Val);


unsigned long TextFormatInit_rangeStart(const TextFormatInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeStart")));
}


void TextFormatInit_set_rangeStart(TextFormatInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rangeStart"), em_Val_from(value));
}


unsigned long TextFormatInit_rangeEnd(const TextFormatInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeEnd")));
}


void TextFormatInit_set_rangeEnd(TextFormatInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rangeEnd"), em_Val_from(value));
}


UnderlineStyle TextFormatInit_underlineStyle(const TextFormatInit *self) {
    return em_Val_as(UnderlineStyle, em_Val_get(em_Val_as_val(self->inner), em_Val_from("underlineStyle")));
}


void TextFormatInit_set_underlineStyle(TextFormatInit* self, UnderlineStyle * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("underlineStyle"), em_Val_from(value));
}


UnderlineThickness TextFormatInit_underlineThickness(const TextFormatInit *self) {
    return em_Val_as(UnderlineThickness, em_Val_get(em_Val_as_val(self->inner), em_Val_from("underlineThickness")));
}


void TextFormatInit_set_underlineThickness(TextFormatInit* self, UnderlineThickness * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("underlineThickness"), em_Val_from(value));
}


TextFormatInit TextFormatInit_new() {
    em_Val obj = em_Val_object();
    return TextFormatInit_from_val(&obj);
}

