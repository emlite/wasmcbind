#include <webbind/GeolocationPositionError.h>

DEFINE_EMLITE_TYPE(GeolocationPositionError, em_Val);


unsigned short GeolocationPositionError_code(const GeolocationPositionError *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("code")));
}


jb_String GeolocationPositionError_message(const GeolocationPositionError *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("message")));
}

