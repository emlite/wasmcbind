#include <webbind/BeforeUnloadEvent.h>


DEFINE_EMLITE_TYPE(BeforeUnloadEvent, Event);


jb_DOMString BeforeUnloadEvent_returnValue(const BeforeUnloadEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "returnValue"));
}


void BeforeUnloadEvent_set_returnValue(BeforeUnloadEvent* self, const jb_DOMString* value) {
    em_Val_set(Event_as_val(self->inner), "returnValue", value);
}

