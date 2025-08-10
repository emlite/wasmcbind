#include <webbind/SubscribeOptions.h>

#include <webbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(SubscribeOptions, em_Val);


AbortSignal SubscribeOptions_signal(const SubscribeOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void SubscribeOptions_set_signal(SubscribeOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


SubscribeOptions SubscribeOptions_new() {
    em_Val obj = em_Val_object();
    return SubscribeOptions_from_val(&obj);
}

