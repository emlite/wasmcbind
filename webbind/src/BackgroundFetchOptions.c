#include <webbind/BackgroundFetchOptions.h>

DEFINE_EMLITE_TYPE(BackgroundFetchOptions, BackgroundFetchUIOptions);


long long BackgroundFetchOptions_downloadTotal(const BackgroundFetchOptions *self) {
    return em_Val_as(long long, em_Val_get(BackgroundFetchUIOptions_as_val(self->inner), em_Val_from("downloadTotal")));
}


void BackgroundFetchOptions_set_downloadTotal(BackgroundFetchOptions* self, long long value) {
    em_Val_set(BackgroundFetchUIOptions_as_val(self->inner), em_Val_from("downloadTotal"), em_Val_from(value));
}


BackgroundFetchOptions BackgroundFetchOptions_new() {
    em_Val obj = em_Val_object();
    return BackgroundFetchOptions_from_val(&obj);
}

