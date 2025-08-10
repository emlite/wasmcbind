#include <webbind/HighlightHitResult.h>

#include <webbind/Highlight.h>
#include <webbind/AbstractRange.h>

DEFINE_EMLITE_TYPE(HighlightHitResult, em_Val);


Highlight HighlightHitResult_highlight(const HighlightHitResult *self) {
    return em_Val_as(Highlight, em_Val_get(em_Val_as_val(self->inner), em_Val_from("highlight")));
}


void HighlightHitResult_set_highlight(HighlightHitResult* self, Highlight * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("highlight"), em_Val_from(value));
}


jb_Array HighlightHitResult_ranges(const HighlightHitResult *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ranges")));
}


void HighlightHitResult_set_ranges(HighlightHitResult* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ranges"), em_Val_from(value));
}


HighlightHitResult HighlightHitResult_new() {
    em_Val obj = em_Val_object();
    return HighlightHitResult_from_val(&obj);
}

