#include <webbind/RTCDataChannel.h>


DEFINE_EMLITE_TYPE(RTCDataChannel, EventTarget);


jb_USVString RTCDataChannel_label(const RTCDataChannel *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), "label"));
}


bool RTCDataChannel_ordered(const RTCDataChannel *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "ordered"));
}


unsigned short RTCDataChannel_maxPacketLifeTime(const RTCDataChannel *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), "maxPacketLifeTime"));
}


unsigned short RTCDataChannel_maxRetransmits(const RTCDataChannel *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), "maxRetransmits"));
}


jb_USVString RTCDataChannel_protocol(const RTCDataChannel *self) {
    return em_Val_as(jb_USVString, em_Val_get(EventTarget_as_val(self->inner), "protocol"));
}


bool RTCDataChannel_negotiated(const RTCDataChannel *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "negotiated"));
}


unsigned short RTCDataChannel_id(const RTCDataChannel *self) {
    return em_Val_as(unsigned short, em_Val_get(EventTarget_as_val(self->inner), "id"));
}


RTCDataChannelState RTCDataChannel_readyState(const RTCDataChannel *self) {
    return em_Val_as(RTCDataChannelState, em_Val_get(EventTarget_as_val(self->inner), "readyState"));
}


unsigned long RTCDataChannel_bufferedAmount(const RTCDataChannel *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "bufferedAmount"));
}


unsigned long RTCDataChannel_bufferedAmountLowThreshold(const RTCDataChannel *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "bufferedAmountLowThreshold"));
}


void RTCDataChannel_set_bufferedAmountLowThreshold(RTCDataChannel* self, unsigned long value) {
    em_Val_set(EventTarget_as_val(self->inner), "bufferedAmountLowThreshold", value);
}


jb_Any RTCDataChannel_onopen(const RTCDataChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onopen"));
}


void RTCDataChannel_set_onopen(RTCDataChannel* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onopen", value);
}


jb_Any RTCDataChannel_onbufferedamountlow(const RTCDataChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onbufferedamountlow"));
}


void RTCDataChannel_set_onbufferedamountlow(RTCDataChannel* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onbufferedamountlow", value);
}


jb_Any RTCDataChannel_onerror(const RTCDataChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void RTCDataChannel_set_onerror(RTCDataChannel* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


jb_Any RTCDataChannel_onclosing(const RTCDataChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onclosing"));
}


void RTCDataChannel_set_onclosing(RTCDataChannel* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onclosing", value);
}


jb_Any RTCDataChannel_onclose(const RTCDataChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onclose"));
}


void RTCDataChannel_set_onclose(RTCDataChannel* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onclose", value);
}


jb_Undefined RTCDataChannel_close(RTCDataChannel* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Any RTCDataChannel_onmessage(const RTCDataChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessage"));
}


void RTCDataChannel_set_onmessage(RTCDataChannel* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessage", value);
}


BinaryType RTCDataChannel_binaryType(const RTCDataChannel *self) {
    return em_Val_as(BinaryType, em_Val_get(EventTarget_as_val(self->inner), "binaryType"));
}


void RTCDataChannel_set_binaryType(RTCDataChannel* self, const BinaryType* value) {
    em_Val_set(EventTarget_as_val(self->inner), "binaryType", value);
}


jb_Undefined RTCDataChannel_send(RTCDataChannel* self , const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "send", em_Val_from(data)));
}


RTCPriorityType RTCDataChannel_priority(const RTCDataChannel *self) {
    return em_Val_as(RTCPriorityType, em_Val_get(EventTarget_as_val(self->inner), "priority"));
}

