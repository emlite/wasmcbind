#include <webbind/MediaEncryptedEvent.h>


DEFINE_EMLITE_TYPE(MediaEncryptedEvent, Event);


MediaEncryptedEvent MediaEncryptedEvent_new(const jb_DOMString* type) : Event(em_Val_global("MediaEncryptedEvent").new_(em_Val_from(type))) {
        return MediaEncryptedEvent(em_Val_new(em_Val_global("MediaEncryptedEvent", em_Val_from(type)));
      }


MediaEncryptedEvent MediaEncryptedEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("MediaEncryptedEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return MediaEncryptedEvent(em_Val_new(em_Val_global("MediaEncryptedEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_DOMString MediaEncryptedEvent_initDataType(const MediaEncryptedEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "initDataType"));
}


jb_ArrayBuffer MediaEncryptedEvent_initData(const MediaEncryptedEvent *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(Event_as_val(self->inner), "initData"));
}

