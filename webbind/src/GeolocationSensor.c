#include <webbind/GeolocationSensor.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(GeolocationSensorReading, em_Val);


jb_Any GeolocationSensorReading_timestamp(const GeolocationSensorReading *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "timestamp"));
}


void GeolocationSensorReading_set_timestamp(GeolocationSensorReading* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "timestamp", value);
}


double GeolocationSensorReading_latitude(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "latitude"));
}


void GeolocationSensorReading_set_latitude(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "latitude", value);
}


double GeolocationSensorReading_longitude(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "longitude"));
}


void GeolocationSensorReading_set_longitude(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "longitude", value);
}


double GeolocationSensorReading_altitude(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "altitude"));
}


void GeolocationSensorReading_set_altitude(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "altitude", value);
}


double GeolocationSensorReading_accuracy(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "accuracy"));
}


void GeolocationSensorReading_set_accuracy(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "accuracy", value);
}


double GeolocationSensorReading_altitudeAccuracy(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "altitudeAccuracy"));
}


void GeolocationSensorReading_set_altitudeAccuracy(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "altitudeAccuracy", value);
}


double GeolocationSensorReading_heading(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "heading"));
}


void GeolocationSensorReading_set_heading(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "heading", value);
}


double GeolocationSensorReading_speed(const GeolocationSensorReading *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "speed"));
}


void GeolocationSensorReading_set_speed(GeolocationSensorReading* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "speed", value);
}

DEFINE_EMLITE_TYPE(ReadOptions, em_Val);


AbortSignal ReadOptions_signal(const ReadOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void ReadOptions_set_signal(ReadOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}

DEFINE_EMLITE_TYPE(GeolocationSensor, Sensor);


GeolocationSensor GeolocationSensor_new() : Sensor(em_Val_global("GeolocationSensor").new_()) {
        return GeolocationSensor(em_Val_new(em_Val_global("GeolocationSensor", ));
      }


GeolocationSensor GeolocationSensor_new(const jb_Any* options) : Sensor(em_Val_global("GeolocationSensor").new_(em_Val_from(options))) {
        return GeolocationSensor(em_Val_new(em_Val_global("GeolocationSensor", em_Val_from(options)));
      }


jb_Promise GeolocationSensor_read(GeolocationSensor* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("geolocationsensor"), "read"));
}


jb_Promise GeolocationSensor_read(GeolocationSensor* self , const ReadOptions* readOptions) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("geolocationsensor"), "read", em_Val_from(readOptions)));
}


double GeolocationSensor_latitude(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "latitude"));
}


double GeolocationSensor_longitude(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "longitude"));
}


double GeolocationSensor_altitude(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "altitude"));
}


double GeolocationSensor_accuracy(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "accuracy"));
}


double GeolocationSensor_altitudeAccuracy(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "altitudeAccuracy"));
}


double GeolocationSensor_heading(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "heading"));
}


double GeolocationSensor_speed(const GeolocationSensor *self) {
    return em_Val_as(double, em_Val_get(Sensor_as_val(self->inner), "speed"));
}

