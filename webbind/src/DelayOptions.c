#include <webbind/DelayOptions.h>

DEFINE_EMLITE_TYPE(DelayOptions, AudioNodeOptions);


double DelayOptions_maxDelayTime(const DelayOptions *self) {
    return em_Val_as(double, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("maxDelayTime")));
}


void DelayOptions_set_maxDelayTime(DelayOptions* self, double value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("maxDelayTime"), em_Val_from(value));
}


double DelayOptions_delayTime(const DelayOptions *self) {
    return em_Val_as(double, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("delayTime")));
}


void DelayOptions_set_delayTime(DelayOptions* self, double value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("delayTime"), em_Val_from(value));
}


DelayOptions DelayOptions_new() {
    em_Val obj = em_Val_object();
    return DelayOptions_from_val(&obj);
}

