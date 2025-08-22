#include <webcbind/MediaKeySystemMediaCapability.h>

DEFINE_EMLITE_TYPE(MediaKeySystemMediaCapability, em_Val);


jb_String MediaKeySystemMediaCapability_contentType(const MediaKeySystemMediaCapability *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contentType")));
}


void MediaKeySystemMediaCapability_set_contentType(MediaKeySystemMediaCapability* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("contentType"), em_Val_from(value));
}


jb_String MediaKeySystemMediaCapability_encryptionScheme(const MediaKeySystemMediaCapability *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("encryptionScheme")));
}


void MediaKeySystemMediaCapability_set_encryptionScheme(MediaKeySystemMediaCapability* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("encryptionScheme"), em_Val_from(value));
}


jb_String MediaKeySystemMediaCapability_robustness(const MediaKeySystemMediaCapability *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("robustness")));
}


void MediaKeySystemMediaCapability_set_robustness(MediaKeySystemMediaCapability* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("robustness"), em_Val_from(value));
}


MediaKeySystemMediaCapability MediaKeySystemMediaCapability_new() {
    em_Val obj = em_Val_object();
    return MediaKeySystemMediaCapability_from_val(&obj);
}

