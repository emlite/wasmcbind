#include <webcbind/RTCRtpCodingParameters.h>

DEFINE_EMLITE_TYPE(RTCRtpCodingParameters, em_Val);


jb_String RTCRtpCodingParameters_rid(const RTCRtpCodingParameters *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rid")));
}


void RTCRtpCodingParameters_set_rid(RTCRtpCodingParameters* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rid"), em_Val_from(value));
}


RTCRtpCodingParameters RTCRtpCodingParameters_new() {
    em_Val obj = em_Val_object();
    return RTCRtpCodingParameters_from_val(&obj);
}

