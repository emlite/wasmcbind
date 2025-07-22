#include <webbind/RTCRtpTransceiver.h>
#include <webbind/RTCRtpSender.h>
#include <webbind/RTCRtpReceiver.h>


DEFINE_EMLITE_TYPE(RTCRtpCodec, em_Val);


jb_DOMString RTCRtpCodec_mimeType(const RTCRtpCodec *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "mimeType"));
}


void RTCRtpCodec_set_mimeType(RTCRtpCodec* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "mimeType", value);
}


unsigned long RTCRtpCodec_clockRate(const RTCRtpCodec *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "clockRate"));
}


void RTCRtpCodec_set_clockRate(RTCRtpCodec* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "clockRate", value);
}


unsigned short RTCRtpCodec_channels(const RTCRtpCodec *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "channels"));
}


void RTCRtpCodec_set_channels(RTCRtpCodec* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "channels", value);
}


jb_DOMString RTCRtpCodec_sdpFmtpLine(const RTCRtpCodec *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sdpFmtpLine"));
}


void RTCRtpCodec_set_sdpFmtpLine(RTCRtpCodec* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "sdpFmtpLine", value);
}

DEFINE_EMLITE_TYPE(RTCRtpTransceiver, em_Val);


jb_DOMString RTCRtpTransceiver_mid(const RTCRtpTransceiver *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "mid"));
}


RTCRtpSender RTCRtpTransceiver_sender(const RTCRtpTransceiver *self) {
    return em_Val_as(RTCRtpSender, em_Val_get(em_Val_as_val(self->inner), "sender"));
}


RTCRtpReceiver RTCRtpTransceiver_receiver(const RTCRtpTransceiver *self) {
    return em_Val_as(RTCRtpReceiver, em_Val_get(em_Val_as_val(self->inner), "receiver"));
}


RTCRtpTransceiverDirection RTCRtpTransceiver_direction(const RTCRtpTransceiver *self) {
    return em_Val_as(RTCRtpTransceiverDirection, em_Val_get(em_Val_as_val(self->inner), "direction"));
}


void RTCRtpTransceiver_set_direction(RTCRtpTransceiver* self, const RTCRtpTransceiverDirection* value) {
    em_Val_set(em_Val_as_val(self->inner), "direction", value);
}


RTCRtpTransceiverDirection RTCRtpTransceiver_currentDirection(const RTCRtpTransceiver *self) {
    return em_Val_as(RTCRtpTransceiverDirection, em_Val_get(em_Val_as_val(self->inner), "currentDirection"));
}


jb_Undefined RTCRtpTransceiver_stop(RTCRtpTransceiver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "stop"));
}


jb_Undefined RTCRtpTransceiver_setCodecPreferences(RTCRtpTransceiver* self , const jb_Sequence* codecs) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setCodecPreferences", em_Val_from(codecs)));
}

