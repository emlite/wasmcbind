#include <webbind/OptionalEffectTiming.h>

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


jb_String OptionalEffectTiming_easing(const OptionalEffectTiming *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("easing")));
}


void OptionalEffectTiming_set_easing(OptionalEffectTiming* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("easing"), em_Val_from(value));
}


OptionalEffectTiming OptionalEffectTiming_new() {
    em_Val obj = em_Val_object();
    return OptionalEffectTiming_from_val(&obj);
}

