#include <webbind/RTCError.h>


DEFINE_EMLITE_TYPE(RTCError, DOMException);


RTCError RTCError_new0(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("RTCError") , em_Val_from(init));
        return RTCError_from_val(&vv);
      }


RTCError RTCError_new1(jb_Any * init, jb_DOMString * message) {
        em_Val vv = em_Val_new(em_Val_global("RTCError") , em_Val_from(init), em_Val_from(message));
        return RTCError_from_val(&vv);
      }


RTCErrorDetailType RTCError_errorDetail(const RTCError *self) {
    return em_Val_as(RTCErrorDetailType, em_Val_get(DOMException_as_val(self->inner), em_Val_from("errorDetail")));
}


long RTCError_sdpLineNumber(const RTCError *self) {
    return em_Val_as(long, em_Val_get(DOMException_as_val(self->inner), em_Val_from("sdpLineNumber")));
}


long RTCError_sctpCauseCode(const RTCError *self) {
    return em_Val_as(long, em_Val_get(DOMException_as_val(self->inner), em_Val_from("sctpCauseCode")));
}


unsigned long RTCError_receivedAlert(const RTCError *self) {
    return em_Val_as(unsigned long, em_Val_get(DOMException_as_val(self->inner), em_Val_from("receivedAlert")));
}


unsigned long RTCError_sentAlert(const RTCError *self) {
    return em_Val_as(unsigned long, em_Val_get(DOMException_as_val(self->inner), em_Val_from("sentAlert")));
}


long RTCError_httpRequestStatusCode(const RTCError *self) {
    return em_Val_as(long, em_Val_get(DOMException_as_val(self->inner), em_Val_from("httpRequestStatusCode")));
}

