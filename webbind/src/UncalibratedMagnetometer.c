#include <webbind/UncalibratedMagnetometer.h>


DEFINE_EMLITE_TYPE(UncalibratedMagnetometer, Sensor);


UncalibratedMagnetometer UncalibratedMagnetometer_new0() {
        em_Val vv = em_Val_new(em_Val_global("UncalibratedMagnetometer") );
        return UncalibratedMagnetometer_from_val(&vv);
      }


UncalibratedMagnetometer UncalibratedMagnetometer_new1(jb_Any * sensorOptions) {
        em_Val vv = em_Val_new(em_Val_global("UncalibratedMagnetometer") , em_Val_from(sensorOptions));
        return UncalibratedMagnetometer_from_val(&vv);
      }


double UncalibratedMagnetometer_x(const UncalibratedMagnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("x")));
}


double UncalibratedMagnetometer_y(const UncalibratedMagnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("y")));
}


double UncalibratedMagnetometer_z(const UncalibratedMagnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("z")));
}


double UncalibratedMagnetometer_xBias(const UncalibratedMagnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("xBias")));
}


double UncalibratedMagnetometer_yBias(const UncalibratedMagnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("yBias")));
}


double UncalibratedMagnetometer_zBias(const UncalibratedMagnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("zBias")));
}

