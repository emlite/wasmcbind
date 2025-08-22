#include <webcbind/ReadOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(ReadOptions, GeolocationSensorOptions);


AbortSignal ReadOptions_signal(const ReadOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(GeolocationSensorOptions_as_val(self->inner), em_Val_from("signal")));
}


void ReadOptions_set_signal(ReadOptions* self, AbortSignal * value) {
    em_Val_set(GeolocationSensorOptions_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


ReadOptions ReadOptions_new() {
    em_Val obj = em_Val_object();
    return ReadOptions_from_val(&obj);
}

