#include <webbind/LockOptions.h>

#include <webbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(LockOptions, em_Val);


LockMode LockOptions_mode(const LockOptions *self) {
    return em_Val_as(LockMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mode")));
}


void LockOptions_set_mode(LockOptions* self, LockMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


bool LockOptions_ifAvailable(const LockOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ifAvailable")));
}


void LockOptions_set_ifAvailable(LockOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ifAvailable"), em_Val_from(value));
}


bool LockOptions_steal(const LockOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("steal")));
}


void LockOptions_set_steal(LockOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("steal"), em_Val_from(value));
}


AbortSignal LockOptions_signal(const LockOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void LockOptions_set_signal(LockOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


LockOptions LockOptions_new() {
    em_Val obj = em_Val_object();
    return LockOptions_from_val(&obj);
}

