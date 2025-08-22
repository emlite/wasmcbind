#include <webcbind/ScrollTimelineOptions.h>

#include <webcbind/Element.h>

DEFINE_EMLITE_TYPE(ScrollTimelineOptions, em_Val);


Element ScrollTimelineOptions_source(const ScrollTimelineOptions *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), em_Val_from("source")));
}


void ScrollTimelineOptions_set_source(ScrollTimelineOptions* self, Element * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}


ScrollAxis ScrollTimelineOptions_axis(const ScrollTimelineOptions *self) {
    return em_Val_as(ScrollAxis, em_Val_get(em_Val_as_val(self->inner), em_Val_from("axis")));
}


void ScrollTimelineOptions_set_axis(ScrollTimelineOptions* self, ScrollAxis * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("axis"), em_Val_from(value));
}


ScrollTimelineOptions ScrollTimelineOptions_new() {
    em_Val obj = em_Val_object();
    return ScrollTimelineOptions_from_val(&obj);
}

