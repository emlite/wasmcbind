#include <webcbind/DeviceMotionEventRotationRateInit.h>

DEFINE_EMLITE_TYPE(DeviceMotionEventRotationRateInit, em_Val);


double DeviceMotionEventRotationRateInit_alpha(const DeviceMotionEventRotationRateInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


void DeviceMotionEventRotationRateInit_set_alpha(DeviceMotionEventRotationRateInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


double DeviceMotionEventRotationRateInit_beta(const DeviceMotionEventRotationRateInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("beta")));
}


void DeviceMotionEventRotationRateInit_set_beta(DeviceMotionEventRotationRateInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("beta"), em_Val_from(value));
}


double DeviceMotionEventRotationRateInit_gamma(const DeviceMotionEventRotationRateInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("gamma")));
}


void DeviceMotionEventRotationRateInit_set_gamma(DeviceMotionEventRotationRateInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("gamma"), em_Val_from(value));
}


DeviceMotionEventRotationRateInit DeviceMotionEventRotationRateInit_new() {
    em_Val obj = em_Val_object();
    return DeviceMotionEventRotationRateInit_from_val(&obj);
}

