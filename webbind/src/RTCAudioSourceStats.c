#include <webbind/RTCAudioSourceStats.h>

DEFINE_EMLITE_TYPE(RTCAudioSourceStats, RTCMediaSourceStats);


double RTCAudioSourceStats_audioLevel(const RTCAudioSourceStats *self) {
    return em_Val_as(double, em_Val_get(RTCMediaSourceStats_as_val(self->inner), em_Val_from("audioLevel")));
}


void RTCAudioSourceStats_set_audioLevel(RTCAudioSourceStats* self, double value) {
    em_Val_set(RTCMediaSourceStats_as_val(self->inner), em_Val_from("audioLevel"), em_Val_from(value));
}


double RTCAudioSourceStats_totalAudioEnergy(const RTCAudioSourceStats *self) {
    return em_Val_as(double, em_Val_get(RTCMediaSourceStats_as_val(self->inner), em_Val_from("totalAudioEnergy")));
}


void RTCAudioSourceStats_set_totalAudioEnergy(RTCAudioSourceStats* self, double value) {
    em_Val_set(RTCMediaSourceStats_as_val(self->inner), em_Val_from("totalAudioEnergy"), em_Val_from(value));
}


double RTCAudioSourceStats_totalSamplesDuration(const RTCAudioSourceStats *self) {
    return em_Val_as(double, em_Val_get(RTCMediaSourceStats_as_val(self->inner), em_Val_from("totalSamplesDuration")));
}


void RTCAudioSourceStats_set_totalSamplesDuration(RTCAudioSourceStats* self, double value) {
    em_Val_set(RTCMediaSourceStats_as_val(self->inner), em_Val_from("totalSamplesDuration"), em_Val_from(value));
}


double RTCAudioSourceStats_echoReturnLoss(const RTCAudioSourceStats *self) {
    return em_Val_as(double, em_Val_get(RTCMediaSourceStats_as_val(self->inner), em_Val_from("echoReturnLoss")));
}


void RTCAudioSourceStats_set_echoReturnLoss(RTCAudioSourceStats* self, double value) {
    em_Val_set(RTCMediaSourceStats_as_val(self->inner), em_Val_from("echoReturnLoss"), em_Val_from(value));
}


double RTCAudioSourceStats_echoReturnLossEnhancement(const RTCAudioSourceStats *self) {
    return em_Val_as(double, em_Val_get(RTCMediaSourceStats_as_val(self->inner), em_Val_from("echoReturnLossEnhancement")));
}


void RTCAudioSourceStats_set_echoReturnLossEnhancement(RTCAudioSourceStats* self, double value) {
    em_Val_set(RTCMediaSourceStats_as_val(self->inner), em_Val_from("echoReturnLossEnhancement"), em_Val_from(value));
}


RTCAudioSourceStats RTCAudioSourceStats_new() {
    em_Val obj = em_Val_object();
    return RTCAudioSourceStats_from_val(&obj);
}

