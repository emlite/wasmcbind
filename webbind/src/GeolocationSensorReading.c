#include <webbind/GeolocationSensorReading.h>

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


GeolocationSensorReading GeolocationSensorReading_new() {
    em_Val obj = em_Val_object();
    return GeolocationSensorReading_from_val(&obj);
}

