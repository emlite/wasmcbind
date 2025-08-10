#include <webbind/WatchAdvertisementsOptions.h>

#include <webbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(WatchAdvertisementsOptions, em_Val);


AbortSignal WatchAdvertisementsOptions_signal(const WatchAdvertisementsOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void WatchAdvertisementsOptions_set_signal(WatchAdvertisementsOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


WatchAdvertisementsOptions WatchAdvertisementsOptions_new() {
    em_Val obj = em_Val_object();
    return WatchAdvertisementsOptions_from_val(&obj);
}

