#include <webbind/ValueEvent.h>


DEFINE_EMLITE_TYPE(ValueEvent, Event);


ValueEvent ValueEvent_new(const jb_DOMString* type) : Event(em_Val_global("ValueEvent").new_(em_Val_from(type))) {
        return ValueEvent(em_Val_new(em_Val_global("ValueEvent", em_Val_from(type)));
      }


ValueEvent ValueEvent_new(const jb_DOMString* type, const jb_Any* initDict) : Event(em_Val_global("ValueEvent").new_(em_Val_from(type), em_Val_from(initDict))) {
        return ValueEvent(em_Val_new(em_Val_global("ValueEvent", em_Val_from(type), em_Val_from(initDict)));
      }


jb_Any ValueEvent_value(const ValueEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "value"));
}

