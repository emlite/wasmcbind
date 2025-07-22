#include <webbind/DeviceMotionEventAcceleration.h>


DEFINE_EMLITE_TYPE(DeviceMotionEventAcceleration, em_Val);


double DeviceMotionEventAcceleration_x(const DeviceMotionEventAcceleration *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "x"));
}


double DeviceMotionEventAcceleration_y(const DeviceMotionEventAcceleration *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "y"));
}


double DeviceMotionEventAcceleration_z(const DeviceMotionEventAcceleration *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "z"));
}

