#include <webbind/EditContextInit.h>

DEFINE_EMLITE_TYPE(EditContextInit, em_Val);


jb_String EditContextInit_text(const EditContextInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("text")));
}


void EditContextInit_set_text(EditContextInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("text"), em_Val_from(value));
}


unsigned long EditContextInit_selectionStart(const EditContextInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("selectionStart")));
}


void EditContextInit_set_selectionStart(EditContextInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("selectionStart"), em_Val_from(value));
}


unsigned long EditContextInit_selectionEnd(const EditContextInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("selectionEnd")));
}


void EditContextInit_set_selectionEnd(EditContextInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("selectionEnd"), em_Val_from(value));
}


EditContextInit EditContextInit_new() {
    em_Val obj = em_Val_object();
    return EditContextInit_from_val(&obj);
}

