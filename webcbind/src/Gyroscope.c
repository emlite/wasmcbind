#include <webcbind/Gyroscope.h>

#include <webcbind/GyroscopeSensorOptions.h>

DEFINE_EMLITE_TYPE(Gyroscope, Sensor);


Gyroscope Gyroscope_new0() {
        em_Val vv = em_Val_new(em_Val_global("Gyroscope") );
        return Gyroscope_from_val(&vv);
      }


Gyroscope Gyroscope_new1(GyroscopeSensorOptions * sensorOptions) {
        em_Val vv = em_Val_new(em_Val_global("Gyroscope") , em_Val_from(sensorOptions));
        return Gyroscope_from_val(&vv);
      }


double Gyroscope_x(const Gyroscope *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("x")));
}


double Gyroscope_y(const Gyroscope *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("y")));
}


double Gyroscope_z(const Gyroscope *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("z")));
}

