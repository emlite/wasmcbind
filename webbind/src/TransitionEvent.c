#include <webbind/TransitionEvent.h>


DEFINE_EMLITE_TYPE(TransitionEvent, Event);


TransitionEvent TransitionEvent_new(const jb_CSSOMString* type) : Event(em_Val_global("TransitionEvent").new_(em_Val_from(type))) {
        return TransitionEvent(em_Val_new(em_Val_global("TransitionEvent", em_Val_from(type)));
      }


TransitionEvent TransitionEvent_new(const jb_CSSOMString* type, const jb_Any* transitionEventInitDict) : Event(em_Val_global("TransitionEvent").new_(em_Val_from(type), em_Val_from(transitionEventInitDict))) {
        return TransitionEvent(em_Val_new(em_Val_global("TransitionEvent", em_Val_from(type), em_Val_from(transitionEventInitDict)));
      }


jb_CSSOMString TransitionEvent_propertyName(const TransitionEvent *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(Event_as_val(self->inner), "propertyName"));
}


double TransitionEvent_elapsedTime(const TransitionEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), "elapsedTime"));
}


jb_CSSOMString TransitionEvent_pseudoElement(const TransitionEvent *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(Event_as_val(self->inner), "pseudoElement"));
}

