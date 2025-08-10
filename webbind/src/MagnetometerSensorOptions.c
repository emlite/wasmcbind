#include <webbind/MagnetometerSensorOptions.h>

DEFINE_EMLITE_TYPE(MagnetometerSensorOptions, SensorOptions);


MagnetometerLocalCoordinateSystem MagnetometerSensorOptions_referenceFrame(const MagnetometerSensorOptions *self) {
    return em_Val_as(MagnetometerLocalCoordinateSystem, em_Val_get(SensorOptions_as_val(self->inner), em_Val_from("referenceFrame")));
}


void MagnetometerSensorOptions_set_referenceFrame(MagnetometerSensorOptions* self, MagnetometerLocalCoordinateSystem * value) {
    em_Val_set(SensorOptions_as_val(self->inner), em_Val_from("referenceFrame"), em_Val_from(value));
}


MagnetometerSensorOptions MagnetometerSensorOptions_new() {
    em_Val obj = em_Val_object();
    return MagnetometerSensorOptions_from_val(&obj);
}

