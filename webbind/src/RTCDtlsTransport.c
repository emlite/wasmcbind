#include <webbind/RTCDtlsTransport.h>
#include <webbind/RTCIceTransport.h>


DEFINE_EMLITE_TYPE(RTCDtlsTransport, EventTarget);


RTCIceTransport RTCDtlsTransport_iceTransport(const RTCDtlsTransport *self) {
    return em_Val_as(RTCIceTransport, em_Val_get(EventTarget_as_val(self->inner), "iceTransport"));
}


RTCDtlsTransportState RTCDtlsTransport_state(const RTCDtlsTransport *self) {
    return em_Val_as(RTCDtlsTransportState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


jb_Sequence RTCDtlsTransport_getRemoteCertificates(RTCDtlsTransport* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getRemoteCertificates"));
}


jb_Any RTCDtlsTransport_onstatechange(const RTCDtlsTransport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onstatechange"));
}


void RTCDtlsTransport_set_onstatechange(RTCDtlsTransport* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onstatechange", value);
}


jb_Any RTCDtlsTransport_onerror(const RTCDtlsTransport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void RTCDtlsTransport_set_onerror(RTCDtlsTransport* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}

