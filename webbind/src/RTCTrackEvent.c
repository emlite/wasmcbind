#include <webbind/RTCTrackEvent.h>
#include <webbind/RTCRtpReceiver.h>
#include <webbind/MediaStreamTrack.h>
#include <webbind/MediaStream.h>
#include <webbind/RTCRtpTransceiver.h>


DEFINE_EMLITE_TYPE(RTCTrackEvent, Event);


RTCTrackEvent RTCTrackEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("RTCTrackEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return RTCTrackEvent(em_Val_new(em_Val_global("RTCTrackEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


RTCRtpReceiver RTCTrackEvent_receiver(const RTCTrackEvent *self) {
    return em_Val_as(RTCRtpReceiver, em_Val_get(Event_as_val(self->inner), "receiver"));
}


MediaStreamTrack RTCTrackEvent_track(const RTCTrackEvent *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(Event_as_val(self->inner), "track"));
}


jb_FrozenArray RTCTrackEvent_streams(const RTCTrackEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Event_as_val(self->inner), "streams"));
}


RTCRtpTransceiver RTCTrackEvent_transceiver(const RTCTrackEvent *self) {
    return em_Val_as(RTCRtpTransceiver, em_Val_get(Event_as_val(self->inner), "transceiver"));
}

