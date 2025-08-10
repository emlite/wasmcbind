#include <webbind/ViewTimelineOptions.h>

#include <webbind/Element.h>

DEFINE_EMLITE_TYPE(ViewTimelineOptions, em_Val);


Element ViewTimelineOptions_subject(const ViewTimelineOptions *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), em_Val_from("subject")));
}


void ViewTimelineOptions_set_subject(ViewTimelineOptions* self, Element * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("subject"), em_Val_from(value));
}


ScrollAxis ViewTimelineOptions_axis(const ViewTimelineOptions *self) {
    return em_Val_as(ScrollAxis, em_Val_get(em_Val_as_val(self->inner), em_Val_from("axis")));
}


void ViewTimelineOptions_set_axis(ViewTimelineOptions* self, ScrollAxis * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("axis"), em_Val_from(value));
}


jb_Any ViewTimelineOptions_inset(const ViewTimelineOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inset")));
}


void ViewTimelineOptions_set_inset(ViewTimelineOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inset"), em_Val_from(value));
}


ViewTimelineOptions ViewTimelineOptions_new() {
    em_Val obj = em_Val_object();
    return ViewTimelineOptions_from_val(&obj);
}

