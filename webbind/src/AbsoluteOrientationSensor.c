#include <webbind/AbsoluteOrientationSensor.h>

#include <webbind/OrientationSensorOptions.h>

DEFINE_EMLITE_TYPE(AbsoluteOrientationSensor, OrientationSensor);


AbsoluteOrientationSensor AbsoluteOrientationSensor_new0() {
        em_Val vv = em_Val_new(em_Val_global("AbsoluteOrientationSensor") );
        return AbsoluteOrientationSensor_from_val(&vv);
      }


AbsoluteOrientationSensor AbsoluteOrientationSensor_new1(OrientationSensorOptions * sensorOptions) {
        em_Val vv = em_Val_new(em_Val_global("AbsoluteOrientationSensor") , em_Val_from(sensorOptions));
        return AbsoluteOrientationSensor_from_val(&vv);
      }

