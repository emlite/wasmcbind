#include <webbind/RTCSctpTransport.h>
#include <webbind/RTCDtlsTransport.h>


DEFINE_EMLITE_TYPE(RTCSctpTransport, EventTarget);


RTCDtlsTransport RTCSctpTransport_transport(const RTCSctpTransport *self) {
    return em_Val_as(RTCDtlsTransport, em_Val_get(EventTarget_as_val(self->inner), "transport"));
}


RTCSctpTransportState RTCSctpTransport_state(const RTCSctpTransport *self) {
    return em_Val_as(RTCSctpTransportState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


double RTCSctpTransport_maxMessageSize(const RTCSctpTransport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "maxMessageSize"));
}


unsigned short RTCSctpTransport_maxChannels(const RTCSctpTransport *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), "maxChannels"));
}


jb_Any RTCSctpTransport_onstatechange(const RTCSctpTransport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onstatechange"));
}


void RTCSctpTransport_set_onstatechange(RTCSctpTransport* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onstatechange", value);
}

