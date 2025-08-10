#include <webbind/DeviceMotionEventInit.h>

DEFINE_EMLITE_TYPE(DeviceMotionEventInit, EventInit);


DeviceMotionEventAccelerationInit DeviceMotionEventInit_acceleration(const DeviceMotionEventInit *self) {
    return em_Val_as(DeviceMotionEventAccelerationInit, em_Val_get(EventInit_as_val(self->inner), em_Val_from("acceleration")));
}


void DeviceMotionEventInit_set_acceleration(DeviceMotionEventInit* self, DeviceMotionEventAccelerationInit * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("acceleration"), em_Val_from(value));
}


DeviceMotionEventAccelerationInit DeviceMotionEventInit_accelerationIncludingGravity(const DeviceMotionEventInit *self) {
    return em_Val_as(DeviceMotionEventAccelerationInit, em_Val_get(EventInit_as_val(self->inner), em_Val_from("accelerationIncludingGravity")));
}


void DeviceMotionEventInit_set_accelerationIncludingGravity(DeviceMotionEventInit* self, DeviceMotionEventAccelerationInit * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("accelerationIncludingGravity"), em_Val_from(value));
}


DeviceMotionEventRotationRateInit DeviceMotionEventInit_rotationRate(const DeviceMotionEventInit *self) {
    return em_Val_as(DeviceMotionEventRotationRateInit, em_Val_get(EventInit_as_val(self->inner), em_Val_from("rotationRate")));
}


void DeviceMotionEventInit_set_rotationRate(DeviceMotionEventInit* self, DeviceMotionEventRotationRateInit * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("rotationRate"), em_Val_from(value));
}


double DeviceMotionEventInit_interval(const DeviceMotionEventInit *self) {
    return em_Val_as(double, em_Val_get(EventInit_as_val(self->inner), em_Val_from("interval")));
}


void DeviceMotionEventInit_set_interval(DeviceMotionEventInit* self, double value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("interval"), em_Val_from(value));
}


DeviceMotionEventInit DeviceMotionEventInit_new() {
    em_Val obj = em_Val_object();
    return DeviceMotionEventInit_from_val(&obj);
}

