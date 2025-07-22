#include <webbind/GeolocationCoordinates.h>


DEFINE_EMLITE_TYPE(GeolocationCoordinates, em_Val);


double GeolocationCoordinates_accuracy(const GeolocationCoordinates *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("accuracy")));
}


double GeolocationCoordinates_latitude(const GeolocationCoordinates *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("latitude")));
}


double GeolocationCoordinates_longitude(const GeolocationCoordinates *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("longitude")));
}


double GeolocationCoordinates_altitude(const GeolocationCoordinates *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("altitude")));
}


double GeolocationCoordinates_altitudeAccuracy(const GeolocationCoordinates *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("altitudeAccuracy")));
}


double GeolocationCoordinates_heading(const GeolocationCoordinates *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("heading")));
}


double GeolocationCoordinates_speed(const GeolocationCoordinates *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("speed")));
}


jb_Object GeolocationCoordinates_toJSON(GeolocationCoordinates* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

