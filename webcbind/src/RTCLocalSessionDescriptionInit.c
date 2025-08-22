#include <webcbind/RTCLocalSessionDescriptionInit.h>

DEFINE_EMLITE_TYPE(RTCLocalSessionDescriptionInit, em_Val);


RTCSdpType RTCLocalSessionDescriptionInit_type(const RTCLocalSessionDescriptionInit *self) {
    return em_Val_as(RTCSdpType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void RTCLocalSessionDescriptionInit_set_type(RTCLocalSessionDescriptionInit* self, RTCSdpType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String RTCLocalSessionDescriptionInit_sdp(const RTCLocalSessionDescriptionInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sdp")));
}


void RTCLocalSessionDescriptionInit_set_sdp(RTCLocalSessionDescriptionInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sdp"), em_Val_from(value));
}


RTCLocalSessionDescriptionInit RTCLocalSessionDescriptionInit_new() {
    em_Val obj = em_Val_object();
    return RTCLocalSessionDescriptionInit_from_val(&obj);
}

