#include <webbind/GeolocationPositionError.h>


DEFINE_EMLITE_TYPE(GeolocationPositionError, em_Val);


unsigned short GeolocationPositionError_code(const GeolocationPositionError *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "code"));
}


jb_DOMString GeolocationPositionError_message(const GeolocationPositionError *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "message"));
}

