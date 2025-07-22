#include <webbind/AnimationEvent.h>


DEFINE_EMLITE_TYPE(AnimationEvent, Event);


AnimationEvent AnimationEvent_new(const jb_CSSOMString* type) : Event(em_Val_global("AnimationEvent").new_(em_Val_from(type))) {
        return AnimationEvent(em_Val_new(em_Val_global("AnimationEvent", em_Val_from(type)));
      }


AnimationEvent AnimationEvent_new(const jb_CSSOMString* type, const jb_Any* animationEventInitDict) : Event(em_Val_global("AnimationEvent").new_(em_Val_from(type), em_Val_from(animationEventInitDict))) {
        return AnimationEvent(em_Val_new(em_Val_global("AnimationEvent", em_Val_from(type), em_Val_from(animationEventInitDict)));
      }


jb_CSSOMString AnimationEvent_animationName(const AnimationEvent *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(Event_as_val(self->inner), "animationName"));
}


double AnimationEvent_elapsedTime(const AnimationEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), "elapsedTime"));
}


jb_CSSOMString AnimationEvent_pseudoElement(const AnimationEvent *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(Event_as_val(self->inner), "pseudoElement"));
}

