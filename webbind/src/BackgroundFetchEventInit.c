#include <webbind/BackgroundFetchEventInit.h>

#include <webbind/BackgroundFetchRegistration.h>

DEFINE_EMLITE_TYPE(BackgroundFetchEventInit, ExtendableEventInit);


BackgroundFetchRegistration BackgroundFetchEventInit_registration(const BackgroundFetchEventInit *self) {
    return em_Val_as(BackgroundFetchRegistration, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("registration")));
}


void BackgroundFetchEventInit_set_registration(BackgroundFetchEventInit* self, BackgroundFetchRegistration * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("registration"), em_Val_from(value));
}


BackgroundFetchEventInit BackgroundFetchEventInit_new() {
    em_Val obj = em_Val_object();
    return BackgroundFetchEventInit_from_val(&obj);
}

