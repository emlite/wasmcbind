#include <webbind/Accelerometer.h>


DEFINE_EMLITE_TYPE(Accelerometer, Sensor);


Accelerometer Accelerometer_new() : Sensor(em_Val_global("Accelerometer").new_()) {
        return Accelerometer(em_Val_new(em_Val_global("Accelerometer", ));
      }


Accelerometer Accelerometer_new(const jb_Any* options) : Sensor(em_Val_global("Accelerometer").new_(em_Val_from(options))) {
        return Accelerometer(em_Val_new(em_Val_global("Accelerometer", em_Val_from(options)));
      }


double Accelerometer_x(const Accelerometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "x"));
}


double Accelerometer_y(const Accelerometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "y"));
}


double Accelerometer_z(const Accelerometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "z"));
}

