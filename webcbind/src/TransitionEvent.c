#include <webcbind/TransitionEvent.h>

#include <webcbind/TransitionEventInit.h>

DEFINE_EMLITE_TYPE(TransitionEvent, Event);


TransitionEvent TransitionEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("TransitionEvent") , em_Val_from(type));
        return TransitionEvent_from_val(&vv);
      }


TransitionEvent TransitionEvent_new1(jb_String * type, TransitionEventInit * transitionEventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("TransitionEvent") , em_Val_from(type), em_Val_from(transitionEventInitDict));
        return TransitionEvent_from_val(&vv);
      }


jb_String TransitionEvent_propertyName(const TransitionEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("propertyName")));
}


double TransitionEvent_elapsedTime(const TransitionEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), em_Val_from("elapsedTime")));
}


jb_String TransitionEvent_pseudoElement(const TransitionEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("pseudoElement")));
}

