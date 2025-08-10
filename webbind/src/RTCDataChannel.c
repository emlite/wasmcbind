#include <webbind/RTCDataChannel.h>

DEFINE_EMLITE_TYPE(RTCDataChannel, EventTarget);


jb_String RTCDataChannel_label(const RTCDataChannel *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("label")));
}


bool RTCDataChannel_ordered(const RTCDataChannel *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ordered")));
}


unsigned short RTCDataChannel_maxPacketLifeTime(const RTCDataChannel *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("maxPacketLifeTime")));
}


unsigned short RTCDataChannel_maxRetransmits(const RTCDataChannel *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("maxRetransmits")));
}


jb_String RTCDataChannel_protocol(const RTCDataChannel *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("protocol")));
}


bool RTCDataChannel_negotiated(const RTCDataChannel *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("negotiated")));
}


unsigned short RTCDataChannel_id(const RTCDataChannel *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("id")));
}


RTCDataChannelState RTCDataChannel_readyState(const RTCDataChannel *self) {
    return em_Val_as(RTCDataChannelState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("readyState")));
}


unsigned long RTCDataChannel_bufferedAmount(const RTCDataChannel *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("bufferedAmount")));
}


unsigned long RTCDataChannel_bufferedAmountLowThreshold(const RTCDataChannel *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("bufferedAmountLowThreshold")));
}


void RTCDataChannel_set_bufferedAmountLowThreshold(RTCDataChannel* self, unsigned long value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("bufferedAmountLowThreshold"), em_Val_from(value));
}


jb_Any RTCDataChannel_onopen(const RTCDataChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onopen")));
}


void RTCDataChannel_set_onopen(RTCDataChannel* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onopen"), em_Val_from(value));
}


jb_Any RTCDataChannel_onbufferedamountlow(const RTCDataChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onbufferedamountlow")));
}


void RTCDataChannel_set_onbufferedamountlow(RTCDataChannel* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onbufferedamountlow"), em_Val_from(value));
}


jb_Any RTCDataChannel_onerror(const RTCDataChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void RTCDataChannel_set_onerror(RTCDataChannel* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


jb_Any RTCDataChannel_onclosing(const RTCDataChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onclosing")));
}


void RTCDataChannel_set_onclosing(RTCDataChannel* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onclosing"), em_Val_from(value));
}


jb_Any RTCDataChannel_onclose(const RTCDataChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onclose")));
}


void RTCDataChannel_set_onclose(RTCDataChannel* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onclose"), em_Val_from(value));
}


jb_Undefined RTCDataChannel_close(RTCDataChannel* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Any RTCDataChannel_onmessage(const RTCDataChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessage")));
}


void RTCDataChannel_set_onmessage(RTCDataChannel* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessage"), em_Val_from(value));
}


BinaryType RTCDataChannel_binaryType(const RTCDataChannel *self) {
    return em_Val_as(BinaryType, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("binaryType")));
}


void RTCDataChannel_set_binaryType(RTCDataChannel* self, BinaryType * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("binaryType"), em_Val_from(value));
}


jb_Undefined RTCDataChannel_send(RTCDataChannel* self , jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "send", em_Val_from(data)));
}


RTCPriorityType RTCDataChannel_priority(const RTCDataChannel *self) {
    return em_Val_as(RTCPriorityType, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("priority")));
}

