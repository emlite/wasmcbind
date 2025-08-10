#include <webbind/HandwritingDrawingSegment.h>

DEFINE_EMLITE_TYPE(HandwritingDrawingSegment, em_Val);


unsigned long HandwritingDrawingSegment_strokeIndex(const HandwritingDrawingSegment *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("strokeIndex")));
}


void HandwritingDrawingSegment_set_strokeIndex(HandwritingDrawingSegment* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("strokeIndex"), em_Val_from(value));
}


unsigned long HandwritingDrawingSegment_beginPointIndex(const HandwritingDrawingSegment *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("beginPointIndex")));
}


void HandwritingDrawingSegment_set_beginPointIndex(HandwritingDrawingSegment* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("beginPointIndex"), em_Val_from(value));
}


unsigned long HandwritingDrawingSegment_endPointIndex(const HandwritingDrawingSegment *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endPointIndex")));
}


void HandwritingDrawingSegment_set_endPointIndex(HandwritingDrawingSegment* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("endPointIndex"), em_Val_from(value));
}


HandwritingDrawingSegment HandwritingDrawingSegment_new() {
    em_Val obj = em_Val_object();
    return HandwritingDrawingSegment_from_val(&obj);
}

