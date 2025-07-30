#include <webbind/HandwritingDrawing.h>
#include <webbind/HandwritingStroke.h>


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

DEFINE_EMLITE_TYPE(HandwritingDrawing, em_Val);


jb_Undefined HandwritingDrawing_addStroke(HandwritingDrawing* self , HandwritingStroke * stroke) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addStroke", em_Val_from(stroke)));
}


jb_Undefined HandwritingDrawing_removeStroke(HandwritingDrawing* self , HandwritingStroke * stroke) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeStroke", em_Val_from(stroke)));
}


jb_Undefined HandwritingDrawing_clear(HandwritingDrawing* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clear"));
}


jb_Array HandwritingDrawing_getStrokes(HandwritingDrawing* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getStrokes"));
}


jb_Promise HandwritingDrawing_getPrediction(HandwritingDrawing* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getPrediction"));
}

