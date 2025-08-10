#include <webbind/MediaTrackSupportedConstraints.h>

DEFINE_EMLITE_TYPE(MediaTrackSupportedConstraints, em_Val);


bool MediaTrackSupportedConstraints_displaySurface(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displaySurface")));
}


void MediaTrackSupportedConstraints_set_displaySurface(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displaySurface"), em_Val_from(value));
}


bool MediaTrackSupportedConstraints_logicalSurface(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("logicalSurface")));
}


void MediaTrackSupportedConstraints_set_logicalSurface(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("logicalSurface"), em_Val_from(value));
}


bool MediaTrackSupportedConstraints_cursor(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cursor")));
}


void MediaTrackSupportedConstraints_set_cursor(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cursor"), em_Val_from(value));
}


bool MediaTrackSupportedConstraints_restrictOwnAudio(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("restrictOwnAudio")));
}


void MediaTrackSupportedConstraints_set_restrictOwnAudio(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("restrictOwnAudio"), em_Val_from(value));
}


bool MediaTrackSupportedConstraints_suppressLocalAudioPlayback(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("suppressLocalAudioPlayback")));
}


void MediaTrackSupportedConstraints_set_suppressLocalAudioPlayback(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("suppressLocalAudioPlayback"), em_Val_from(value));
}


MediaTrackSupportedConstraints MediaTrackSupportedConstraints_new() {
    em_Val obj = em_Val_object();
    return MediaTrackSupportedConstraints_from_val(&obj);
}

