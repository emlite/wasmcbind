#include <webcbind/IdleOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(IdleOptions, em_Val);


long long IdleOptions_threshold(const IdleOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("threshold")));
}


void IdleOptions_set_threshold(IdleOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("threshold"), em_Val_from(value));
}


AbortSignal IdleOptions_signal(const IdleOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void IdleOptions_set_signal(IdleOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


IdleOptions IdleOptions_new() {
    em_Val obj = em_Val_object();
    return IdleOptions_from_val(&obj);
}

