#include <webbind/DeviceMotionEventAccelerationInit.h>

DEFINE_EMLITE_TYPE(DeviceMotionEventAccelerationInit, em_Val);


double DeviceMotionEventAccelerationInit_x(const DeviceMotionEventAccelerationInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("x")));
}


void DeviceMotionEventAccelerationInit_set_x(DeviceMotionEventAccelerationInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


double DeviceMotionEventAccelerationInit_y(const DeviceMotionEventAccelerationInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("y")));
}


void DeviceMotionEventAccelerationInit_set_y(DeviceMotionEventAccelerationInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


double DeviceMotionEventAccelerationInit_z(const DeviceMotionEventAccelerationInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("z")));
}


void DeviceMotionEventAccelerationInit_set_z(DeviceMotionEventAccelerationInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("z"), em_Val_from(value));
}


DeviceMotionEventAccelerationInit DeviceMotionEventAccelerationInit_new() {
    em_Val obj = em_Val_object();
    return DeviceMotionEventAccelerationInit_from_val(&obj);
}

