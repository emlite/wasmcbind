#include <webcbind/MediaCapabilitiesInfo.h>

DEFINE_EMLITE_TYPE(MediaCapabilitiesInfo, em_Val);


bool MediaCapabilitiesInfo_supported(const MediaCapabilitiesInfo *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supported")));
}


void MediaCapabilitiesInfo_set_supported(MediaCapabilitiesInfo* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supported"), em_Val_from(value));
}


bool MediaCapabilitiesInfo_smooth(const MediaCapabilitiesInfo *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("smooth")));
}


void MediaCapabilitiesInfo_set_smooth(MediaCapabilitiesInfo* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("smooth"), em_Val_from(value));
}


bool MediaCapabilitiesInfo_powerEfficient(const MediaCapabilitiesInfo *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("powerEfficient")));
}


void MediaCapabilitiesInfo_set_powerEfficient(MediaCapabilitiesInfo* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("powerEfficient"), em_Val_from(value));
}


MediaCapabilitiesInfo MediaCapabilitiesInfo_new() {
    em_Val obj = em_Val_object();
    return MediaCapabilitiesInfo_from_val(&obj);
}

