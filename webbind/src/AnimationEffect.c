#include <webbind/AnimationEffect.h>
#include <webbind/WorkletAnimationEffect.h>
#include <webbind/GroupEffect.h>


DEFINE_EMLITE_TYPE(OptionalEffectTiming, em_Val);


double OptionalEffectTiming_delay(const OptionalEffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("delay")));
}


void OptionalEffectTiming_set_delay(OptionalEffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("delay"), em_Val_from(value));
}


double OptionalEffectTiming_endDelay(const OptionalEffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endDelay")));
}


void OptionalEffectTiming_set_endDelay(OptionalEffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("endDelay"), em_Val_from(value));
}


FillMode OptionalEffectTiming_fill(const OptionalEffectTiming *self) {
    return em_Val_as(FillMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fill")));
}


void OptionalEffectTiming_set_fill(OptionalEffectTiming* self, FillMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fill"), em_Val_from(value));
}


double OptionalEffectTiming_iterationStart(const OptionalEffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("iterationStart")));
}


void OptionalEffectTiming_set_iterationStart(OptionalEffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("iterationStart"), em_Val_from(value));
}


double OptionalEffectTiming_iterations(const OptionalEffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("iterations")));
}


void OptionalEffectTiming_set_iterations(OptionalEffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("iterations"), em_Val_from(value));
}


jb_Any OptionalEffectTiming_duration(const OptionalEffectTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duration")));
}


void OptionalEffectTiming_set_duration(OptionalEffectTiming* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("duration"), em_Val_from(value));
}


PlaybackDirection OptionalEffectTiming_direction(const OptionalEffectTiming *self) {
    return em_Val_as(PlaybackDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("direction")));
}


void OptionalEffectTiming_set_direction(OptionalEffectTiming* self, PlaybackDirection * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("direction"), em_Val_from(value));
}


jb_DOMString OptionalEffectTiming_easing(const OptionalEffectTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("easing")));
}


void OptionalEffectTiming_set_easing(OptionalEffectTiming* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("easing"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AnimationEffect, em_Val);


EffectTiming AnimationEffect_getTiming(AnimationEffect* self ) {
    return em_Val_as(EffectTiming, em_Val_call(em_Val_as_val(self->inner), "getTiming"));
}


ComputedEffectTiming AnimationEffect_getComputedTiming(AnimationEffect* self ) {
    return em_Val_as(ComputedEffectTiming, em_Val_call(em_Val_as_val(self->inner), "getComputedTiming"));
}


jb_Undefined AnimationEffect_updateTiming0(AnimationEffect* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "updateTiming"));
}


jb_Undefined AnimationEffect_updateTiming1(AnimationEffect* self , OptionalEffectTiming * timing) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "updateTiming", em_Val_from(timing)));
}


GroupEffect AnimationEffect_parent(const AnimationEffect *self) {
    return em_Val_as(GroupEffect, em_Val_get(em_Val_as_val(self->inner), em_Val_from("parent")));
}


AnimationEffect AnimationEffect_previousSibling(const AnimationEffect *self) {
    return em_Val_as(AnimationEffect, em_Val_get(em_Val_as_val(self->inner), em_Val_from("previousSibling")));
}


AnimationEffect AnimationEffect_nextSibling(const AnimationEffect *self) {
    return em_Val_as(AnimationEffect, em_Val_get(em_Val_as_val(self->inner), em_Val_from("nextSibling")));
}


jb_Undefined AnimationEffect_before(AnimationEffect* self , AnimationEffect * effects) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "before", em_Val_from(effects)));
}


jb_Undefined AnimationEffect_after(AnimationEffect* self , AnimationEffect * effects) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "after", em_Val_from(effects)));
}


jb_Undefined AnimationEffect_replace(AnimationEffect* self , AnimationEffect * effects) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "replace", em_Val_from(effects)));
}


jb_Undefined AnimationEffect_remove(AnimationEffect* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "remove"));
}

