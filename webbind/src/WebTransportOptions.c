#include <webbind/WebTransportOptions.h>

DEFINE_EMLITE_TYPE(WebTransportOptions, em_Val);


bool WebTransportOptions_allowPooling(const WebTransportOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allowPooling")));
}


void WebTransportOptions_set_allowPooling(WebTransportOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allowPooling"), em_Val_from(value));
}


bool WebTransportOptions_requireUnreliable(const WebTransportOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requireUnreliable")));
}


void WebTransportOptions_set_requireUnreliable(WebTransportOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requireUnreliable"), em_Val_from(value));
}


jb_Array WebTransportOptions_serverCertificateHashes(const WebTransportOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serverCertificateHashes")));
}


void WebTransportOptions_set_serverCertificateHashes(WebTransportOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("serverCertificateHashes"), em_Val_from(value));
}


WebTransportCongestionControl WebTransportOptions_congestionControl(const WebTransportOptions *self) {
    return em_Val_as(WebTransportCongestionControl, em_Val_get(em_Val_as_val(self->inner), em_Val_from("congestionControl")));
}


void WebTransportOptions_set_congestionControl(WebTransportOptions* self, WebTransportCongestionControl * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("congestionControl"), em_Val_from(value));
}


unsigned short WebTransportOptions_anticipatedConcurrentIncomingUnidirectionalStreams(const WebTransportOptions *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("anticipatedConcurrentIncomingUnidirectionalStreams")));
}


void WebTransportOptions_set_anticipatedConcurrentIncomingUnidirectionalStreams(WebTransportOptions* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("anticipatedConcurrentIncomingUnidirectionalStreams"), em_Val_from(value));
}


unsigned short WebTransportOptions_anticipatedConcurrentIncomingBidirectionalStreams(const WebTransportOptions *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("anticipatedConcurrentIncomingBidirectionalStreams")));
}


void WebTransportOptions_set_anticipatedConcurrentIncomingBidirectionalStreams(WebTransportOptions* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("anticipatedConcurrentIncomingBidirectionalStreams"), em_Val_from(value));
}


jb_Array WebTransportOptions_protocols(const WebTransportOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocols")));
}


void WebTransportOptions_set_protocols(WebTransportOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocols"), em_Val_from(value));
}


DatagramsReadableMode WebTransportOptions_datagramsReadableMode(const WebTransportOptions *self) {
    return em_Val_as(DatagramsReadableMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("datagramsReadableMode")));
}


void WebTransportOptions_set_datagramsReadableMode(WebTransportOptions* self, DatagramsReadableMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("datagramsReadableMode"), em_Val_from(value));
}


WebTransportOptions WebTransportOptions_new() {
    em_Val obj = em_Val_object();
    return WebTransportOptions_from_val(&obj);
}

