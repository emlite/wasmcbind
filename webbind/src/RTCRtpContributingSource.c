#include <webbind/RTCRtpContributingSource.h>

DEFINE_EMLITE_TYPE(RTCRtpContributingSource, em_Val);


jb_Any RTCRtpContributingSource_timestamp(const RTCRtpContributingSource *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


void RTCRtpContributingSource_set_timestamp(RTCRtpContributingSource* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestamp"), em_Val_from(value));
}


unsigned long RTCRtpContributingSource_source(const RTCRtpContributingSource *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("source")));
}


void RTCRtpContributingSource_set_source(RTCRtpContributingSource* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}


double RTCRtpContributingSource_audioLevel(const RTCRtpContributingSource *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("audioLevel")));
}


void RTCRtpContributingSource_set_audioLevel(RTCRtpContributingSource* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("audioLevel"), em_Val_from(value));
}


unsigned long RTCRtpContributingSource_rtpTimestamp(const RTCRtpContributingSource *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rtpTimestamp")));
}


void RTCRtpContributingSource_set_rtpTimestamp(RTCRtpContributingSource* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rtpTimestamp"), em_Val_from(value));
}


RTCRtpContributingSource RTCRtpContributingSource_new() {
    em_Val obj = em_Val_object();
    return RTCRtpContributingSource_from_val(&obj);
}

