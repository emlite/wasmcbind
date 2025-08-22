#include <webcbind/WorkletAnimationEffect.h>

#include <webcbind/EffectTiming.h>
#include <webcbind/ComputedEffectTiming.h>

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

