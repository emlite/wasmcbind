#include <webbind/AnalyserOptions.h>

DEFINE_EMLITE_TYPE(AnalyserOptions, AudioNodeOptions);


unsigned long AnalyserOptions_fftSize(const AnalyserOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("fftSize")));
}


void AnalyserOptions_set_fftSize(AnalyserOptions* self, unsigned long value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("fftSize"), em_Val_from(value));
}


double AnalyserOptions_maxDecibels(const AnalyserOptions *self) {
    return em_Val_as(double, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("maxDecibels")));
}


void AnalyserOptions_set_maxDecibels(AnalyserOptions* self, double value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("maxDecibels"), em_Val_from(value));
}


double AnalyserOptions_minDecibels(const AnalyserOptions *self) {
    return em_Val_as(double, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("minDecibels")));
}


void AnalyserOptions_set_minDecibels(AnalyserOptions* self, double value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("minDecibels"), em_Val_from(value));
}


double AnalyserOptions_smoothingTimeConstant(const AnalyserOptions *self) {
    return em_Val_as(double, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("smoothingTimeConstant")));
}


void AnalyserOptions_set_smoothingTimeConstant(AnalyserOptions* self, double value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("smoothingTimeConstant"), em_Val_from(value));
}


AnalyserOptions AnalyserOptions_new() {
    em_Val obj = em_Val_object();
    return AnalyserOptions_from_val(&obj);
}

