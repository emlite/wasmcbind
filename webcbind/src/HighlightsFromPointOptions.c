#include <webcbind/HighlightsFromPointOptions.h>

#include <webcbind/ShadowRoot.h>

DEFINE_EMLITE_TYPE(HighlightsFromPointOptions, em_Val);


jb_Array HighlightsFromPointOptions_shadowRoots(const HighlightsFromPointOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowRoots")));
}


void HighlightsFromPointOptions_set_shadowRoots(HighlightsFromPointOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowRoots"), em_Val_from(value));
}


HighlightsFromPointOptions HighlightsFromPointOptions_new() {
    em_Val obj = em_Val_object();
    return HighlightsFromPointOptions_from_val(&obj);
}

