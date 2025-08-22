#include <webcbind/RelativeOrientationSensor.h>

#include <webcbind/OrientationSensorOptions.h>

DEFINE_EMLITE_TYPE(RelativeOrientationSensor, OrientationSensor);


RelativeOrientationSensor RelativeOrientationSensor_new0() {
        em_Val vv = em_Val_new(em_Val_global("RelativeOrientationSensor") );
        return RelativeOrientationSensor_from_val(&vv);
      }


RelativeOrientationSensor RelativeOrientationSensor_new1(OrientationSensorOptions * sensorOptions) {
        em_Val vv = em_Val_new(em_Val_global("RelativeOrientationSensor") , em_Val_from(sensorOptions));
        return RelativeOrientationSensor_from_val(&vv);
      }

