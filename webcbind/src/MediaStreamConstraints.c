#include <webcbind/MediaStreamConstraints.h>

DEFINE_EMLITE_TYPE(MediaStreamConstraints, em_Val);


jb_String MediaStreamConstraints_peerIdentity(const MediaStreamConstraints *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("peerIdentity")));
}


void MediaStreamConstraints_set_peerIdentity(MediaStreamConstraints* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("peerIdentity"), em_Val_from(value));
}


MediaStreamConstraints MediaStreamConstraints_new() {
    em_Val obj = em_Val_object();
    return MediaStreamConstraints_from_val(&obj);
}

