#include <webbind/TextFormat.h>


DEFINE_EMLITE_TYPE(TextFormat, em_Val);


TextFormat TextFormat_new() : em_Val(em_Val_global("TextFormat").new_()) {
        return TextFormat(em_Val_new(em_Val_global("TextFormat", ));
      }


TextFormat TextFormat_new(const jb_Any* options) : em_Val(em_Val_global("TextFormat").new_(em_Val_from(options))) {
        return TextFormat(em_Val_new(em_Val_global("TextFormat", em_Val_from(options)));
      }


unsigned long TextFormat_rangeStart(const TextFormat *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "rangeStart"));
}


unsigned long TextFormat_rangeEnd(const TextFormat *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "rangeEnd"));
}


UnderlineStyle TextFormat_underlineStyle(const TextFormat *self) {
    return em_Val_as(UnderlineStyle, em_Val_get(em_Val_as_val(self->inner), "underlineStyle"));
}


UnderlineThickness TextFormat_underlineThickness(const TextFormat *self) {
    return em_Val_as(UnderlineThickness, em_Val_get(em_Val_as_val(self->inner), "underlineThickness"));
}

