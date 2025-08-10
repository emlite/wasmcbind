#include <webbind/Highlight.h>

#include <webbind/AbstractRange.h>

DEFINE_EMLITE_TYPE(Highlight, em_Val);


Highlight Highlight_new(AbstractRange * initialRanges) {
        em_Val vv = em_Val_new(em_Val_global("Highlight") , em_Val_from(initialRanges));
        return Highlight_from_val(&vv);
      }


long Highlight_priority(const Highlight *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("priority")));
}


void Highlight_set_priority(Highlight* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("priority"), em_Val_from(value));
}


HighlightType Highlight_type(const Highlight *self) {
    return em_Val_as(HighlightType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void Highlight_set_type(Highlight* self, HighlightType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}

