#include <webbind/LinearAccelerationSensor.h>

#include <webbind/AccelerometerSensorOptions.h>

DEFINE_EMLITE_TYPE(LinearAccelerationSensor, Accelerometer);


LinearAccelerationSensor LinearAccelerationSensor_new0() {
        em_Val vv = em_Val_new(em_Val_global("LinearAccelerationSensor") );
        return LinearAccelerationSensor_from_val(&vv);
      }


LinearAccelerationSensor LinearAccelerationSensor_new1(AccelerometerSensorOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("LinearAccelerationSensor") , em_Val_from(options));
        return LinearAccelerationSensor_from_val(&vv);
      }

