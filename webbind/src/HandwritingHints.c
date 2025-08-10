#include <webbind/HandwritingHints.h>

DEFINE_EMLITE_TYPE(HandwritingHints, em_Val);


jb_String HandwritingHints_recognitionType(const HandwritingHints *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recognitionType")));
}


void HandwritingHints_set_recognitionType(HandwritingHints* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recognitionType"), em_Val_from(value));
}


jb_String HandwritingHints_inputType(const HandwritingHints *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputType")));
}


void HandwritingHints_set_inputType(HandwritingHints* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inputType"), em_Val_from(value));
}


jb_String HandwritingHints_textContext(const HandwritingHints *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("textContext")));
}


void HandwritingHints_set_textContext(HandwritingHints* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("textContext"), em_Val_from(value));
}


unsigned long HandwritingHints_alternatives(const HandwritingHints *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alternatives")));
}


void HandwritingHints_set_alternatives(HandwritingHints* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alternatives"), em_Val_from(value));
}


HandwritingHints HandwritingHints_new() {
    em_Val obj = em_Val_object();
    return HandwritingHints_from_val(&obj);
}

