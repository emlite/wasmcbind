#include <webcbind/MediaKeysPolicy.h>

DEFINE_EMLITE_TYPE(MediaKeysPolicy, em_Val);


jb_String MediaKeysPolicy_minHdcpVersion(const MediaKeysPolicy *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("minHdcpVersion")));
}


void MediaKeysPolicy_set_minHdcpVersion(MediaKeysPolicy* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("minHdcpVersion"), em_Val_from(value));
}


MediaKeysPolicy MediaKeysPolicy_new() {
    em_Val obj = em_Val_object();
    return MediaKeysPolicy_from_val(&obj);
}

