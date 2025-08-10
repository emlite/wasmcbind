#include <webbind/RTCDataChannelStats.h>

DEFINE_EMLITE_TYPE(RTCDataChannelStats, RTCStats);


jb_String RTCDataChannelStats_label(const RTCDataChannelStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("label")));
}


void RTCDataChannelStats_set_label(RTCDataChannelStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


jb_String RTCDataChannelStats_protocol(const RTCDataChannelStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("protocol")));
}


void RTCDataChannelStats_set_protocol(RTCDataChannelStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


unsigned short RTCDataChannelStats_dataChannelIdentifier(const RTCDataChannelStats *self) {
    return em_Val_as(unsigned short, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("dataChannelIdentifier")));
}


void RTCDataChannelStats_set_dataChannelIdentifier(RTCDataChannelStats* self, unsigned short value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("dataChannelIdentifier"), em_Val_from(value));
}


RTCDataChannelState RTCDataChannelStats_state(const RTCDataChannelStats *self) {
    return em_Val_as(RTCDataChannelState, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("state")));
}


void RTCDataChannelStats_set_state(RTCDataChannelStats* self, RTCDataChannelState * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("state"), em_Val_from(value));
}


unsigned long RTCDataChannelStats_messagesSent(const RTCDataChannelStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("messagesSent")));
}


void RTCDataChannelStats_set_messagesSent(RTCDataChannelStats* self, unsigned long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("messagesSent"), em_Val_from(value));
}


long long RTCDataChannelStats_bytesSent(const RTCDataChannelStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("bytesSent")));
}


void RTCDataChannelStats_set_bytesSent(RTCDataChannelStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("bytesSent"), em_Val_from(value));
}


unsigned long RTCDataChannelStats_messagesReceived(const RTCDataChannelStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("messagesReceived")));
}


void RTCDataChannelStats_set_messagesReceived(RTCDataChannelStats* self, unsigned long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("messagesReceived"), em_Val_from(value));
}


long long RTCDataChannelStats_bytesReceived(const RTCDataChannelStats *self) {
    return em_Val_as(long long, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("bytesReceived")));
}


void RTCDataChannelStats_set_bytesReceived(RTCDataChannelStats* self, long long value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("bytesReceived"), em_Val_from(value));
}


RTCDataChannelStats RTCDataChannelStats_new() {
    em_Val obj = em_Val_object();
    return RTCDataChannelStats_from_val(&obj);
}

