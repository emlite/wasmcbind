#include <webcbind/MediaCapabilitiesKeySystemConfiguration.h>

DEFINE_EMLITE_TYPE(MediaCapabilitiesKeySystemConfiguration, em_Val);


jb_String MediaCapabilitiesKeySystemConfiguration_keySystem(const MediaCapabilitiesKeySystemConfiguration *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keySystem")));
}


void MediaCapabilitiesKeySystemConfiguration_set_keySystem(MediaCapabilitiesKeySystemConfiguration* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keySystem"), em_Val_from(value));
}


jb_String MediaCapabilitiesKeySystemConfiguration_initDataType(const MediaCapabilitiesKeySystemConfiguration *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("initDataType")));
}


void MediaCapabilitiesKeySystemConfiguration_set_initDataType(MediaCapabilitiesKeySystemConfiguration* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("initDataType"), em_Val_from(value));
}


MediaKeysRequirement MediaCapabilitiesKeySystemConfiguration_distinctiveIdentifier(const MediaCapabilitiesKeySystemConfiguration *self) {
    return em_Val_as(MediaKeysRequirement, em_Val_get(em_Val_as_val(self->inner), em_Val_from("distinctiveIdentifier")));
}


void MediaCapabilitiesKeySystemConfiguration_set_distinctiveIdentifier(MediaCapabilitiesKeySystemConfiguration* self, MediaKeysRequirement * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("distinctiveIdentifier"), em_Val_from(value));
}


MediaKeysRequirement MediaCapabilitiesKeySystemConfiguration_persistentState(const MediaCapabilitiesKeySystemConfiguration *self) {
    return em_Val_as(MediaKeysRequirement, em_Val_get(em_Val_as_val(self->inner), em_Val_from("persistentState")));
}


void MediaCapabilitiesKeySystemConfiguration_set_persistentState(MediaCapabilitiesKeySystemConfiguration* self, MediaKeysRequirement * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("persistentState"), em_Val_from(value));
}


jb_Array MediaCapabilitiesKeySystemConfiguration_sessionTypes(const MediaCapabilitiesKeySystemConfiguration *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sessionTypes")));
}


void MediaCapabilitiesKeySystemConfiguration_set_sessionTypes(MediaCapabilitiesKeySystemConfiguration* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sessionTypes"), em_Val_from(value));
}


KeySystemTrackConfiguration MediaCapabilitiesKeySystemConfiguration_audio(const MediaCapabilitiesKeySystemConfiguration *self) {
    return em_Val_as(KeySystemTrackConfiguration, em_Val_get(em_Val_as_val(self->inner), em_Val_from("audio")));
}


void MediaCapabilitiesKeySystemConfiguration_set_audio(MediaCapabilitiesKeySystemConfiguration* self, KeySystemTrackConfiguration * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("audio"), em_Val_from(value));
}


KeySystemTrackConfiguration MediaCapabilitiesKeySystemConfiguration_video(const MediaCapabilitiesKeySystemConfiguration *self) {
    return em_Val_as(KeySystemTrackConfiguration, em_Val_get(em_Val_as_val(self->inner), em_Val_from("video")));
}


void MediaCapabilitiesKeySystemConfiguration_set_video(MediaCapabilitiesKeySystemConfiguration* self, KeySystemTrackConfiguration * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("video"), em_Val_from(value));
}


MediaCapabilitiesKeySystemConfiguration MediaCapabilitiesKeySystemConfiguration_new() {
    em_Val obj = em_Val_object();
    return MediaCapabilitiesKeySystemConfiguration_from_val(&obj);
}

