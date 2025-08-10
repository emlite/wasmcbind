#include <webbind/RTCPeerConnectionStats.h>

DEFINE_EMLITE_TYPE(RTCPeerConnectionStats, RTCStats);


unsigned long RTCPeerConnectionStats_dataChannelsOpened(const RTCPeerConnectionStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("dataChannelsOpened")));
}


void RTCPeerConnectionStats_set_dataChannelsOpened(RTCPeerConnectionStats* self, unsigned long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("dataChannelsOpened"), em_Val_from(value));
}


unsigned long RTCPeerConnectionStats_dataChannelsClosed(const RTCPeerConnectionStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("dataChannelsClosed")));
}


void RTCPeerConnectionStats_set_dataChannelsClosed(RTCPeerConnectionStats* self, unsigned long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("dataChannelsClosed"), em_Val_from(value));
}


RTCPeerConnectionStats RTCPeerConnectionStats_new() {
    em_Val obj = em_Val_object();
    return RTCPeerConnectionStats_from_val(&obj);
}

