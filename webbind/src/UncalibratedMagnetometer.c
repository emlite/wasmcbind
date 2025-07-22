#include <webbind/UncalibratedMagnetometer.h>


DEFINE_EMLITE_TYPE(UncalibratedMagnetometer, Sensor);


UncalibratedMagnetometer UncalibratedMagnetometer_new() : Sensor(em_Val_global("UncalibratedMagnetometer").new_()) {
        return UncalibratedMagnetometer(em_Val_new(em_Val_global("UncalibratedMagnetometer", ));
      }


UncalibratedMagnetometer UncalibratedMagnetometer_new(const jb_Any* sensorOptions) : Sensor(em_Val_global("UncalibratedMagnetometer").new_(em_Val_from(sensorOptions))) {
        return UncalibratedMagnetometer(em_Val_new(em_Val_global("UncalibratedMagnetometer", em_Val_from(sensorOptions)));
      }


double UncalibratedMagnetometer_x(const UncalibratedMagnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "x"));
}


double UncalibratedMagnetometer_y(const UncalibratedMagnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "y"));
}


double UncalibratedMagnetometer_z(const UncalibratedMagnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "z"));
}


double UncalibratedMagnetometer_xBias(const UncalibratedMagnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "xBias"));
}


double UncalibratedMagnetometer_yBias(const UncalibratedMagnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "yBias"));
}


double UncalibratedMagnetometer_zBias(const UncalibratedMagnetometer *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "zBias"));
}

