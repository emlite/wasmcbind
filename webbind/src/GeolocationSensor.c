#include <webbind/GeolocationSensor.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(GeolocationSensorReading, em_Val);


jb_Any GeolocationSensorReading_timestamp(const GeolocationSensorReading *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


void GeolocationSensorReading_set_timestamp(GeolocationSensorReading* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestamp"), em_Val_from(value));
}


double GeolocationSensorReading_latitude(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("latitude")));
}


void GeolocationSensorReading_set_latitude(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("latitude"), em_Val_from(value));
}


double GeolocationSensorReading_longitude(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("longitude")));
}


void GeolocationSensorReading_set_longitude(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("longitude"), em_Val_from(value));
}


double GeolocationSensorReading_altitude(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("altitude")));
}


void GeolocationSensorReading_set_altitude(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("altitude"), em_Val_from(value));
}


double GeolocationSensorReading_accuracy(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("accuracy")));
}


void GeolocationSensorReading_set_accuracy(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("accuracy"), em_Val_from(value));
}


double GeolocationSensorReading_altitudeAccuracy(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("altitudeAccuracy")));
}


void GeolocationSensorReading_set_altitudeAccuracy(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("altitudeAccuracy"), em_Val_from(value));
}


double GeolocationSensorReading_heading(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("heading")));
}


void GeolocationSensorReading_set_heading(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("heading"), em_Val_from(value));
}


double GeolocationSensorReading_speed(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("speed")));
}


void GeolocationSensorReading_set_speed(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("speed"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(ReadOptions, em_Val);


AbortSignal ReadOptions_signal(const ReadOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void ReadOptions_set_signal(ReadOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(GeolocationSensor, Sensor);


GeolocationSensor GeolocationSensor_new0() {
        em_Val vv = em_Val_new(em_Val_global("GeolocationSensor") );
        return GeolocationSensor_from_val(&vv);
      }


GeolocationSensor GeolocationSensor_new1(jb_Any * options) {
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

