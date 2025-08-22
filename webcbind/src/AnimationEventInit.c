#include <webcbind/AnimationEventInit.h>

DEFINE_EMLITE_TYPE(AnimationEventInit, EventInit);


jb_String AnimationEventInit_animationName(const AnimationEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("animationName")));
}


void AnimationEventInit_set_animationName(AnimationEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("animationName"), em_Val_from(value));
}


double AnimationEventInit_elapsedTime(const AnimationEventInit *self) {
    return em_Val_as(double, em_Val_get(EventInit_as_val(self->inner), em_Val_from("elapsedTime")));
}


void AnimationEventInit_set_elapsedTime(AnimationEventInit* self, double value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("elapsedTime"), em_Val_from(value));
}


jb_String AnimationEventInit_pseudoElement(const AnimationEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("pseudoElement")));
}


void AnimationEventInit_set_pseudoElement(AnimationEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("pseudoElement"), em_Val_from(value));
}


AnimationEventInit AnimationEventInit_new() {
    em_Val obj = em_Val_object();
    return AnimationEventInit_from_val(&obj);
}

