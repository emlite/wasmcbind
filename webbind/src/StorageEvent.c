#include <webbind/StorageEvent.h>
#include <webbind/Storage.h>


DEFINE_EMLITE_TYPE(StorageEvent, Event);


StorageEvent StorageEvent_new(const jb_DOMString* type) : Event(em_Val_global("StorageEvent").new_(em_Val_from(type))) {
        return StorageEvent(em_Val_new(em_Val_global("StorageEvent", em_Val_from(type)));
      }


StorageEvent StorageEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("StorageEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return StorageEvent(em_Val_new(em_Val_global("StorageEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_DOMString StorageEvent_key(const StorageEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "key"));
}


jb_DOMString StorageEvent_oldValue(const StorageEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "oldValue"));
}


jb_DOMString StorageEvent_newValue(const StorageEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Event_as_val(self->inner), "newValue"));
}


jb_USVString StorageEvent_url(const StorageEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(Event_as_val(self->inner), "url"));
}


Storage StorageEvent_storageArea(const StorageEvent *self) {
    return em_Val_as(Storage, em_Val_get(Event_as_val(self->inner), "storageArea"));
}


jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type)));
}


jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles)));
}


jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable)));
}


jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_DOMString* key) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(key)));
}


jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_DOMString* key, const jb_DOMString* oldValue) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(key), em_Val_from(oldValue)));
}


jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_DOMString* key, const jb_DOMString* oldValue, const jb_DOMString* newValue) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(key), em_Val_from(oldValue), em_Val_from(newValue)));
}


jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_DOMString* key, const jb_DOMString* oldValue, const jb_DOMString* newValue, const jb_USVString* url) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(key), em_Val_from(oldValue), em_Val_from(newValue), em_Val_from(url)));
}


jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_DOMString* key, const jb_DOMString* oldValue, const jb_DOMString* newValue, const jb_USVString* url, const Storage* storageArea) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(key), em_Val_from(oldValue), em_Val_from(newValue), em_Val_from(url), em_Val_from(storageArea)));
}

