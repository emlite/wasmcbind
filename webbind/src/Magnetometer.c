#include <webbind/Magnetometer.h>


DEFINE_EMLITE_TYPE(Magnetometer, Sensor);


Magnetometer Magnetometer_new() : Sensor(em_Val_global("Magnetometer").new_()) {
        return Magnetometer(em_Val_new(em_Val_global("Magnetometer", ));
      }


Magnetometer Magnetometer_new(const jb_Any* sensorOptions) : Sensor(em_Val_global("Magnetometer").new_(em_Val_from(sensorOptions))) {
        return Magnetometer(em_Val_new(em_Val_global("Magnetometer", em_Val_from(sensorOptions)));
      }


double Magnetometer_x(const Magnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "x"));
}


double Magnetometer_y(const Magnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "y"));
}


double Magnetometer_z(const Magnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "z"));
}

