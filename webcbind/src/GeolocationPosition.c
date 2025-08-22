#include <webcbind/GeolocationPosition.h>

#include <webcbind/GeolocationCoordinates.h>

DEFINE_EMLITE_TYPE(GeolocationPosition, em_Val);


GeolocationCoordinates GeolocationPosition_coords(const GeolocationPosition *self) {
    return em_Val_as(GeolocationCoordinates, em_Val_get(em_Val_as_val(self->inner), em_Val_from("coords")));
}


jb_Any GeolocationPosition_timestamp(const GeolocationPosition *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


jb_Object GeolocationPosition_toJSON(GeolocationPosition* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

