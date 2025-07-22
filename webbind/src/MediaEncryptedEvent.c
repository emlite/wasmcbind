#include <webbind/MediaEncryptedEvent.h>


DEFINE_EMLITE_TYPE(MediaEncryptedEvent, Event);


MediaEncryptedEvent MediaEncryptedEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("MediaEncryptedEvent") , em_Val_from(type));
        return MediaEncryptedEvent_from_val(&vv);
      }


MediaEncryptedEvent MediaEncryptedEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("MediaEncryptedEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return MediaEncryptedEvent_from_val(&vv);
      }


jb_DOMString MediaEncryptedEvent_initDataType(const MediaEncryptedEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), em_Val_from("initDataType")));
}


jb_ArrayBuffer MediaEncryptedEvent_initData(const MediaEncryptedEvent *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(Event_as_val(self->inner), em_Val_from("initData")));
}

