#include <webcbind/AccelerometerSensorOptions.h>

DEFINE_EMLITE_TYPE(AccelerometerSensorOptions, SensorOptions);


AccelerometerLocalCoordinateSystem AccelerometerSensorOptions_referenceFrame(const AccelerometerSensorOptions *self) {
    return em_Val_as(AccelerometerLocalCoordinateSystem, em_Val_get(SensorOptions_as_val(self->inner), em_Val_from("referenceFrame")));
}


void AccelerometerSensorOptions_set_referenceFrame(AccelerometerSensorOptions* self, AccelerometerLocalCoordinateSystem * value) {
    em_Val_set(SensorOptions_as_val(self->inner), em_Val_from("referenceFrame"), em_Val_from(value));
}


AccelerometerSensorOptions AccelerometerSensorOptions_new() {
    em_Val obj = em_Val_object();
    return AccelerometerSensorOptions_from_val(&obj);
}

