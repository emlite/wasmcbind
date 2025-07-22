#include <webbind/ProximitySensor.h>


DEFINE_EMLITE_TYPE(ProximitySensor, Sensor);


ProximitySensor ProximitySensor_new0() {
        em_Val vv = em_Val_new(em_Val_global("ProximitySensor") );
        return ProximitySensor_from_val(&vv);
      }


ProximitySensor ProximitySensor_new1(jb_Any * sensorOptions) {
        em_Val vv = em_Val_new(em_Val_global("ProximitySensor") , em_Val_from(sensorOptions));
        return ProximitySensor_from_val(&vv);
      }


double ProximitySensor_distance(const ProximitySensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("distance")));
}


double ProximitySensor_max(const ProximitySensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("max")));
}


bool ProximitySensor_near(const ProximitySensor *self) {
    return em_Val_as(bool, em_Val_get(Sensor_as_val(self->inner), em_Val_from("near")));
}

