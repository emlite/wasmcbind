#include <webbind/Highlight.h>
#include <webbind/AbstractRange.h>


DEFINE_EMLITE_TYPE(Highlight, em_Val);


Highlight Highlight_new(const AbstractRange* initialRanges) : em_Val(em_Val_global("Highlight").new_(em_Val_from(initialRanges))) {
        return Highlight(em_Val_new(em_Val_global("Highlight", em_Val_from(initialRanges)));
      }


long Highlight_priority(const Highlight *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), "priority"));
}


void Highlight_set_priority(Highlight* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), "priority", value);
}


HighlightType Highlight_type(const Highlight *self) {
    return em_Val_as(HighlightType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


void Highlight_set_type(Highlight* self, const HighlightType* value) {
    em_Val_set(em_Val_as_val(self->inner), "type", value);
}

