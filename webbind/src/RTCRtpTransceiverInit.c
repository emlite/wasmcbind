#include <webbind/RTCRtpTransceiverInit.h>

#include <webbind/MediaStream.h>

DEFINE_EMLITE_TYPE(RTCRtpTransceiverInit, em_Val);


RTCRtpTransceiverDirection RTCRtpTransceiverInit_direction(const RTCRtpTransceiverInit *self) {
    return em_Val_as(RTCRtpTransceiverDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("direction")));
}


void RTCRtpTransceiverInit_set_direction(RTCRtpTransceiverInit* self, RTCRtpTransceiverDirection * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("direction"), em_Val_from(value));
}


jb_Array RTCRtpTransceiverInit_streams(const RTCRtpTransceiverInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("streams")));
}


void RTCRtpTransceiverInit_set_streams(RTCRtpTransceiverInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("streams"), em_Val_from(value));
}


jb_Array RTCRtpTransceiverInit_sendEncodings(const RTCRtpTransceiverInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sendEncodings")));
}


void RTCRtpTransceiverInit_set_sendEncodings(RTCRtpTransceiverInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sendEncodings"), em_Val_from(value));
}


RTCRtpTransceiverInit RTCRtpTransceiverInit_new() {
    em_Val obj = em_Val_object();
    return RTCRtpTransceiverInit_from_val(&obj);
}

