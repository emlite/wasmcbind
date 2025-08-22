#include <webcbind/RTCIceGatherOptions.h>

DEFINE_EMLITE_TYPE(RTCIceGatherOptions, em_Val);


RTCIceTransportPolicy RTCIceGatherOptions_gatherPolicy(const RTCIceGatherOptions *self) {
    return em_Val_as(RTCIceTransportPolicy, em_Val_get(em_Val_as_val(self->inner), em_Val_from("gatherPolicy")));
}


void RTCIceGatherOptions_set_gatherPolicy(RTCIceGatherOptions* self, RTCIceTransportPolicy * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("gatherPolicy"), em_Val_from(value));
}


jb_Array RTCIceGatherOptions_iceServers(const RTCIceGatherOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("iceServers")));
}


void RTCIceGatherOptions_set_iceServers(RTCIceGatherOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("iceServers"), em_Val_from(value));
}


RTCIceGatherOptions RTCIceGatherOptions_new() {
    em_Val obj = em_Val_object();
    return RTCIceGatherOptions_from_val(&obj);
}

