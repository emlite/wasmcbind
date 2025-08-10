#include <webbind/ErrorEvent.h>

#include <webbind/ErrorEventInit.h>

DEFINE_EMLITE_TYPE(ErrorEvent, Event);


ErrorEvent ErrorEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("ErrorEvent") , em_Val_from(type));
        return ErrorEvent_from_val(&vv);
      }


ErrorEvent ErrorEvent_new1(jb_String * type, ErrorEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("ErrorEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return ErrorEvent_from_val(&vv);
      }


jb_String ErrorEvent_message(const ErrorEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("message")));
}


jb_String ErrorEvent_filename(const ErrorEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("filename")));
}


unsigned long ErrorEvent_lineno(const ErrorEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("lineno")));
}


unsigned long ErrorEvent_colno(const ErrorEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("colno")));
}


jb_Any ErrorEvent_error(const ErrorEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("error")));
}

