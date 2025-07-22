#include <webbind/CloseEvent.h>


DEFINE_EMLITE_TYPE(CloseEvent, Event);


CloseEvent CloseEvent_new(const jb_DOMString* type) : Event(em_Val_global("CloseEvent").new_(em_Val_from(type))) {
        return CloseEvent(em_Val_new(em_Val_global("CloseEvent", em_Val_from(type)));
      }


CloseEvent CloseEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("CloseEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return CloseEvent(em_Val_new(em_Val_global("CloseEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


bool CloseEvent_wasClean(const CloseEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), "wasClean"));
}


unsigned short CloseEvent_code(const CloseEvent *self) {
    return em_Val_as(unsigned short, em_Val_get(Event_as_val(self->inner), "code"));
}


jb_USVString CloseEvent_reason(const CloseEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), "reason"));
}

