#include <webcbind/AnimationTriggerOptions.h>

#include <webcbind/AnimationTimeline.h>

DEFINE_EMLITE_TYPE(AnimationTriggerOptions, em_Val);


AnimationTimeline AnimationTriggerOptions_timeline(const AnimationTriggerOptions *self) {
    return em_Val_as(AnimationTimeline, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeline")));
}


void AnimationTriggerOptions_set_timeline(AnimationTriggerOptions* self, AnimationTimeline * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeline"), em_Val_from(value));
}


AnimationTriggerBehavior AnimationTriggerOptions_behavior(const AnimationTriggerOptions *self) {
    return em_Val_as(AnimationTriggerBehavior, em_Val_get(em_Val_as_val(self->inner), em_Val_from("behavior")));
}


void AnimationTriggerOptions_set_behavior(AnimationTriggerOptions* self, AnimationTriggerBehavior * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("behavior"), em_Val_from(value));
}


jb_Any AnimationTriggerOptions_rangeStart(const AnimationTriggerOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeStart")));
}


void AnimationTriggerOptions_set_rangeStart(AnimationTriggerOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rangeStart"), em_Val_from(value));
}


jb_Any AnimationTriggerOptions_rangeEnd(const AnimationTriggerOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeEnd")));
}


void AnimationTriggerOptions_set_rangeEnd(AnimationTriggerOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rangeEnd"), em_Val_from(value));
}


jb_Any AnimationTriggerOptions_exitRangeStart(const AnimationTriggerOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exitRangeStart")));
}


void AnimationTriggerOptions_set_exitRangeStart(AnimationTriggerOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exitRangeStart"), em_Val_from(value));
}


jb_Any AnimationTriggerOptions_exitRangeEnd(const AnimationTriggerOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exitRangeEnd")));
}


void AnimationTriggerOptions_set_exitRangeEnd(AnimationTriggerOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exitRangeEnd"), em_Val_from(value));
}


AnimationTriggerOptions AnimationTriggerOptions_new() {
    em_Val obj = em_Val_object();
    return AnimationTriggerOptions_from_val(&obj);
}

