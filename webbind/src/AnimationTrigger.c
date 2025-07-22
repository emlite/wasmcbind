#include <webbind/AnimationTrigger.h>
#include <webbind/AnimationTimeline.h>


DEFINE_EMLITE_TYPE(AnimationTrigger, em_Val);


AnimationTrigger AnimationTrigger_new() : em_Val(em_Val_global("AnimationTrigger").new_()) {
        return AnimationTrigger(em_Val_new(em_Val_global("AnimationTrigger", ));
      }


AnimationTrigger AnimationTrigger_new(const jb_Any* options) : em_Val(em_Val_global("AnimationTrigger").new_(em_Val_from(options))) {
        return AnimationTrigger(em_Val_new(em_Val_global("AnimationTrigger", em_Val_from(options)));
      }


AnimationTimeline AnimationTrigger_timeline(const AnimationTrigger *self) {
    return em_Val_as(AnimationTimeline, em_Val_get(em_Val_as_val(self->inner), "timeline"));
}


void AnimationTrigger_set_timeline(AnimationTrigger* self, const AnimationTimeline* value) {
    em_Val_set(em_Val_as_val(self->inner), "timeline", value);
}


AnimationTriggerBehavior AnimationTrigger_behavior(const AnimationTrigger *self) {
    return em_Val_as(AnimationTriggerBehavior, em_Val_get(em_Val_as_val(self->inner), "behavior"));
}


void AnimationTrigger_set_behavior(AnimationTrigger* self, const AnimationTriggerBehavior* value) {
    em_Val_set(em_Val_as_val(self->inner), "behavior", value);
}


jb_Any AnimationTrigger_rangeStart(const AnimationTrigger *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "rangeStart"));
}


void AnimationTrigger_set_rangeStart(AnimationTrigger* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "rangeStart", value);
}


jb_Any AnimationTrigger_rangeEnd(const AnimationTrigger *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "rangeEnd"));
}


void AnimationTrigger_set_rangeEnd(AnimationTrigger* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "rangeEnd", value);
}


jb_Any AnimationTrigger_exitRangeStart(const AnimationTrigger *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "exitRangeStart"));
}


void AnimationTrigger_set_exitRangeStart(AnimationTrigger* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "exitRangeStart", value);
}


jb_Any AnimationTrigger_exitRangeEnd(const AnimationTrigger *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "exitRangeEnd"));
}


void AnimationTrigger_set_exitRangeEnd(AnimationTrigger* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "exitRangeEnd", value);
}

