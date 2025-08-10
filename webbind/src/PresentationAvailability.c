#include <webbind/PresentationAvailability.h>

DEFINE_EMLITE_TYPE(PresentationAvailability, EventTarget);


bool PresentationAvailability_value(const PresentationAvailability *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("value")));
}


jb_Any PresentationAvailability_onchange(const PresentationAvailability *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onchange")));
}


void PresentationAvailability_set_onchange(PresentationAvailability* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onchange"), em_Val_from(value));
}

