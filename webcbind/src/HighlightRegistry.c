#include <webcbind/HighlightRegistry.h>

#include <webcbind/HighlightHitResult.h>
#include <webcbind/HighlightsFromPointOptions.h>

DEFINE_EMLITE_TYPE(HighlightRegistry, em_Val);


jb_Array HighlightRegistry_highlightsFromPoint0(HighlightRegistry* self , float x, float y) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "highlightsFromPoint", em_Val_from(x), em_Val_from(y)));
}


jb_Array HighlightRegistry_highlightsFromPoint1(HighlightRegistry* self , float x, float y, HighlightsFromPointOptions * options) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "highlightsFromPoint", em_Val_from(x), em_Val_from(y), em_Val_from(options)));
}

