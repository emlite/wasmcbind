#include <webcbind/MediaTrackConstraintSet.h>

DEFINE_EMLITE_TYPE(MediaTrackConstraintSet, em_Val);


jb_Any MediaTrackConstraintSet_displaySurface(const MediaTrackConstraintSet *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displaySurface")));
}


void MediaTrackConstraintSet_set_displaySurface(MediaTrackConstraintSet* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displaySurface"), em_Val_from(value));
}


jb_Any MediaTrackConstraintSet_logicalSurface(const MediaTrackConstraintSet *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("logicalSurface")));
}


void MediaTrackConstraintSet_set_logicalSurface(MediaTrackConstraintSet* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("logicalSurface"), em_Val_from(value));
}


jb_Any MediaTrackConstraintSet_cursor(const MediaTrackConstraintSet *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cursor")));
}


void MediaTrackConstraintSet_set_cursor(MediaTrackConstraintSet* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cursor"), em_Val_from(value));
}


jb_Any MediaTrackConstraintSet_restrictOwnAudio(const MediaTrackConstraintSet *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("restrictOwnAudio")));
}


void MediaTrackConstraintSet_set_restrictOwnAudio(MediaTrackConstraintSet* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("restrictOwnAudio"), em_Val_from(value));
}


jb_Any MediaTrackConstraintSet_suppressLocalAudioPlayback(const MediaTrackConstraintSet *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("suppressLocalAudioPlayback")));
}


void MediaTrackConstraintSet_set_suppressLocalAudioPlayback(MediaTrackConstraintSet* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("suppressLocalAudioPlayback"), em_Val_from(value));
}


MediaTrackConstraintSet MediaTrackConstraintSet_new() {
    em_Val obj = em_Val_object();
    return MediaTrackConstraintSet_from_val(&obj);
}

