#include <webbind/CloseWatcherOptions.h>

#include <webbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(CloseWatcherOptions, em_Val);


AbortSignal CloseWatcherOptions_signal(const CloseWatcherOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void CloseWatcherOptions_set_signal(CloseWatcherOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


CloseWatcherOptions CloseWatcherOptions_new() {
    em_Val obj = em_Val_object();
    return CloseWatcherOptions_from_val(&obj);
}

