#include <webbind/WorkletAnimationEffect.h>


DEFINE_EMLITE_TYPE(EffectTiming, em_Val);


FillMode EffectTiming_fill(const EffectTiming *self) {
    return em_Val_as(FillMode, em_Val_get(em_Val_as_val(self->inner), "fill"));
}


void EffectTiming_set_fill(EffectTiming* self, const FillMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "fill", value);
}


double EffectTiming_iterationStart(const EffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "iterationStart"));
}


void EffectTiming_set_iterationStart(EffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "iterationStart", value);
}


double EffectTiming_iterations(const EffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "iterations"));
}


void EffectTiming_set_iterations(EffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "iterations", value);
}


PlaybackDirection EffectTiming_direction(const EffectTiming *self) {
    return em_Val_as(PlaybackDirection, em_Val_get(em_Val_as_val(self->inner), "direction"));
}


void EffectTiming_set_direction(EffectTiming* self, const PlaybackDirection* value) {
    em_Val_set(em_Val_as_val(self->inner), "direction", value);
}


jb_DOMString EffectTiming_easing(const EffectTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "easing"));
}


void EffectTiming_set_easing(EffectTiming* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "easing", value);
}

DEFINE_EMLITE_TYPE(ComputedEffectTiming, em_Val);


double ComputedEffectTiming_progress(const ComputedEffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "progress"));
}


void ComputedEffectTiming_set_progress(ComputedEffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "progress", value);
}


double ComputedEffectTiming_currentIteration(const ComputedEffectTiming *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "currentIteration"));
}


void ComputedEffectTiming_set_currentIteration(ComputedEffectTiming* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "currentIteration", value);
}

DEFINE_EMLITE_TYPE(WorkletAnimationEffect, em_Val);


EffectTiming WorkletAnimationEffect_getTiming(WorkletAnimationEffect* self ) {
    return em_Val_as(EffectTiming, em_Val_call(em_Val_as_val(self->inner), "getTiming"));
}


ComputedEffectTiming WorkletAnimationEffect_getComputedTiming(WorkletAnimationEffect* self ) {
    return em_Val_as(ComputedEffectTiming, em_Val_call(em_Val_as_val(self->inner), "getComputedTiming"));
}


double WorkletAnimationEffect_localTime(const WorkletAnimationEffect *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "localTime"));
}


void WorkletAnimationEffect_set_localTime(WorkletAnimationEffect* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "localTime", value);
}

