#include <webcbind/HandwritingDrawing.h>

#include <webcbind/HandwritingStroke.h>
#include <webcbind/HandwritingPrediction.h>

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

