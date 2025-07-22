#include <webbind/CustomEvent.h>


DEFINE_EMLITE_TYPE(CustomEvent, Event);


CustomEvent CustomEvent_new(const jb_DOMString* type) : Event(em_Val_global("CustomEvent").new_(em_Val_from(type))) {
        return CustomEvent(em_Val_new(em_Val_global("CustomEvent", em_Val_from(type)));
      }


CustomEvent CustomEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("CustomEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return CustomEvent(em_Val_new(em_Val_global("CustomEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_Any CustomEvent_detail(const CustomEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "detail"));
}


jb_Undefined CustomEvent_initCustomEvent(CustomEvent* self , const jb_DOMString* type) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initCustomEvent", em_Val_from(type)));
}


jb_Undefined CustomEvent_initCustomEvent(CustomEvent* self , const jb_DOMString* type, bool bubbles) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initCustomEvent", em_Val_from(type), em_Val_from(bubbles)));
}


jb_Undefined CustomEvent_initCustomEvent(CustomEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initCustomEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable)));
}


jb_Undefined CustomEvent_initCustomEvent(CustomEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_Any* detail) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initCustomEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(detail)));
}

