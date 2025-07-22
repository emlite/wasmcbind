#include <webbind/PresentationAvailability.h>


DEFINE_EMLITE_TYPE(PresentationAvailability, EventTarget);


bool PresentationAvailability_value(const PresentationAvailability *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "value"));
}


jb_Any PresentationAvailability_onchange(const PresentationAvailability *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onchange"));
}


void PresentationAvailability_set_onchange(PresentationAvailability* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onchange", value);
}

