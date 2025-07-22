#include <webbind/RTCIceCandidatePair.h>
#include <webbind/RTCIceCandidate.h>


DEFINE_EMLITE_TYPE(RTCIceCandidatePair, em_Val);


RTCIceCandidate RTCIceCandidatePair_local(const RTCIceCandidatePair *self) {
    return em_Val_as(RTCIceCandidate, em_Val_get(em_Val_as_val(self->inner), "local"));
}


RTCIceCandidate RTCIceCandidatePair_remote(const RTCIceCandidatePair *self) {
    return em_Val_as(RTCIceCandidate, em_Val_get(em_Val_as_val(self->inner), "remote"));
}

