#include <webbind/PopStateEvent.h>


DEFINE_EMLITE_TYPE(PopStateEvent, Event);


PopStateEvent PopStateEvent_new(const jb_DOMString* type) : Event(em_Val_global("PopStateEvent").new_(em_Val_from(type))) {
        return PopStateEvent(em_Val_new(em_Val_global("PopStateEvent", em_Val_from(type)));
      }


PopStateEvent PopStateEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("PopStateEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return PopStateEvent(em_Val_new(em_Val_global("PopStateEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_Any PopStateEvent_state(const PopStateEvent *self) {
    return em_Val_as(jb_Any, em_Val_get(Event_as_val(self->inner), "state"));
}


bool PopStateEvent_hasUAVisualTransition(const PopStateEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), "hasUAVisualTransition"));
}

