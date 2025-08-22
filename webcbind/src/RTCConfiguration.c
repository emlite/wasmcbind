#include <webcbind/RTCConfiguration.h>

#include <webcbind/RTCCertificate.h>

DEFINE_EMLITE_TYPE(RTCConfiguration, em_Val);


jb_Array RTCConfiguration_iceServers(const RTCConfiguration *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("iceServers")));
}


void RTCConfiguration_set_iceServers(RTCConfiguration* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("iceServers"), em_Val_from(value));
}


RTCIceTransportPolicy RTCConfiguration_iceTransportPolicy(const RTCConfiguration *self) {
    return em_Val_as(RTCIceTransportPolicy, em_Val_get(em_Val_as_val(self->inner), em_Val_from("iceTransportPolicy")));
}


void RTCConfiguration_set_iceTransportPolicy(RTCConfiguration* self, RTCIceTransportPolicy * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("iceTransportPolicy"), em_Val_from(value));
}


RTCBundlePolicy RTCConfiguration_bundlePolicy(const RTCConfiguration *self) {
    return em_Val_as(RTCBundlePolicy, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bundlePolicy")));
}


void RTCConfiguration_set_bundlePolicy(RTCConfiguration* self, RTCBundlePolicy * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bundlePolicy"), em_Val_from(value));
}


RTCRtcpMuxPolicy RTCConfiguration_rtcpMuxPolicy(const RTCConfiguration *self) {
    return em_Val_as(RTCRtcpMuxPolicy, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rtcpMuxPolicy")));
}


void RTCConfiguration_set_rtcpMuxPolicy(RTCConfiguration* self, RTCRtcpMuxPolicy * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rtcpMuxPolicy"), em_Val_from(value));
}


jb_Array RTCConfiguration_certificates(const RTCConfiguration *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("certificates")));
}


void RTCConfiguration_set_certificates(RTCConfiguration* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("certificates"), em_Val_from(value));
}


unsigned char RTCConfiguration_iceCandidatePoolSize(const RTCConfiguration *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("iceCandidatePoolSize")));
}


void RTCConfiguration_set_iceCandidatePoolSize(RTCConfiguration* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("iceCandidatePoolSize"), em_Val_from(value));
}


RTCConfiguration RTCConfiguration_new() {
    em_Val obj = em_Val_object();
    return RTCConfiguration_from_val(&obj);
}

