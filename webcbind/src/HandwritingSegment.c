#include <webcbind/HandwritingSegment.h>

DEFINE_EMLITE_TYPE(HandwritingSegment, em_Val);


jb_String HandwritingSegment_grapheme(const HandwritingSegment *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("grapheme")));
}


void HandwritingSegment_set_grapheme(HandwritingSegment* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("grapheme"), em_Val_from(value));
}


unsigned long HandwritingSegment_beginIndex(const HandwritingSegment *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("beginIndex")));
}


void HandwritingSegment_set_beginIndex(HandwritingSegment* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("beginIndex"), em_Val_from(value));
}


unsigned long HandwritingSegment_endIndex(const HandwritingSegment *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endIndex")));
}


void HandwritingSegment_set_endIndex(HandwritingSegment* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("endIndex"), em_Val_from(value));
}


jb_Array HandwritingSegment_drawingSegments(const HandwritingSegment *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("drawingSegments")));
}


void HandwritingSegment_set_drawingSegments(HandwritingSegment* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("drawingSegments"), em_Val_from(value));
}


HandwritingSegment HandwritingSegment_new() {
    em_Val obj = em_Val_object();
    return HandwritingSegment_from_val(&obj);
}

