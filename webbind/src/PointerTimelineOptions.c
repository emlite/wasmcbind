#include <webbind/PointerTimelineOptions.h>

#include <webbind/Element.h>

DEFINE_EMLITE_TYPE(PointerTimelineOptions, em_Val);


Element PointerTimelineOptions_source(const PointerTimelineOptions *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), em_Val_from("source")));
}


void PointerTimelineOptions_set_source(PointerTimelineOptions* self, Element * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}


PointerAxis PointerTimelineOptions_axis(const PointerTimelineOptions *self) {
    return em_Val_as(PointerAxis, em_Val_get(em_Val_as_val(self->inner), em_Val_from("axis")));
}


void PointerTimelineOptions_set_axis(PointerTimelineOptions* self, PointerAxis * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("axis"), em_Val_from(value));
}


PointerTimelineOptions PointerTimelineOptions_new() {
    em_Val obj = em_Val_object();
    return PointerTimelineOptions_from_val(&obj);
}

