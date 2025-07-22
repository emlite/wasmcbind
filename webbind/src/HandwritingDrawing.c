#include <webbind/HandwritingDrawing.h>
#include <webbind/HandwritingStroke.h>


DEFINE_EMLITE_TYPE(HandwritingPrediction, em_Val);


jb_DOMString HandwritingPrediction_text(const HandwritingPrediction *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "text"));
}


void HandwritingPrediction_set_text(HandwritingPrediction* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "text", value);
}


jb_Sequence HandwritingPrediction_segmentationResult(const HandwritingPrediction *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "segmentationResult"));
}


void HandwritingPrediction_set_segmentationResult(HandwritingPrediction* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "segmentationResult", value);
}

DEFINE_EMLITE_TYPE(HandwritingDrawing, em_Val);


jb_Undefined HandwritingDrawing_addStroke(HandwritingDrawing* self , const HandwritingStroke* stroke) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addStroke", em_Val_from(stroke)));
}


jb_Undefined HandwritingDrawing_removeStroke(HandwritingDrawing* self , const HandwritingStroke* stroke) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeStroke", em_Val_from(stroke)));
}


jb_Undefined HandwritingDrawing_clear(HandwritingDrawing* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clear"));
}


jb_Sequence HandwritingDrawing_getStrokes(HandwritingDrawing* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getStrokes"));
}


jb_Promise HandwritingDrawing_getPrediction(HandwritingDrawing* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getPrediction"));
}

