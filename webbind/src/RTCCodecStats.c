#include <webbind/RTCCodecStats.h>

DEFINE_EMLITE_TYPE(RTCCodecStats, RTCStats);


unsigned long RTCCodecStats_payloadType(const RTCCodecStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("payloadType")));
}


void RTCCodecStats_set_payloadType(RTCCodecStats* self, unsigned long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("payloadType"), em_Val_from(value));
}


jb_String RTCCodecStats_transportId(const RTCCodecStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("transportId")));
}


void RTCCodecStats_set_transportId(RTCCodecStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("transportId"), em_Val_from(value));
}


jb_String RTCCodecStats_mimeType(const RTCCodecStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("mimeType")));
}


void RTCCodecStats_set_mimeType(RTCCodecStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("mimeType"), em_Val_from(value));
}


unsigned long RTCCodecStats_clockRate(const RTCCodecStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("clockRate")));
}


void RTCCodecStats_set_clockRate(RTCCodecStats* self, unsigned long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("clockRate"), em_Val_from(value));
}


unsigned long RTCCodecStats_channels(const RTCCodecStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("channels")));
}


void RTCCodecStats_set_channels(RTCCodecStats* self, unsigned long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("channels"), em_Val_from(value));
}


jb_String RTCCodecStats_sdpFmtpLine(const RTCCodecStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("sdpFmtpLine")));
}


void RTCCodecStats_set_sdpFmtpLine(RTCCodecStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("sdpFmtpLine"), em_Val_from(value));
}


RTCCodecStats RTCCodecStats_new() {
    em_Val obj = em_Val_object();
    return RTCCodecStats_from_val(&obj);
}

