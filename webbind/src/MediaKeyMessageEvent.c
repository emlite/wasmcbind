#include <webbind/MediaKeyMessageEvent.h>


DEFINE_EMLITE_TYPE(MediaKeyMessageEvent, Event);


MediaKeyMessageEvent MediaKeyMessageEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("MediaKeyMessageEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return MediaKeyMessageEvent(em_Val_new(em_Val_global("MediaKeyMessageEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


MediaKeyMessageType MediaKeyMessageEvent_messageType(const MediaKeyMessageEvent *self) {
    return em_Val_as(MediaKeyMessageType, em_Val_get(Event_as_val(self->inner), "messageType"));
}


jb_ArrayBuffer MediaKeyMessageEvent_message(const MediaKeyMessageEvent *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(Event_as_val(self->inner), "message"));
}

