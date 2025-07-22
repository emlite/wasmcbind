#include <webbind/LinearAccelerationSensor.h>


DEFINE_EMLITE_TYPE(LinearAccelerationSensor, Accelerometer);


LinearAccelerationSensor LinearAccelerationSensor_new() : Accelerometer(em_Val_global("LinearAccelerationSensor").new_()) {
        return LinearAccelerationSensor(em_Val_new(em_Val_global("LinearAccelerationSensor", ));
      }


LinearAccelerationSensor LinearAccelerationSensor_new(const jb_Any* options) : Accelerometer(em_Val_global("LinearAccelerationSensor").new_(em_Val_from(options))) {
        return LinearAccelerationSensor(em_Val_new(em_Val_global("LinearAccelerationSensor", em_Val_from(options)));
      }

