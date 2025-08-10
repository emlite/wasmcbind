#include <webbind/DeviceMotionEventRotationRate.h>

DEFINE_EMLITE_TYPE(DeviceMotionEventRotationRate, em_Val);


double DeviceMotionEventRotationRate_alpha(const DeviceMotionEventRotationRate *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


double DeviceMotionEventRotationRate_beta(const DeviceMotionEventRotationRate *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("beta")));
}


double DeviceMotionEventRotationRate_gamma(const DeviceMotionEventRotationRate *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("gamma")));
}

