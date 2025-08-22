#include <webcbind/MediaDecodingConfiguration.h>

DEFINE_EMLITE_TYPE(MediaDecodingConfiguration, MediaConfiguration);


MediaDecodingType MediaDecodingConfiguration_type(const MediaDecodingConfiguration *self) {
    return em_Val_as(MediaDecodingType, em_Val_get(MediaConfiguration_as_val(self->inner), em_Val_from("type")));
}


void MediaDecodingConfiguration_set_type(MediaDecodingConfiguration* self, MediaDecodingType * value) {
    em_Val_set(MediaConfiguration_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


MediaCapabilitiesKeySystemConfiguration MediaDecodingConfiguration_keySystemConfiguration(const MediaDecodingConfiguration *self) {
    return em_Val_as(MediaCapabilitiesKeySystemConfiguration, em_Val_get(MediaConfiguration_as_val(self->inner), em_Val_from("keySystemConfiguration")));
}


void MediaDecodingConfiguration_set_keySystemConfiguration(MediaDecodingConfiguration* self, MediaCapabilitiesKeySystemConfiguration * value) {
    em_Val_set(MediaConfiguration_as_val(self->inner), em_Val_from("keySystemConfiguration"), em_Val_from(value));
}


MediaDecodingConfiguration MediaDecodingConfiguration_new() {
    em_Val obj = em_Val_object();
    return MediaDecodingConfiguration_from_val(&obj);
}

