#include <webbind/TextUpdateEventInit.h>

DEFINE_EMLITE_TYPE(TextUpdateEventInit, EventInit);


unsigned long TextUpdateEventInit_updateRangeStart(const TextUpdateEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("updateRangeStart")));
}


void TextUpdateEventInit_set_updateRangeStart(TextUpdateEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("updateRangeStart"), em_Val_from(value));
}


unsigned long TextUpdateEventInit_updateRangeEnd(const TextUpdateEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("updateRangeEnd")));
}


void TextUpdateEventInit_set_updateRangeEnd(TextUpdateEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("updateRangeEnd"), em_Val_from(value));
}


jb_String TextUpdateEventInit_text(const TextUpdateEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("text")));
}


void TextUpdateEventInit_set_text(TextUpdateEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("text"), em_Val_from(value));
}


unsigned long TextUpdateEventInit_selectionStart(const TextUpdateEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("selectionStart")));
}


void TextUpdateEventInit_set_selectionStart(TextUpdateEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("selectionStart"), em_Val_from(value));
}


unsigned long TextUpdateEventInit_selectionEnd(const TextUpdateEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("selectionEnd")));
}


void TextUpdateEventInit_set_selectionEnd(TextUpdateEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("selectionEnd"), em_Val_from(value));
}


unsigned long TextUpdateEventInit_compositionStart(const TextUpdateEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("compositionStart")));
}


void TextUpdateEventInit_set_compositionStart(TextUpdateEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("compositionStart"), em_Val_from(value));
}


unsigned long TextUpdateEventInit_compositionEnd(const TextUpdateEventInit *self) {
    return em_Val_as(unsigned long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("compositionEnd")));
}


void TextUpdateEventInit_set_compositionEnd(TextUpdateEventInit* self, unsigned long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("compositionEnd"), em_Val_from(value));
}


TextUpdateEventInit TextUpdateEventInit_new() {
    em_Val obj = em_Val_object();
    return TextUpdateEventInit_from_val(&obj);
}

