#include <webbind/ComputedEffectTiming.h>

DEFINE_EMLITE_TYPE(ComputedEffectTiming, EffectTiming);


double ComputedEffectTiming_progress(const ComputedEffectTiming *self) {
    return em_Val_as(double, em_Val_get(EffectTiming_as_val(self->inner), em_Val_from("progress")));
}


void ComputedEffectTiming_set_progress(ComputedEffectTiming* self, double value) {
    em_Val_set(EffectTiming_as_val(self->inner), em_Val_from("progress"), em_Val_from(value));
}


double ComputedEffectTiming_currentIteration(const ComputedEffectTiming *self) {
    return em_Val_as(double, em_Val_get(EffectTiming_as_val(self->inner), em_Val_from("currentIteration")));
}


void ComputedEffectTiming_set_currentIteration(ComputedEffectTiming* self, double value) {
    em_Val_set(EffectTiming_as_val(self->inner), em_Val_from("currentIteration"), em_Val_from(value));
}


ComputedEffectTiming ComputedEffectTiming_new() {
    em_Val obj = em_Val_object();
    return ComputedEffectTiming_from_val(&obj);
}

