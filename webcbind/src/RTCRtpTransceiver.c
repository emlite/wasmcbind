#include <webcbind/RTCRtpTransceiver.h>

#include <webcbind/RTCRtpSender.h>
#include <webcbind/RTCRtpReceiver.h>
#include <webcbind/RTCRtpCodec.h>

DEFINE_EMLITE_TYPE(RTCRtpTransceiver, em_Val);


jb_String RTCRtpTransceiver_mid(const RTCRtpTransceiver *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mid")));
}


RTCRtpSender RTCRtpTransceiver_sender(const RTCRtpTransceiver *self) {
    return em_Val_as(RTCRtpSender, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sender")));
}


RTCRtpReceiver RTCRtpTransceiver_receiver(const RTCRtpTransceiver *self) {
    return em_Val_as(RTCRtpReceiver, em_Val_get(em_Val_as_val(self->inner), em_Val_from("receiver")));
}


RTCRtpTransceiverDirection RTCRtpTransceiver_direction(const RTCRtpTransceiver *self) {
    return em_Val_as(RTCRtpTransceiverDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("direction")));
}


void RTCRtpTransceiver_set_direction(RTCRtpTransceiver* self, RTCRtpTransceiverDirection * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("direction"), em_Val_from(value));
}


RTCRtpTransceiverDirection RTCRtpTransceiver_currentDirection(const RTCRtpTransceiver *self) {
    return em_Val_as(RTCRtpTransceiverDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("currentDirection")));
}


jb_Undefined RTCRtpTransceiver_stop(RTCRtpTransceiver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "stop"));
}


jb_Undefined RTCRtpTransceiver_setCodecPreferences(RTCRtpTransceiver* self , jb_Array * codecs) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setCodecPreferences", em_Val_from(codecs)));
}

