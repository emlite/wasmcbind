#include <webbind/RTCDataChannelEvent.h>
#include <webbind/RTCDataChannel.h>


DEFINE_EMLITE_TYPE(RTCDataChannelEvent, Event);


RTCDataChannelEvent RTCDataChannelEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("RTCDataChannelEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return RTCDataChannelEvent(em_Val_new(em_Val_global("RTCDataChannelEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


RTCDataChannel RTCDataChannelEvent_channel(const RTCDataChannelEvent *self) {
    return em_Val_as(RTCDataChannel, em_Val_get(Event_as_val(self->inner), "channel"));
}

