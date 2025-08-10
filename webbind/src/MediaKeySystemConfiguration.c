#include <webbind/MediaKeySystemConfiguration.h>

DEFINE_EMLITE_TYPE(MediaKeySystemConfiguration, em_Val);


jb_String MediaKeySystemConfiguration_label(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void MediaKeySystemConfiguration_set_label(MediaKeySystemConfiguration* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


jb_Array MediaKeySystemConfiguration_initDataTypes(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("initDataTypes")));
}


void MediaKeySystemConfiguration_set_initDataTypes(MediaKeySystemConfiguration* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("initDataTypes"), em_Val_from(value));
}


jb_Array MediaKeySystemConfiguration_audioCapabilities(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("audioCapabilities")));
}


void MediaKeySystemConfiguration_set_audioCapabilities(MediaKeySystemConfiguration* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("audioCapabilities"), em_Val_from(value));
}


jb_Array MediaKeySystemConfiguration_videoCapabilities(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("videoCapabilities")));
}


void MediaKeySystemConfiguration_set_videoCapabilities(MediaKeySystemConfiguration* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("videoCapabilities"), em_Val_from(value));
}


MediaKeysRequirement MediaKeySystemConfiguration_distinctiveIdentifier(const MediaKeySystemConfiguration *self) {
    return em_Val_as(MediaKeysRequirement, em_Val_get(em_Val_as_val(self->inner), em_Val_from("distinctiveIdentifier")));
}


void MediaKeySystemConfiguration_set_distinctiveIdentifier(MediaKeySystemConfiguration* self, MediaKeysRequirement * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("distinctiveIdentifier"), em_Val_from(value));
}


MediaKeysRequirement MediaKeySystemConfiguration_persistentState(const MediaKeySystemConfiguration *self) {
    return em_Val_as(MediaKeysRequirement, em_Val_get(em_Val_as_val(self->inner), em_Val_from("persistentState")));
}


void MediaKeySystemConfiguration_set_persistentState(MediaKeySystemConfiguration* self, MediaKeysRequirement * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("persistentState"), em_Val_from(value));
}


jb_Array MediaKeySystemConfiguration_sessionTypes(const MediaKeySystemConfiguration *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sessionTypes")));
}


void MediaKeySystemConfiguration_set_sessionTypes(MediaKeySystemConfiguration* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sessionTypes"), em_Val_from(value));
}


MediaKeySystemConfiguration MediaKeySystemConfiguration_new() {
    em_Val obj = em_Val_object();
    return MediaKeySystemConfiguration_from_val(&obj);
}

