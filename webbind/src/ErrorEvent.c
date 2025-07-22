#include <webbind/ErrorEvent.h>


DEFINE_EMLITE_TYPE(ErrorEvent, Event);


ErrorEvent ErrorEvent_new(const jb_DOMString* type) : Event(em_Val_global("ErrorEvent").new_(em_Val_from(type))) {
        return ErrorEvent(em_Val_new(em_Val_global("ErrorEvent", em_Val_from(type)));
      }


ErrorEvent ErrorEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("ErrorEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return ErrorEvent(em_Val_new(em_Val_global("ErrorEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_DOMString ErrorEvent_message(const ErrorEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "message"));
}


jb_USVString ErrorEvent_filename(const ErrorEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), "filename"));
}


unsigned long ErrorEvent_lineno(const ErrorEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "lineno"));
}


unsigned long ErrorEvent_colno(const ErrorEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "colno"));
}


jb_Any ErrorEvent_error(const ErrorEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "error"));
}

