#include <webbind/AnimationEffect.h>
#include <webbind/WorkletAnimationEffect.h>
#include <webbind/GroupEffect.h>


DEFINE_EMLITE_TYPE(OptionalEffectTiming, em_Val);


double OptionalEffectTiming_delay(const OptionalEffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "delay"));
}


void OptionalEffectTiming_set_delay(OptionalEffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "delay", value);
}


double OptionalEffectTiming_endDelay(const OptionalEffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "endDelay"));
}


void OptionalEffectTiming_set_endDelay(OptionalEffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "endDelay", value);
}


FillMode OptionalEffectTiming_fill(const OptionalEffectTiming *self) {
    return em_Val_as(FillMode, em_Val_get(em_Val_as_val(self->inner), "fill"));
}


void OptionalEffectTiming_set_fill(OptionalEffectTiming* self, const FillMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "fill", value);
}


double OptionalEffectTiming_iterationStart(const OptionalEffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "iterationStart"));
}


void OptionalEffectTiming_set_iterationStart(OptionalEffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "iterationStart", value);
}


double OptionalEffectTiming_iterations(const OptionalEffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "iterations"));
}


void OptionalEffectTiming_set_iterations(OptionalEffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "iterations", value);
}


jb_Any OptionalEffectTiming_duration(const OptionalEffectTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "duration"));
}


void OptionalEffectTiming_set_duration(OptionalEffectTiming* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "duration", value);
}


PlaybackDirection OptionalEffectTiming_direction(const OptionalEffectTiming *self) {
    return em_Val_as(PlaybackDirection, em_Val_get(em_Val_as_val(self->inner), "direction"));
}


void OptionalEffectTiming_set_direction(OptionalEffectTiming* self, const PlaybackDirection* value) {
    em_Val_set(em_Val_as_val(self->inner), "direction", value);
}


jb_DOMString OptionalEffectTiming_easing(const OptionalEffectTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "easing"));
}


void OptionalEffectTiming_set_easing(OptionalEffectTiming* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "easing", value);
}

DEFINE_EMLITE_TYPE(AnimationEffect, em_Val);


EffectTiming AnimationEffect_getTiming(AnimationEffect* self ) {
    return em_Val_as(EffectTiming, em_Val_call(em_Val_as_val(self->inner), "getTiming"));
}


ComputedEffectTiming AnimationEffect_getComputedTiming(AnimationEffect* self ) {
    return em_Val_as(ComputedEffectTiming, em_Val_call(em_Val_as_val(self->inner), "getComputedTiming"));
}


jb_Undefined AnimationEffect_updateTiming(AnimationEffect* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "updateTiming"));
}


jb_Undefined AnimationEffect_updateTiming(AnimationEffect* self , const OptionalEffectTiming* timing) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "updateTiming", em_Val_from(timing)));
}


GroupEffect AnimationEffect_parent(const AnimationEffect *self) {
    return em_Val_as(GroupEffect, em_Val_get(em_Val_as_val(self->inner), "parent"));
}


AnimationEffect AnimationEffect_previousSibling(const AnimationEffect *self) {
    return em_Val_as(AnimationEffect, em_Val_get(em_Val_as_val(self->inner), "previousSibling"));
}


AnimationEffect AnimationEffect_nextSibling(const AnimationEffect *self) {
    return em_Val_as(AnimationEffect, em_Val_get(em_Val_as_val(self->inner), "nextSibling"));
}


jb_Undefined AnimationEffect_before(AnimationEffect* self , const AnimationEffect* effects) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "before", em_Val_from(effects)));
}


jb_Undefined AnimationEffect_after(AnimationEffect* self , const AnimationEffect* effects) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "after", em_Val_from(effects)));
}


jb_Undefined AnimationEffect_replace(AnimationEffect* self , const AnimationEffect* effects) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "replace", em_Val_from(effects)));
}


jb_Undefined AnimationEffect_remove(AnimationEffect* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "remove"));
}

