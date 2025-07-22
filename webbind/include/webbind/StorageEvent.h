#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct Storage Storage;


typedef struct {
  Event inner;
} StorageEvent;


DECLARE_EMLITE_TYPE(StorageEvent, Event);

StorageEvent StorageEvent_new(const jb_DOMString* type);

StorageEvent StorageEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_DOMString StorageEvent_key( const StorageEvent *self);

jb_DOMString StorageEvent_oldValue( const StorageEvent *self);

jb_DOMString StorageEvent_newValue( const StorageEvent *self);

jb_USVString StorageEvent_url( const StorageEvent *self);

Storage StorageEvent_storageArea( const StorageEvent *self);

jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type);

jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles);

jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable);

jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_DOMString* key);

jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_DOMString* key, const jb_DOMString* oldValue);

jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_DOMString* key, const jb_DOMString* oldValue, const jb_DOMString* newValue);

jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_DOMString* key, const jb_DOMString* oldValue, const jb_DOMString* newValue, const jb_USVString* url);

jb_Undefined StorageEvent_initStorageEvent(StorageEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const jb_DOMString* key, const jb_DOMString* oldValue, const jb_DOMString* newValue, const jb_USVString* url, const Storage* storageArea);
