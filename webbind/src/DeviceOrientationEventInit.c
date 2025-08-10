#include <webbind/DeviceOrientationEventInit.h>

DEFINE_EMLITE_TYPE(DeviceOrientationEventInit, EventInit);


double DeviceOrientationEventInit_alpha(const DeviceOrientationEventInit *self) {
    return em_Val_as(double, em_Val_get(EventInit_as_val(self->inner), em_Val_from("alpha")));
}


void DeviceOrientationEventInit_set_alpha(DeviceOrientationEventInit* self, double value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


double DeviceOrientationEventInit_beta(const DeviceOrientationEventInit *self) {
    return em_Val_as(double, em_Val_get(EventInit_as_val(self->inner), em_Val_from("beta")));
}


void DeviceOrientationEventInit_set_beta(DeviceOrientationEventInit* self, double value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("beta"), em_Val_from(value));
}


double DeviceOrientationEventInit_gamma(const DeviceOrientationEventInit *self) {
    return em_Val_as(double, em_Val_get(EventInit_as_val(self->inner), em_Val_from("gamma")));
}


void DeviceOrientationEventInit_set_gamma(DeviceOrientationEventInit* self, double value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("gamma"), em_Val_from(value));
}


bool DeviceOrientationEventInit_absolute(const DeviceOrientationEventInit *self) {
    return em_Val_as(bool, em_Val_get(EventInit_as_val(self->inner), em_Val_from("absolute")));
}


void DeviceOrientationEventInit_set_absolute(DeviceOrientationEventInit* self, bool value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("absolute"), em_Val_from(value));
}


DeviceOrientationEventInit DeviceOrientationEventInit_new() {
    em_Val obj = em_Val_object();
    return DeviceOrientationEventInit_from_val(&obj);
}

