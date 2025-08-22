#include <webcbind/TextFormatUpdateEventInit.h>

#include <webcbind/TextFormat.h>

DEFINE_EMLITE_TYPE(TextFormatUpdateEventInit, EventInit);


jb_Array TextFormatUpdateEventInit_textFormats(const TextFormatUpdateEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(EventInit_as_val(self->inner), em_Val_from("textFormats")));
}


void TextFormatUpdateEventInit_set_textFormats(TextFormatUpdateEventInit* self, jb_Array * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("textFormats"), em_Val_from(value));
}


TextFormatUpdateEventInit TextFormatUpdateEventInit_new() {
    em_Val obj = em_Val_object();
    return TextFormatUpdateEventInit_from_val(&obj);
}

