#include <webcbind/RTCRtpStreamStats.h>

DEFINE_EMLITE_TYPE(RTCRtpStreamStats, RTCStats);


unsigned long RTCRtpStreamStats_ssrc(const RTCRtpStreamStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("ssrc")));
}


void RTCRtpStreamStats_set_ssrc(RTCRtpStreamStats* self, unsigned long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("ssrc"), em_Val_from(value));
}


jb_String RTCRtpStreamStats_kind(const RTCRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("kind")));
}


void RTCRtpStreamStats_set_kind(RTCRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("kind"), em_Val_from(value));
}


jb_String RTCRtpStreamStats_transportId(const RTCRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("transportId")));
}


void RTCRtpStreamStats_set_transportId(RTCRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("transportId"), em_Val_from(value));
}


jb_String RTCRtpStreamStats_codecId(const RTCRtpStreamStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("codecId")));
}


void RTCRtpStreamStats_set_codecId(RTCRtpStreamStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("codecId"), em_Val_from(value));
}


RTCRtpStreamStats RTCRtpStreamStats_new() {
    em_Val obj = em_Val_object();
    return RTCRtpStreamStats_from_val(&obj);
}

