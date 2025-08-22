#include <webcbind/AnimationTrigger.h>

#include <webcbind/AnimationTriggerOptions.h>
#include <webcbind/AnimationTimeline.h>

DEFINE_EMLITE_TYPE(AnimationTrigger, em_Val);


AnimationTrigger AnimationTrigger_new0() {
        em_Val vv = em_Val_new(em_Val_global("AnimationTrigger") );
        return AnimationTrigger_from_val(&vv);
      }


AnimationTrigger AnimationTrigger_new1(AnimationTriggerOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("AnimationTrigger") , em_Val_from(options));
        return AnimationTrigger_from_val(&vv);
      }


AnimationTimeline AnimationTrigger_timeline(const AnimationTrigger *self) {
    return em_Val_as(AnimationTimeline, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timeline")));
}


void AnimationTrigger_set_timeline(AnimationTrigger* self, AnimationTimeline * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timeline"), em_Val_from(value));
}


AnimationTriggerBehavior AnimationTrigger_behavior(const AnimationTrigger *self) {
    return em_Val_as(AnimationTriggerBehavior, em_Val_get(em_Val_as_val(self->inner), em_Val_from("behavior")));
}


void AnimationTrigger_set_behavior(AnimationTrigger* self, AnimationTriggerBehavior * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("behavior"), em_Val_from(value));
}


jb_Any AnimationTrigger_rangeStart(const AnimationTrigger *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeStart")));
}


void AnimationTrigger_set_rangeStart(AnimationTrigger* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rangeStart"), em_Val_from(value));
}


jb_Any AnimationTrigger_rangeEnd(const AnimationTrigger *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeEnd")));
}


void AnimationTrigger_set_rangeEnd(AnimationTrigger* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rangeEnd"), em_Val_from(value));
}


jb_Any AnimationTrigger_exitRangeStart(const AnimationTrigger *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exitRangeStart")));
}


void AnimationTrigger_set_exitRangeStart(AnimationTrigger* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exitRangeStart"), em_Val_from(value));
}


jb_Any AnimationTrigger_exitRangeEnd(const AnimationTrigger *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exitRangeEnd")));
}


void AnimationTrigger_set_exitRangeEnd(AnimationTrigger* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exitRangeEnd"), em_Val_from(value));
}

