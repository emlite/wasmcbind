#include <webbind/HandwritingPrediction.h>

DEFINE_EMLITE_TYPE(HandwritingPrediction, em_Val);


jb_String HandwritingPrediction_text(const HandwritingPrediction *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("text")));
}


void HandwritingPrediction_set_text(HandwritingPrediction* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("text"), em_Val_from(value));
}


jb_Array HandwritingPrediction_segmentationResult(const HandwritingPrediction *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("segmentationResult")));
}


void HandwritingPrediction_set_segmentationResult(HandwritingPrediction* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("segmentationResult"), em_Val_from(value));
}


HandwritingPrediction HandwritingPrediction_new() {
    em_Val obj = em_Val_object();
    return HandwritingPrediction_from_val(&obj);
}

