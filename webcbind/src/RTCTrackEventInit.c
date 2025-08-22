#include <webcbind/RTCTrackEventInit.h>

#include <webcbind/RTCRtpReceiver.h>
#include <webcbind/MediaStreamTrack.h>
#include <webcbind/MediaStream.h>
#include <webcbind/RTCRtpTransceiver.h>

DEFINE_EMLITE_TYPE(RTCTrackEventInit, EventInit);


RTCRtpReceiver RTCTrackEventInit_receiver(const RTCTrackEventInit *self) {
    return em_Val_as(RTCRtpReceiver, em_Val_get(EventInit_as_val(self->inner), em_Val_from("receiver")));
}


void RTCTrackEventInit_set_receiver(RTCTrackEventInit* self, RTCRtpReceiver * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("receiver"), em_Val_from(value));
}


MediaStreamTrack RTCTrackEventInit_track(const RTCTrackEventInit *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(EventInit_as_val(self->inner), em_Val_from("track")));
}


void RTCTrackEventInit_set_track(RTCTrackEventInit* self, MediaStreamTrack * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("track"), em_Val_from(value));
}


jb_Array RTCTrackEventInit_streams(const RTCTrackEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(EventInit_as_val(self->inner), em_Val_from("streams")));
}


void RTCTrackEventInit_set_streams(RTCTrackEventInit* self, jb_Array * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("streams"), em_Val_from(value));
}


RTCRtpTransceiver RTCTrackEventInit_transceiver(const RTCTrackEventInit *self) {
    return em_Val_as(RTCRtpTransceiver, em_Val_get(EventInit_as_val(self->inner), em_Val_from("transceiver")));
}


void RTCTrackEventInit_set_transceiver(RTCTrackEventInit* self, RTCRtpTransceiver * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("transceiver"), em_Val_from(value));
}


RTCTrackEventInit RTCTrackEventInit_new() {
    em_Val obj = em_Val_object();
    return RTCTrackEventInit_from_val(&obj);
}

