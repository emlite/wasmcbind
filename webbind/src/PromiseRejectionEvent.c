#include <webbind/PromiseRejectionEvent.h>

#include <webbind/PromiseRejectionEventInit.h>

DEFINE_EMLITE_TYPE(PromiseRejectionEvent, Event);


PromiseRejectionEvent PromiseRejectionEvent_new(jb_String * type, PromiseRejectionEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("PromiseRejectionEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return PromiseRejectionEvent_from_val(&vv);
      }


jb_Object PromiseRejectionEvent_promise(const PromiseRejectionEvent *self) {
    return em_Val_as(jb_Object, em_Val_get(Event_as_val(self->inner), em_Val_from("promise")));
}


jb_Any PromiseRejectionEvent_reason(const PromiseRejectionEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), em_Val_from("reason")));
}

