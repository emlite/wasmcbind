#include <webbind/RelativeOrientationSensor.h>


DEFINE_EMLITE_TYPE(RelativeOrientationSensor, OrientationSensor);


RelativeOrientationSensor RelativeOrientationSensor_new() : OrientationSensor(em_Val_global("RelativeOrientationSensor").new_()) {
        return RelativeOrientationSensor(em_Val_new(em_Val_global("RelativeOrientationSensor", ));
      }


RelativeOrientationSensor RelativeOrientationSensor_new(const jb_Any* sensorOptions) : OrientationSensor(em_Val_global("RelativeOrientationSensor").new_(em_Val_from(sensorOptions))) {
        return RelativeOrientationSensor(em_Val_new(em_Val_global("RelativeOrientationSensor", em_Val_from(sensorOptions)));
      }

