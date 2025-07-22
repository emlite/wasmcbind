#include <webbind/CloseEvent.h>


DEFINE_EMLITE_TYPE(CloseEvent, Event);


CloseEvent CloseEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("CloseEvent") , em_Val_from(type));
        return CloseEvent_from_val(&vv);
      }


CloseEvent CloseEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("CloseEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return CloseEvent_from_val(&vv);
      }


bool CloseEvent_wasClean(const CloseEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), em_Val_from("wasClean")));
}


unsigned short CloseEvent_code(const CloseEvent *self) {
    return em_Val_as(unsigned short, em_Val_get(Event_as_val(self->inner), em_Val_from("code")));
}


jb_USVString CloseEvent_reason(const CloseEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), em_Val_from("reason")));
}

