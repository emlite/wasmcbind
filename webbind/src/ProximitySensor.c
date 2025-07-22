#include <webbind/ProximitySensor.h>


DEFINE_EMLITE_TYPE(ProximitySensor, Sensor);


ProximitySensor ProximitySensor_new() : Sensor(em_Val_global("ProximitySensor").new_()) {
        return ProximitySensor(em_Val_new(em_Val_global("ProximitySensor", ));
      }


ProximitySensor ProximitySensor_new(const jb_Any* sensorOptions) : Sensor(em_Val_global("ProximitySensor").new_(em_Val_from(sensorOptions))) {
        return ProximitySensor(em_Val_new(em_Val_global("ProximitySensor", em_Val_from(sensorOptions)));
      }


double ProximitySensor_distance(const ProximitySensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "distance"));
}


double ProximitySensor_max(const ProximitySensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "max"));
}


bool ProximitySensor_near(const ProximitySensor *self) {
    return em_Val_as(bool, em_Val_get(Sensor_as_val(self->inner), "near"));
}

