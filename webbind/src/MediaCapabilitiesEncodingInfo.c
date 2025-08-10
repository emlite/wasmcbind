#include <webbind/MediaCapabilitiesEncodingInfo.h>

DEFINE_EMLITE_TYPE(MediaCapabilitiesEncodingInfo, MediaCapabilitiesInfo);


MediaEncodingConfiguration MediaCapabilitiesEncodingInfo_configuration(const MediaCapabilitiesEncodingInfo *self) {
    return em_Val_as(MediaEncodingConfiguration, em_Val_get(MediaCapabilitiesInfo_as_val(self->inner), em_Val_from("configuration")));
}


void MediaCapabilitiesEncodingInfo_set_configuration(MediaCapabilitiesEncodingInfo* self, MediaEncodingConfiguration * value) {
    em_Val_set(MediaCapabilitiesInfo_as_val(self->inner), em_Val_from("configuration"), em_Val_from(value));
}


MediaCapabilitiesEncodingInfo MediaCapabilitiesEncodingInfo_new() {
    em_Val obj = em_Val_object();
    return MediaCapabilitiesEncodingInfo_from_val(&obj);
}

