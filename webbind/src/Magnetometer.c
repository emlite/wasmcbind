#include <webbind/Magnetometer.h>


DEFINE_EMLITE_TYPE(Magnetometer, Sensor);


Magnetometer Magnetometer_new0() {
        em_Val vv = em_Val_new(em_Val_global("Magnetometer") );
        return Magnetometer_from_val(&vv);
      }


Magnetometer Magnetometer_new1(jb_Any * sensorOptions) {
        em_Val vv = em_Val_new(em_Val_global("Magnetometer") , em_Val_from(sensorOptions));
        return Magnetometer_from_val(&vv);
      }


double Magnetometer_x(const Magnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("x")));
}


double Magnetometer_y(const Magnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("y")));
}


double Magnetometer_z(const Magnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("z")));
}

