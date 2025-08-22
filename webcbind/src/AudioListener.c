#include <webcbind/AudioListener.h>

#include <webcbind/AudioParam.h>

DEFINE_EMLITE_TYPE(AudioListener, em_Val);


AudioParam AudioListener_positionX(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), em_Val_from("positionX")));
}


AudioParam AudioListener_positionY(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), em_Val_from("positionY")));
}


AudioParam AudioListener_positionZ(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), em_Val_from("positionZ")));
}


AudioParam AudioListener_forwardX(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), em_Val_from("forwardX")));
}


AudioParam AudioListener_forwardY(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), em_Val_from("forwardY")));
}


AudioParam AudioListener_forwardZ(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), em_Val_from("forwardZ")));
}


AudioParam AudioListener_upX(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), em_Val_from("upX")));
}


AudioParam AudioListener_upY(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), em_Val_from("upY")));
}


AudioParam AudioListener_upZ(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), em_Val_from("upZ")));
}


jb_Undefined AudioListener_setPosition(AudioListener* self , float x, float y, float z) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setPosition", em_Val_from(x), em_Val_from(y), em_Val_from(z)));
}


jb_Undefined AudioListener_setOrientation(AudioListener* self , float x, float y, float z, float xUp, float yUp, float zUp) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setOrientation", em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(xUp), em_Val_from(yUp), em_Val_from(zUp)));
}

