#include <webcbind/RTCRtpSendParameters.h>

DEFINE_EMLITE_TYPE(RTCRtpSendParameters, RTCRtpParameters);


jb_String RTCRtpSendParameters_transactionId(const RTCRtpSendParameters *self) {
    return em_Val_as(jb_String, em_Val_get(RTCRtpParameters_as_val(self->inner), em_Val_from("transactionId")));
}


void RTCRtpSendParameters_set_transactionId(RTCRtpSendParameters* self, jb_String * value) {
    em_Val_set(RTCRtpParameters_as_val(self->inner), em_Val_from("transactionId"), em_Val_from(value));
}


jb_Array RTCRtpSendParameters_encodings(const RTCRtpSendParameters *self) {
    return em_Val_as(jb_Array, em_Val_get(RTCRtpParameters_as_val(self->inner), em_Val_from("encodings")));
}


void RTCRtpSendParameters_set_encodings(RTCRtpSendParameters* self, jb_Array * value) {
    em_Val_set(RTCRtpParameters_as_val(self->inner), em_Val_from("encodings"), em_Val_from(value));
}


RTCRtpSendParameters RTCRtpSendParameters_new() {
    em_Val obj = em_Val_object();
    return RTCRtpSendParameters_from_val(&obj);
}

