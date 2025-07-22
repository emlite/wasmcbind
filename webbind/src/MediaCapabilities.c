#include <webbind/MediaCapabilities.h>
#include <webbind/MediaKeySystemAccess.h>


DEFINE_EMLITE_TYPE(MediaCapabilitiesDecodingInfo, em_Val);


MediaKeySystemAccess MediaCapabilitiesDecodingInfo_keySystemAccess(const MediaCapabilitiesDecodingInfo *self) {
    return em_Val_as(MediaKeySystemAccess, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keySystemAccess")));
}


void MediaCapabilitiesDecodingInfo_set_keySystemAccess(MediaCapabilitiesDecodingInfo* self, MediaKeySystemAccess * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keySystemAccess"), em_Val_from(value));
}


MediaDecodingConfiguration MediaCapabilitiesDecodingInfo_configuration(const MediaCapabilitiesDecodingInfo *self) {
    return em_Val_as(MediaDecodingConfiguration, em_Val_get(em_Val_as_val(self->inner), em_Val_from("configuration")));
}


void MediaCapabilitiesDecodingInfo_set_configuration(MediaCapabilitiesDecodingInfo* self, MediaDecodingConfiguration * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("configuration"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MediaDecodingConfiguration, em_Val);


MediaDecodingType MediaDecodingConfiguration_type(const MediaDecodingConfiguration *self) {
    return em_Val_as(MediaDecodingType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void MediaDecodingConfiguration_set_type(MediaDecodingConfiguration* self, MediaDecodingType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_Any MediaDecodingConfiguration_keySystemConfiguration(const MediaDecodingConfiguration *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keySystemConfiguration")));
}


void MediaDecodingConfiguration_set_keySystemConfiguration(MediaDecodingConfiguration* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keySystemConfiguration"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MediaCapabilitiesEncodingInfo, em_Val);


MediaEncodingConfiguration MediaCapabilitiesEncodingInfo_configuration(const MediaCapabilitiesEncodingInfo *self) {
    return em_Val_as(MediaEncodingConfiguration, em_Val_get(em_Val_as_val(self->inner), em_Val_from("configuration")));
}


void MediaCapabilitiesEncodingInfo_set_configuration(MediaCapabilitiesEncodingInfo* self, MediaEncodingConfiguration * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("configuration"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MediaEncodingConfiguration, em_Val);


MediaEncodingType MediaEncodingConfiguration_type(const MediaEncodingConfiguration *self) {
    return em_Val_as(MediaEncodingType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void MediaEncodingConfiguration_set_type(MediaEncodingConfiguration* self, MediaEncodingType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MediaCapabilities, em_Val);


jb_Promise MediaCapabilities_decodingInfo(MediaCapabilities* self , MediaDecodingConfiguration * configuration) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "decodingInfo", em_Val_from(configuration)));
}


jb_Promise MediaCapabilities_encodingInfo(MediaCapabilities* self , MediaEncodingConfiguration * configuration) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "encodingInfo", em_Val_from(configuration)));
}

