#include <webcbind/RTCDataChannelEventInit.h>

#include <webcbind/RTCDataChannel.h>

DEFINE_EMLITE_TYPE(RTCDataChannelEventInit, EventInit);


RTCDataChannel RTCDataChannelEventInit_channel(const RTCDataChannelEventInit *self) {
    return em_Val_as(RTCDataChannel, em_Val_get(EventInit_as_val(self->inner), em_Val_from("channel")));
}


void RTCDataChannelEventInit_set_channel(RTCDataChannelEventInit* self, RTCDataChannel * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("channel"), em_Val_from(value));
}


RTCDataChannelEventInit RTCDataChannelEventInit_new() {
    em_Val obj = em_Val_object();
    return RTCDataChannelEventInit_from_val(&obj);
}

