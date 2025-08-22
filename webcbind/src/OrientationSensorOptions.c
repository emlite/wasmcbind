#include <webcbind/OrientationSensorOptions.h>

DEFINE_EMLITE_TYPE(OrientationSensorOptions, SensorOptions);


OrientationSensorLocalCoordinateSystem OrientationSensorOptions_referenceFrame(const OrientationSensorOptions *self) {
    return em_Val_as(OrientationSensorLocalCoordinateSystem, em_Val_get(SensorOptions_as_val(self->inner), em_Val_from("referenceFrame")));
}


void OrientationSensorOptions_set_referenceFrame(OrientationSensorOptions* self, OrientationSensorLocalCoordinateSystem * value) {
    em_Val_set(SensorOptions_as_val(self->inner), em_Val_from("referenceFrame"), em_Val_from(value));
}


OrientationSensorOptions OrientationSensorOptions_new() {
    em_Val obj = em_Val_object();
    return OrientationSensorOptions_from_val(&obj);
}

