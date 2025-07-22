#include <webbind/AudioListener.h>
#include <webbind/AudioParam.h>


DEFINE_EMLITE_TYPE(AudioListener, em_Val);


AudioParam AudioListener_positionX(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), "positionX"));
}


AudioParam AudioListener_positionY(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), "positionY"));
}


AudioParam AudioListener_positionZ(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), "positionZ"));
}


AudioParam AudioListener_forwardX(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), "forwardX"));
}


AudioParam AudioListener_forwardY(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), "forwardY"));
}


AudioParam AudioListener_forwardZ(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), "forwardZ"));
}


AudioParam AudioListener_upX(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), "upX"));
}


AudioParam AudioListener_upY(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), "upY"));
}


AudioParam AudioListener_upZ(const AudioListener *self) {
    return em_Val_as(AudioParam, em_Val_get(em_Val_as_val(self->inner), "upZ"));
}


jb_Undefined AudioListener_setPosition(AudioListener* self , float x, float y, float z) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setPosition", em_Val_from(x), em_Val_from(y), em_Val_from(z)));
}


jb_Undefined AudioListener_setOrientation(AudioListener* self , float x, float y, float z, float xUp, float yUp, float zUp) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setOrientation", em_Val_from(x), em_Val_from(y), em_Val_from(z), em_Val_from(xUp), em_Val_from(yUp), em_Val_from(zUp)));
}

