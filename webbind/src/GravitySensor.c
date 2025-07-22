#include <webbind/GravitySensor.h>


DEFINE_EMLITE_TYPE(GravitySensor, Accelerometer);


GravitySensor GravitySensor_new() : Accelerometer(em_Val_global("GravitySensor").new_()) {
        return GravitySensor(em_Val_new(em_Val_global("GravitySensor", ));
      }


GravitySensor GravitySensor_new(const jb_Any* options) : Accelerometer(em_Val_global("GravitySensor").new_(em_Val_from(options))) {
        return GravitySensor(em_Val_new(em_Val_global("GravitySensor", em_Val_from(options)));
      }

