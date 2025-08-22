#include <webcbind/RTCSessionDescriptionInit.h>

DEFINE_EMLITE_TYPE(RTCSessionDescriptionInit, em_Val);


RTCSdpType RTCSessionDescriptionInit_type(const RTCSessionDescriptionInit *self) {
    return em_Val_as(RTCSdpType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void RTCSessionDescriptionInit_set_type(RTCSessionDescriptionInit* self, RTCSdpType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String RTCSessionDescriptionInit_sdp(const RTCSessionDescriptionInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sdp")));
}


void RTCSessionDescriptionInit_set_sdp(RTCSessionDescriptionInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sdp"), em_Val_from(value));
}


RTCSessionDescriptionInit RTCSessionDescriptionInit_new() {
    em_Val obj = em_Val_object();
    return RTCSessionDescriptionInit_from_val(&obj);
}

