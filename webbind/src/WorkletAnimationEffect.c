#include <webbind/WorkletAnimationEffect.h>


DEFINE_EMLITE_TYPE(EffectTiming, em_Val);


FillMode EffectTiming_fill(const EffectTiming *self) {
    return em_Val_as(FillMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fill")));
}


void EffectTiming_set_fill(EffectTiming* self, FillMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fill"), em_Val_from(value));
}


double EffectTiming_iterationStart(const EffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("iterationStart")));
}


void EffectTiming_set_iterationStart(EffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("iterationStart"), em_Val_from(value));
}


double EffectTiming_iterations(const EffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("iterations")));
}


void EffectTiming_set_iterations(EffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("iterations"), em_Val_from(value));
}


PlaybackDirection EffectTiming_direction(const EffectTiming *self) {
    return em_Val_as(PlaybackDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("direction")));
}


void EffectTiming_set_direction(EffectTiming* self, PlaybackDirection * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("direction"), em_Val_from(value));
}


jb_DOMString EffectTiming_easing(const EffectTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("easing")));
}


void EffectTiming_set_easing(EffectTiming* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("easing"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(ComputedEffectTiming, em_Val);


double ComputedEffectTiming_progress(const ComputedEffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("progress")));
}


void ComputedEffectTiming_set_progress(ComputedEffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("progress"), em_Val_from(value));
}


double ComputedEffectTiming_currentIteration(const ComputedEffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("currentIteration")));
}


void ComputedEffectTiming_set_currentIteration(ComputedEffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("currentIteration"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(WorkletAnimationEffect, em_Val);


EffectTiming WorkletAnimationEffect_getTiming(WorkletAnimationEffect* self ) {
    return em_Val_as(EffectTiming, em_Val_call(em_Val_as_val(self->inner), "getTiming"));
}


ComputedEffectTiming WorkletAnimationEffect_getComputedTiming(WorkletAnimationEffect* self ) {
    return em_Val_as(ComputedEffectTiming, em_Val_call(em_Val_as_val(self->inner), "getComputedTiming"));
}


double WorkletAnimationEffect_localTime(const WorkletAnimationEffect *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("localTime")));
}


void WorkletAnimationEffect_set_localTime(WorkletAnimationEffect* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("localTime"), em_Val_from(value));
}

