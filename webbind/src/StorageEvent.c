#include <webbind/StorageEvent.h>

#include <webbind/StorageEventInit.h>
#include <webbind/Storage.h>

DEFINE_EMLITE_TYPE(StorageEvent, Event);


StorageEvent StorageEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("StorageEvent") , em_Val_from(type));
        return StorageEvent_from_val(&vv);
      }


StorageEvent StorageEvent_new1(jb_String * type, StorageEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("StorageEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return StorageEvent_from_val(&vv);
      }


jb_String StorageEvent_key(const StorageEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("key")));
}


jb_String StorageEvent_oldValue(const StorageEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("oldValue")));
}


jb_String StorageEvent_newValue(const StorageEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("newValue")));
}


jb_String StorageEvent_url(const StorageEvent *self) {
    return em_Val_as(jb_String, em_Val_get(Event_as_val(self->inner), em_Val_from("url")));
}


Storage StorageEvent_storageArea(const StorageEvent *self) {
    return em_Val_as(Storage, em_Val_get(Event_as_val(self->inner), em_Val_from("storageArea")));
}


jb_Undefined StorageEvent_initStorageEvent0(StorageEvent* self , jb_String * type) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type)));
}


jb_Undefined StorageEvent_initStorageEvent1(StorageEvent* self , jb_String * type, bool bubbles) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles)));
}


jb_Undefined StorageEvent_initStorageEvent2(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable)));
}


jb_Undefined StorageEvent_initStorageEvent3(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(key)));
}


jb_Undefined StorageEvent_initStorageEvent4(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key, jb_String * oldValue) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(key), em_Val_from(oldValue)));
}


jb_Undefined StorageEvent_initStorageEvent5(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key, jb_String * oldValue, jb_String * newValue) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(key), em_Val_from(oldValue), em_Val_from(newValue)));
}


jb_Undefined StorageEvent_initStorageEvent6(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key, jb_String * oldValue, jb_String * newValue, jb_String * url) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(key), em_Val_from(oldValue), em_Val_from(newValue), em_Val_from(url)));
}


jb_Undefined StorageEvent_initStorageEvent7(StorageEvent* self , jb_String * type, bool bubbles, bool cancelable, jb_String * key, jb_String * oldValue, jb_String * newValue, jb_String * url, Storage * storageArea) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initStorageEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(key), em_Val_from(oldValue), em_Val_from(newValue), em_Val_from(url), em_Val_from(storageArea)));
}

