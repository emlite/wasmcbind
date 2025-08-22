#include <webcbind/EffectTiming.h>

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


jb_String EffectTiming_easing(const EffectTiming *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("easing")));
}


void EffectTiming_set_easing(EffectTiming* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("easing"), em_Val_from(value));
}


EffectTiming EffectTiming_new() {
    em_Val obj = em_Val_object();
    return EffectTiming_from_val(&obj);
}

