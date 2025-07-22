#include <webbind/AmbientLightSensor.h>


DEFINE_EMLITE_TYPE(AmbientLightSensor, Sensor);


AmbientLightSensor AmbientLightSensor_new() : Sensor(em_Val_global("AmbientLightSensor").new_()) {
        return AmbientLightSensor(em_Val_new(em_Val_global("AmbientLightSensor", ));
      }


AmbientLightSensor AmbientLightSensor_new(const jb_Any* sensorOptions) : Sensor(em_Val_global("AmbientLightSensor").new_(em_Val_from(sensorOptions))) {
        return AmbientLightSensor(em_Val_new(em_Val_global("AmbientLightSensor", em_Val_from(sensorOptions)));
      }


double AmbientLightSensor_illuminance(const AmbientLightSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "illuminance"));
}

