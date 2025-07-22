#include <webbind/TransitionEvent.h>


DEFINE_EMLITE_TYPE(TransitionEvent, Event);


TransitionEvent TransitionEvent_new0(jb_CSSOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("TransitionEvent") , em_Val_from(type));
        return TransitionEvent_from_val(&vv);
      }


TransitionEvent TransitionEvent_new1(jb_CSSOMString * type, jb_Any * transitionEventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("TransitionEvent") , em_Val_from(type), em_Val_from(transitionEventInitDict));
        return TransitionEvent_from_val(&vv);
      }


jb_CSSOMString TransitionEvent_propertyName(const TransitionEvent *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(Event_as_val(self->inner), em_Val_from("propertyName")));
}


double TransitionEvent_elapsedTime(const TransitionEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), em_Val_from("elapsedTime")));
}


jb_CSSOMString TransitionEvent_pseudoElement(const TransitionEvent *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(Event_as_val(self->inner), em_Val_from("pseudoElement")));
}

