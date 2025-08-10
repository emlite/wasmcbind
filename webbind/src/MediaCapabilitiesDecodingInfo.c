#include <webbind/MediaCapabilitiesDecodingInfo.h>

#include <webbind/MediaKeySystemAccess.h>

DEFINE_EMLITE_TYPE(MediaCapabilitiesDecodingInfo, MediaCapabilitiesInfo);


MediaKeySystemAccess MediaCapabilitiesDecodingInfo_keySystemAccess(const MediaCapabilitiesDecodingInfo *self) {
    return em_Val_as(MediaKeySystemAccess, em_Val_get(MediaCapabilitiesInfo_as_val(self->inner), em_Val_from("keySystemAccess")));
}


void MediaCapabilitiesDecodingInfo_set_keySystemAccess(MediaCapabilitiesDecodingInfo* self, MediaKeySystemAccess * value) {
    em_Val_set(MediaCapabilitiesInfo_as_val(self->inner), em_Val_from("keySystemAccess"), em_Val_from(value));
}


MediaDecodingConfiguration MediaCapabilitiesDecodingInfo_configuration(const MediaCapabilitiesDecodingInfo *self) {
    return em_Val_as(MediaDecodingConfiguration, em_Val_get(MediaCapabilitiesInfo_as_val(self->inner), em_Val_from("configuration")));
}


void MediaCapabilitiesDecodingInfo_set_configuration(MediaCapabilitiesDecodingInfo* self, MediaDecodingConfiguration * value) {
    em_Val_set(MediaCapabilitiesInfo_as_val(self->inner), em_Val_from("configuration"), em_Val_from(value));
}


MediaCapabilitiesDecodingInfo MediaCapabilitiesDecodingInfo_new() {
    em_Val obj = em_Val_object();
    return MediaCapabilitiesDecodingInfo_from_val(&obj);
}

