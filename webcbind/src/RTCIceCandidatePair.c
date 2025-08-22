#include <webcbind/RTCIceCandidatePair.h>

#include <webcbind/RTCIceCandidate.h>

DEFINE_EMLITE_TYPE(RTCIceCandidatePair, em_Val);


RTCIceCandidate RTCIceCandidatePair_local(const RTCIceCandidatePair *self) {
    return em_Val_as(RTCIceCandidate, em_Val_get(em_Val_as_val(self->inner), em_Val_from("local")));
}


RTCIceCandidate RTCIceCandidatePair_remote(const RTCIceCandidatePair *self) {
    return em_Val_as(RTCIceCandidate, em_Val_get(em_Val_as_val(self->inner), em_Val_from("remote")));
}

