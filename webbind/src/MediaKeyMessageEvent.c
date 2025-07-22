#include <webbind/MediaKeyMessageEvent.h>


DEFINE_EMLITE_TYPE(MediaKeyMessageEvent, Event);


MediaKeyMessageEvent MediaKeyMessageEvent_new(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("MediaKeyMessageEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return MediaKeyMessageEvent_from_val(&vv);
      }


MediaKeyMessageType MediaKeyMessageEvent_messageType(const MediaKeyMessageEvent *self) {
    return em_Val_as(MediaKeyMessageType, em_Val_get(Event_as_val(self->inner), em_Val_from("messageType")));
}


jb_ArrayBuffer MediaKeyMessageEvent_message(const MediaKeyMessageEvent *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(Event_as_val(self->inner), em_Val_from("message")));
}

