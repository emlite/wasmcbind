#include <webcbind/MediaPositionState.h>

DEFINE_EMLITE_TYPE(MediaPositionState, em_Val);


double MediaPositionState_duration(const MediaPositionState *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duration")));
}


void MediaPositionState_set_duration(MediaPositionState* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("duration"), em_Val_from(value));
}


double MediaPositionState_playbackRate(const MediaPositionState *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("playbackRate")));
}


void MediaPositionState_set_playbackRate(MediaPositionState* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("playbackRate"), em_Val_from(value));
}


double MediaPositionState_position(const MediaPositionState *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("position")));
}


void MediaPositionState_set_position(MediaPositionState* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("position"), em_Val_from(value));
}


MediaPositionState MediaPositionState_new() {
    em_Val obj = em_Val_object();
    return MediaPositionState_from_val(&obj);
}

