#include <webbind/BackgroundSyncOptions.h>

DEFINE_EMLITE_TYPE(BackgroundSyncOptions, em_Val);


long long BackgroundSyncOptions_minInterval(const BackgroundSyncOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minInterval")));
}


void BackgroundSyncOptions_set_minInterval(BackgroundSyncOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("minInterval"), em_Val_from(value));
}


BackgroundSyncOptions BackgroundSyncOptions_new() {
    em_Val obj = em_Val_object();
    return BackgroundSyncOptions_from_val(&obj);
}

