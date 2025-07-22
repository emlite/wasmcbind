#include <webbind/HandwritingRecognizer.h>
#include <webbind/HandwritingDrawing.h>


DEFINE_EMLITE_TYPE(HandwritingHints, em_Val);


jb_DOMString HandwritingHints_recognitionType(const HandwritingHints *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "recognitionType"));
}


void HandwritingHints_set_recognitionType(HandwritingHints* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "recognitionType", value);
}


jb_DOMString HandwritingHints_inputType(const HandwritingHints *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "inputType"));
}


void HandwritingHints_set_inputType(HandwritingHints* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "inputType", value);
}


jb_DOMString HandwritingHints_textContext(const HandwritingHints *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "textContext"));
}


void HandwritingHints_set_textContext(HandwritingHints* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "textContext", value);
}


unsigned long HandwritingHints_alternatives(const HandwritingHints *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "alternatives"));
}


void HandwritingHints_set_alternatives(HandwritingHints* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "alternatives", value);
}

DEFINE_EMLITE_TYPE(HandwritingRecognizer, em_Val);


HandwritingDrawing HandwritingRecognizer_startDrawing(HandwritingRecognizer* self ) {
    return em_Val_as(HandwritingDrawing, em_Val_call(em_Val_as_val(self->inner), "startDrawing"));
}


HandwritingDrawing HandwritingRecognizer_startDrawing(HandwritingRecognizer* self , const HandwritingHints* hints) {
    return em_Val_as(HandwritingDrawing, em_Val_call(em_Val_as_val(self->inner), "startDrawing", em_Val_from(hints)));
}


jb_Undefined HandwritingRecognizer_finish(HandwritingRecognizer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "finish"));
}

