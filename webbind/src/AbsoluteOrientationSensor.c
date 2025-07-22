#include <webbind/AbsoluteOrientationSensor.h>


DEFINE_EMLITE_TYPE(AbsoluteOrientationSensor, OrientationSensor);


AbsoluteOrientationSensor AbsoluteOrientationSensor_new() : OrientationSensor(em_Val_global("AbsoluteOrientationSensor").new_()) {
        return AbsoluteOrientationSensor(em_Val_new(em_Val_global("AbsoluteOrientationSensor", ));
      }


AbsoluteOrientationSensor AbsoluteOrientationSensor_new(const jb_Any* sensorOptions) : OrientationSensor(em_Val_global("AbsoluteOrientationSensor").new_(em_Val_from(sensorOptions))) {
        return AbsoluteOrientationSensor(em_Val_new(em_Val_global("AbsoluteOrientationSensor", em_Val_from(sensorOptions)));
      }

