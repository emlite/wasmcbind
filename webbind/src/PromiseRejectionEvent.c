#include <webbind/PromiseRejectionEvent.h>


DEFINE_EMLITE_TYPE(PromiseRejectionEvent, Event);


PromiseRejectionEvent PromiseRejectionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("PromiseRejectionEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PromiseRejectionEvent(em_Val_new(em_Val_global("PromiseRejectionEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_Object PromiseRejectionEvent_promise(const PromiseRejectionEvent *self) {
    return em_Val_as(jb_Object, em_Val_get(Event_as_val(self->inner), "promise"));
}


jb_Any PromiseRejectionEvent_reason(const PromiseRejectionEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "reason"));
}

