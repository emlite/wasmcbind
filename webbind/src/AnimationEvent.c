#include <webbind/AnimationEvent.h>

#include <webbind/AnimationEventInit.h>

DEFINE_EMLITE_TYPE(AnimationEvent, Event);


AnimationEvent AnimationEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("AnimationEvent") , em_Val_from(type));
        return AnimationEvent_from_val(&vv);
      }


AnimationEvent AnimationEvent_new1(jb_String * type, AnimationEventInit * animationEventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("AnimationEvent") , em_Val_from(type), em_Val_from(animationEventInitDict));
        return AnimationEvent_from_val(&vv);
      }


jb_String AnimationEvent_animationName(const AnimationEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("animationName")));
}


double AnimationEvent_elapsedTime(const AnimationEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), em_Val_from("elapsedTime")));
}


jb_String AnimationEvent_pseudoElement(const AnimationEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("pseudoElement")));
}

