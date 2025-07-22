#include <webbind/RTCError.h>


DEFINE_EMLITE_TYPE(RTCError, DOMException);


RTCError RTCError_new(const jb_Any* init) : DOMException(em_Val_global("RTCError").new_(em_Val_from(init))) {
        return RTCError(em_Val_new(em_Val_global("RTCError", em_Val_from(init)));
      }


RTCError RTCError_new(const jb_Any* init, const jb_DOMString* message) : DOMException(em_Val_global("RTCError").new_(em_Val_from(init), em_Val_from(message))) {
        return RTCError(em_Val_new(em_Val_global("RTCError", em_Val_from(init), em_Val_from(message)));
      }


RTCErrorDetailType RTCError_errorDetail(const RTCError *self) {
    return em_Val_as(RTCErrorDetailType, em_Val_get(DOMException_as_val(self->inner), "errorDetail"));
}


long RTCError_sdpLineNumber(const RTCError *self) {
    return em_Val_as(long, em_Val_get(DOMException_as_val(self->inner), "sdpLineNumber"));
}


long RTCError_sctpCauseCode(const RTCError *self) {
    return em_Val_as(long, em_Val_get(DOMException_as_val(self->inner), "sctpCauseCode"));
}


unsigned long RTCError_receivedAlert(const RTCError *self) {
    return em_Val_as(unsigned long, em_Val_get(DOMException_as_val(self->inner), "receivedAlert"));
}


unsigned long RTCError_sentAlert(const RTCError *self) {
    return em_Val_as(unsigned long, em_Val_get(DOMException_as_val(self->inner), "sentAlert"));
}


long RTCError_httpRequestStatusCode(const RTCError *self) {
    return em_Val_as(long, em_Val_get(DOMException_as_val(self->inner), "httpRequestStatusCode"));
}

