#include <webcbind/RTCRtcpParameters.h>

DEFINE_EMLITE_TYPE(RTCRtcpParameters, em_Val);


jb_String RTCRtcpParameters_cname(const RTCRtcpParameters *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cname")));
}


void RTCRtcpParameters_set_cname(RTCRtcpParameters* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cname"), em_Val_from(value));
}


bool RTCRtcpParameters_reducedSize(const RTCRtcpParameters *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reducedSize")));
}


void RTCRtcpParameters_set_reducedSize(RTCRtcpParameters* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("reducedSize"), em_Val_from(value));
}


RTCRtcpParameters RTCRtcpParameters_new() {
    em_Val obj = em_Val_object();
    return RTCRtcpParameters_from_val(&obj);
}

