#include <webbind/GyroscopeSensorOptions.h>

DEFINE_EMLITE_TYPE(GyroscopeSensorOptions, SensorOptions);


GyroscopeLocalCoordinateSystem GyroscopeSensorOptions_referenceFrame(const GyroscopeSensorOptions *self) {
    return em_Val_as(GyroscopeLocalCoordinateSystem, em_Val_get(SensorOptions_as_val(self->inner), em_Val_from("referenceFrame")));
}


void GyroscopeSensorOptions_set_referenceFrame(GyroscopeSensorOptions* self, GyroscopeLocalCoordinateSystem * value) {
    em_Val_set(SensorOptions_as_val(self->inner), em_Val_from("referenceFrame"), em_Val_from(value));
}


GyroscopeSensorOptions GyroscopeSensorOptions_new() {
    em_Val obj = em_Val_object();
    return GyroscopeSensorOptions_from_val(&obj);
}

