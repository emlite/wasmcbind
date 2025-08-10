#include <webbind/RTCDataChannelInit.h>

DEFINE_EMLITE_TYPE(RTCDataChannelInit, em_Val);


bool RTCDataChannelInit_ordered(const RTCDataChannelInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ordered")));
}


void RTCDataChannelInit_set_ordered(RTCDataChannelInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ordered"), em_Val_from(value));
}


unsigned short RTCDataChannelInit_maxPacketLifeTime(const RTCDataChannelInit *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxPacketLifeTime")));
}


void RTCDataChannelInit_set_maxPacketLifeTime(RTCDataChannelInit* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxPacketLifeTime"), em_Val_from(value));
}


unsigned short RTCDataChannelInit_maxRetransmits(const RTCDataChannelInit *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxRetransmits")));
}


void RTCDataChannelInit_set_maxRetransmits(RTCDataChannelInit* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxRetransmits"), em_Val_from(value));
}


jb_String RTCDataChannelInit_protocol(const RTCDataChannelInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


void RTCDataChannelInit_set_protocol(RTCDataChannelInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


bool RTCDataChannelInit_negotiated(const RTCDataChannelInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("negotiated")));
}


void RTCDataChannelInit_set_negotiated(RTCDataChannelInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("negotiated"), em_Val_from(value));
}


unsigned short RTCDataChannelInit_id(const RTCDataChannelInit *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void RTCDataChannelInit_set_id(RTCDataChannelInit* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


RTCDataChannelInit RTCDataChannelInit_new() {
    em_Val obj = em_Val_object();
    return RTCDataChannelInit_from_val(&obj);
}

