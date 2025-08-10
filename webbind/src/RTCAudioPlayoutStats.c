#include <webbind/RTCAudioPlayoutStats.h>

DEFINE_EMLITE_TYPE(RTCAudioPlayoutStats, RTCStats);


jb_String RTCAudioPlayoutStats_kind(const RTCAudioPlayoutStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("kind")));
}


void RTCAudioPlayoutStats_set_kind(RTCAudioPlayoutStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("kind"), em_Val_from(value));
}


double RTCAudioPlayoutStats_synthesizedSamplesDuration(const RTCAudioPlayoutStats *self) {
    return em_Val_as(double, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("synthesizedSamplesDuration")));
}


void RTCAudioPlayoutStats_set_synthesizedSamplesDuration(RTCAudioPlayoutStats* self, double value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("synthesizedSamplesDuration"), em_Val_from(value));
}


unsigned long RTCAudioPlayoutStats_synthesizedSamplesEvents(const RTCAudioPlayoutStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("synthesizedSamplesEvents")));
}


void RTCAudioPlayoutStats_set_synthesizedSamplesEvents(RTCAudioPlayoutStats* self, unsigned long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("synthesizedSamplesEvents"), em_Val_from(value));
}


double RTCAudioPlayoutStats_totalSamplesDuration(const RTCAudioPlayoutStats *self) {
    return em_Val_as(double, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("totalSamplesDuration")));
}


void RTCAudioPlayoutStats_set_totalSamplesDuration(RTCAudioPlayoutStats* self, double value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("totalSamplesDuration"), em_Val_from(value));
}


double RTCAudioPlayoutStats_totalPlayoutDelay(const RTCAudioPlayoutStats *self) {
    return em_Val_as(double, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("totalPlayoutDelay")));
}


void RTCAudioPlayoutStats_set_totalPlayoutDelay(RTCAudioPlayoutStats* self, double value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("totalPlayoutDelay"), em_Val_from(value));
}


long long RTCAudioPlayoutStats_totalSamplesCount(const RTCAudioPlayoutStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("totalSamplesCount")));
}


void RTCAudioPlayoutStats_set_totalSamplesCount(RTCAudioPlayoutStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("totalSamplesCount"), em_Val_from(value));
}


RTCAudioPlayoutStats RTCAudioPlayoutStats_new() {
    em_Val obj = em_Val_object();
    return RTCAudioPlayoutStats_from_val(&obj);
}

