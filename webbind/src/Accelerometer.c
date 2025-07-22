#include <webbind/Accelerometer.h>


DEFINE_EMLITE_TYPE(Accelerometer, Sensor);


Accelerometer Accelerometer_new0() {
        em_Val vv = em_Val_new(em_Val_global("Accelerometer") );
        return Accelerometer_from_val(&vv);
      }


Accelerometer Accelerometer_new1(jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("Accelerometer") , em_Val_from(options));
        return Accelerometer_from_val(&vv);
      }


double Accelerometer_x(const Accelerometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("x")));
}


double Accelerometer_y(const Accelerometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("y")));
}


double Accelerometer_z(const Accelerometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("z")));
}

