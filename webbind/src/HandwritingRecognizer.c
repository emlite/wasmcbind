#include <webbind/HandwritingRecognizer.h>

#include <webbind/HandwritingDrawing.h>
#include <webbind/HandwritingHints.h>

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

