#include <webcbind/BeforeUnloadEvent.h>

DEFINE_EMLITE_TYPE(BeforeUnloadEvent, Event);


jb_String BeforeUnloadEvent_returnValue(const BeforeUnloadEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("returnValue")));
}


void BeforeUnloadEvent_set_returnValue(BeforeUnloadEvent* self, jb_String * value) {
    em_Val_set(Event_as_val(self->inner), em_Val_from("returnValue"), em_Val_from(value));
}

