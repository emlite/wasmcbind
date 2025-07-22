#include <webbind/Gyroscope.h>


DEFINE_EMLITE_TYPE(Gyroscope, Sensor);


Gyroscope Gyroscope_new() : Sensor(em_Val_global("Gyroscope").new_()) {
        return Gyroscope(em_Val_new(em_Val_global("Gyroscope", ));
      }


Gyroscope Gyroscope_new(const jb_Any* sensorOptions) : Sensor(em_Val_global("Gyroscope").new_(em_Val_from(sensorOptions))) {
        return Gyroscope(em_Val_new(em_Val_global("Gyroscope", em_Val_from(sensorOptions)));
      }


double Gyroscope_x(const Gyroscope *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "x"));
}


double Gyroscope_y(const Gyroscope *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "y"));
}


double Gyroscope_z(const Gyroscope *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "z"));
}

