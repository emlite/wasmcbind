#include <webbind/HandwritingRecognizer.h>
#include <webbind/HandwritingDrawing.h>


DEFINE_EMLITE_TYPE(HandwritingHints, em_Val);


jb_DOMString HandwritingHints_recognitionType(const HandwritingHints *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recognitionType")));
}


void HandwritingHints_set_recognitionType(HandwritingHints* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recognitionType"), em_Val_from(value));
}


jb_DOMString HandwritingHints_inputType(const HandwritingHints *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputType")));
}


void HandwritingHints_set_inputType(HandwritingHints* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inputType"), em_Val_from(value));
}


jb_DOMString HandwritingHints_textContext(const HandwritingHints *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("textContext")));
}


void HandwritingHints_set_textContext(HandwritingHints* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("textContext"), em_Val_from(value));
}


unsigned long HandwritingHints_alternatives(const HandwritingHints *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alternatives")));
}


void HandwritingHints_set_alternatives(HandwritingHints* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alternatives"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(HandwritingRecognizer, em_Val);


HandwritingDrawing HandwritingRecognizer_startDrawing0(HandwritingRecognizer* self ) {
    return em_Val_as(HandwritingDrawing, em_Val_call(em_Val_as_val(self->inner), "startDrawing"));
}


HandwritingDrawing HandwritingRecognizer_startDrawing1(HandwritingRecognizer* self , HandwritingHints * hints) {
    return em_Val_as(HandwritingDrawing, em_Val_call(em_Val_as_val(self->inner), "startDrawing", em_Val_from(hints)));
}


jb_Undefined HandwritingRecognizer_finish(HandwritingRecognizer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "finish"));
}

