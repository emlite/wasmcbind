#include <webbind/GravitySensor.h>

#include <webbind/AccelerometerSensorOptions.h>

DEFINE_EMLITE_TYPE(GravitySensor, Accelerometer);


GravitySensor GravitySensor_new0() {
        em_Val vv = em_Val_new(em_Val_global("GravitySensor") );
        return GravitySensor_from_val(&vv);
      }


GravitySensor GravitySensor_new1(AccelerometerSensorOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("GravitySensor") , em_Val_from(options));
        return GravitySensor_from_val(&vv);
      }

