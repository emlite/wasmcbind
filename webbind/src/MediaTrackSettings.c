#include <webbind/MediaTrackSettings.h>

DEFINE_EMLITE_TYPE(MediaTrackSettings, em_Val);


jb_String MediaTrackSettings_displaySurface(const MediaTrackSettings *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displaySurface")));
}


void MediaTrackSettings_set_displaySurface(MediaTrackSettings* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displaySurface"), em_Val_from(value));
}


bool MediaTrackSettings_logicalSurface(const MediaTrackSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("logicalSurface")));
}


void MediaTrackSettings_set_logicalSurface(MediaTrackSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("logicalSurface"), em_Val_from(value));
}


jb_String MediaTrackSettings_cursor(const MediaTrackSettings *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cursor")));
}


void MediaTrackSettings_set_cursor(MediaTrackSettings* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cursor"), em_Val_from(value));
}


bool MediaTrackSettings_restrictOwnAudio(const MediaTrackSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("restrictOwnAudio")));
}


void MediaTrackSettings_set_restrictOwnAudio(MediaTrackSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("restrictOwnAudio"), em_Val_from(value));
}


bool MediaTrackSettings_suppressLocalAudioPlayback(const MediaTrackSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("suppressLocalAudioPlayback")));
}


void MediaTrackSettings_set_suppressLocalAudioPlayback(MediaTrackSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("suppressLocalAudioPlayback"), em_Val_from(value));
}


double MediaTrackSettings_screenPixelRatio(const MediaTrackSettings *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("screenPixelRatio")));
}


void MediaTrackSettings_set_screenPixelRatio(MediaTrackSettings* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("screenPixelRatio"), em_Val_from(value));
}


MediaTrackSettings MediaTrackSettings_new() {
    em_Val obj = em_Val_object();
    return MediaTrackSettings_from_val(&obj);
}

