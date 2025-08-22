#include <webcbind/GeolocationSensor.h>

#include <webcbind/GeolocationSensorOptions.h>
#include <webcbind/GeolocationSensorReading.h>
#include <webcbind/ReadOptions.h>

DEFINE_EMLITE_TYPE(GeolocationSensor, Sensor);


GeolocationSensor GeolocationSensor_new0() {
        em_Val vv = em_Val_new(em_Val_global("GeolocationSensor") );
        return GeolocationSensor_from_val(&vv);
      }


GeolocationSensor GeolocationSensor_new1(GeolocationSensorOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("GeolocationSensor") , em_Val_from(options));
        return GeolocationSensor_from_val(&vv);
      }


jb_Promise GeolocationSensor_read0(GeolocationSensor* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("geolocationsensor"), "read"));
}


jb_Promise GeolocationSensor_read1(GeolocationSensor* self , ReadOptions * readOptions) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("geolocationsensor"), "read", em_Val_from(readOptions)));
}


double GeolocationSensor_latitude(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("latitude")));
}


double GeolocationSensor_longitude(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("longitude")));
}


double GeolocationSensor_altitude(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("altitude")));
}


double GeolocationSensor_accuracy(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("accuracy")));
}


double GeolocationSensor_altitudeAccuracy(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("altitudeAccuracy")));
}


double GeolocationSensor_heading(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("heading")));
}


double GeolocationSensor_speed(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), em_Val_from("speed")));
}

