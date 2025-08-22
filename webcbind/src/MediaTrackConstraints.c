#include <webcbind/MediaTrackConstraints.h>

DEFINE_EMLITE_TYPE(MediaTrackConstraints, MediaTrackConstraintSet);


jb_Array MediaTrackConstraints_advanced(const MediaTrackConstraints *self) {
    return em_Val_as(jb_Array, em_Val_get(MediaTrackConstraintSet_as_val(self->inner), em_Val_from("advanced")));
}


void MediaTrackConstraints_set_advanced(MediaTrackConstraints* self, jb_Array * value) {
    em_Val_set(MediaTrackConstraintSet_as_val(self->inner), em_Val_from("advanced"), em_Val_from(value));
}


MediaTrackConstraints MediaTrackConstraints_new() {
    em_Val obj = em_Val_object();
    return MediaTrackConstraints_from_val(&obj);
}

