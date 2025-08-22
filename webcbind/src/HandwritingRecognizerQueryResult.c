#include <webcbind/HandwritingRecognizerQueryResult.h>

DEFINE_EMLITE_TYPE(HandwritingRecognizerQueryResult, em_Val);


bool HandwritingRecognizerQueryResult_textAlternatives(const HandwritingRecognizerQueryResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("textAlternatives")));
}


void HandwritingRecognizerQueryResult_set_textAlternatives(HandwritingRecognizerQueryResult* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("textAlternatives"), em_Val_from(value));
}


bool HandwritingRecognizerQueryResult_textSegmentation(const HandwritingRecognizerQueryResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("textSegmentation")));
}


void HandwritingRecognizerQueryResult_set_textSegmentation(HandwritingRecognizerQueryResult* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("textSegmentation"), em_Val_from(value));
}


HandwritingHintsQueryResult HandwritingRecognizerQueryResult_hints(const HandwritingRecognizerQueryResult *self) {
    return em_Val_as(HandwritingHintsQueryResult, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hints")));
}


void HandwritingRecognizerQueryResult_set_hints(HandwritingRecognizerQueryResult* self, HandwritingHintsQueryResult * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hints"), em_Val_from(value));
}


HandwritingRecognizerQueryResult HandwritingRecognizerQueryResult_new() {
    em_Val obj = em_Val_object();
    return HandwritingRecognizerQueryResult_from_val(&obj);
}

