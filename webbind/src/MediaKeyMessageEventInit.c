#include <webbind/MediaKeyMessageEventInit.h>

DEFINE_EMLITE_TYPE(MediaKeyMessageEventInit, EventInit);


MediaKeyMessageType MediaKeyMessageEventInit_messageType(const MediaKeyMessageEventInit *self) {
    return em_Val_as(MediaKeyMessageType, em_Val_get(EventInit_as_val(self->inner), em_Val_from("messageType")));
}


void MediaKeyMessageEventInit_set_messageType(MediaKeyMessageEventInit* self, MediaKeyMessageType * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("messageType"), em_Val_from(value));
}


jb_ArrayBuffer MediaKeyMessageEventInit_message(const MediaKeyMessageEventInit *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(EventInit_as_val(self->inner), em_Val_from("message")));
}


void MediaKeyMessageEventInit_set_message(MediaKeyMessageEventInit* self, jb_ArrayBuffer * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("message"), em_Val_from(value));
}


MediaKeyMessageEventInit MediaKeyMessageEventInit_new() {
    em_Val obj = em_Val_object();
    return MediaKeyMessageEventInit_from_val(&obj);
}

