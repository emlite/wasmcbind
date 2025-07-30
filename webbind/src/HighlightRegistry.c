#include <webbind/HighlightRegistry.h>
#include <webbind/Highlight.h>
#include <webbind/ShadowRoot.h>
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

DEFINE_EMLITE_TYPE(HighlightsFromPointOptions, em_Val);


jb_Array HighlightsFromPointOptions_shadowRoots(const HighlightsFromPointOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowRoots")));
}


void HighlightsFromPointOptions_set_shadowRoots(HighlightsFromPointOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowRoots"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(HighlightRegistry, em_Val);


jb_Array HighlightRegistry_highlightsFromPoint0(HighlightRegistry* self , float x, float y) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "highlightsFromPoint", em_Val_from(x), em_Val_from(y)));
}


jb_Array HighlightRegistry_highlightsFromPoint1(HighlightRegistry* self , float x, float y, HighlightsFromPointOptions * options) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "highlightsFromPoint", em_Val_from(x), em_Val_from(y), em_Val_from(options)));
}

