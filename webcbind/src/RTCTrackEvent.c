#include <webcbind/RTCTrackEvent.h>

#include <webcbind/RTCTrackEventInit.h>
#include <webcbind/RTCRtpReceiver.h>
#include <webcbind/MediaStreamTrack.h>
#include <webcbind/MediaStream.h>
#include <webcbind/RTCRtpTransceiver.h>

DEFINE_EMLITE_TYPE(RTCTrackEvent, Event);


RTCTrackEvent RTCTrackEvent_new(jb_String * type, RTCTrackEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("RTCTrackEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return RTCTrackEvent_from_val(&vv);
      }


RTCRtpReceiver RTCTrackEvent_receiver(const RTCTrackEvent *self) {
    return em_Val_as(RTCRtpReceiver, em_Val_get(Event_as_val(self->inner), em_Val_from("receiver")));
}


MediaStreamTrack RTCTrackEvent_track(const RTCTrackEvent *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(Event_as_val(self->inner), em_Val_from("track")));
}


jb_Array RTCTrackEvent_streams(const RTCTrackEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(Event_as_val(self->inner), em_Val_from("streams")));
}


RTCRtpTransceiver RTCTrackEvent_transceiver(const RTCTrackEvent *self) {
    return em_Val_as(RTCRtpTransceiver, em_Val_get(Event_as_val(self->inner), em_Val_from("transceiver")));
}

