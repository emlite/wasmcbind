#include <webbind/OrientationSensor.h>


DEFINE_EMLITE_TYPE(OrientationSensor, Sensor);


jb_FrozenArray OrientationSensor_quaternion(const OrientationSensor *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Sensor_as_val(self->inner), em_Val_from("quaternion")));
}


jb_Undefined OrientationSensor_populateMatrix(OrientationSensor* self , jb_Any * targetMatrix) {
    return em_Val_as(jb_Undefined, em_Val_call(Sensor_as_val(self->inner), "populateMatrix", em_Val_from(targetMatrix)));
}

