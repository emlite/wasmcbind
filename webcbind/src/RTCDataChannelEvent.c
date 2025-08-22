#include <webcbind/RTCDataChannelEvent.h>

#include <webcbind/RTCDataChannelEventInit.h>
#include <webcbind/RTCDataChannel.h>

DEFINE_EMLITE_TYPE(RTCDataChannelEvent, Event);


RTCDataChannelEvent RTCDataChannelEvent_new(jb_String * type, RTCDataChannelEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("RTCDataChannelEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return RTCDataChannelEvent_from_val(&vv);
      }


RTCDataChannel RTCDataChannelEvent_channel(const RTCDataChannelEvent *self) {
    return em_Val_as(RTCDataChannel, em_Val_get(Event_as_val(self->inner), em_Val_from("channel")));
}

