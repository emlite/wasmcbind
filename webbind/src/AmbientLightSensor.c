#include <webbind/AmbientLightSensor.h>

#include <webbind/SensorOptions.h>

DEFINE_EMLITE_TYPE(AmbientLightSensor, Sensor);


AmbientLightSensor AmbientLightSensor_new0() {
        em_Val vv = em_Val_new(em_Val_global("AmbientLightSensor") );
        return AmbientLightSensor_from_val(&vv);
      }


AmbientLightSensor AmbientLightSensor_new1(SensorOptions * sensorOptions) {
        em_Val vv = em_Val_new(em_Val_global("AmbientLightSensor") , em_Val_from(sensorOptions));
        return AmbientLightSensor_from_val(&vv);
      }


double AmbientLightSensor_illuminance(const AmbientLightSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("illuminance")));
}

