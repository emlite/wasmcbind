#include <webbind/AudioTimestamp.h>

DEFINE_EMLITE_TYPE(AudioTimestamp, em_Val);


double AudioTimestamp_contextTime(const AudioTimestamp *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contextTime")));
}


void AudioTimestamp_set_contextTime(AudioTimestamp* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("contextTime"), em_Val_from(value));
}


jb_Any AudioTimestamp_performanceTime(const AudioTimestamp *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("performanceTime")));
}


void AudioTimestamp_set_performanceTime(AudioTimestamp* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("performanceTime"), em_Val_from(value));
}


AudioTimestamp AudioTimestamp_new() {
    em_Val obj = em_Val_object();
    return AudioTimestamp_from_val(&obj);
}

