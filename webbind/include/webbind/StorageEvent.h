#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct Storage Storage;


DECLARE_EMLITE_TYPE(StorageEvent, Event);

StorageEvent StorageEvent_new0(jb_DOMString * type);

StorageEvent StorageEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_DOMString StorageEvent_key( const StorageEvent *self);

jb_DOMString StorageEvent_oldValue( const StorageEvent *self);

jb_DOMString StorageEvent_newValue( const StorageEvent *self);

jb_USVString StorageEvent_url( const StorageEvent *self);

Storage StorageEvent_storageArea( const StorageEvent *self);

jb_Undefined StorageEvent_initStorageEvent0(StorageEvent* self , jb_DOMString * type);

jb_Undefined StorageEvent_initStorageEvent1(StorageEvent* self , jb_DOMString * type, bool bubbles);

jb_Undefined StorageEvent_initStorageEvent2(StorageEvent* self , jb_DOMString * type, bool bubbles, bool cancelable);

jb_Undefined StorageEvent_initStorageEvent3(StorageEvent* self , jb_DOMString * type, bool bubbles, bool cancelable, jb_DOMString * key);

jb_Undefined StorageEvent_initStorageEvent4(StorageEvent* self , jb_DOMString * type, bool bubbles, bool cancelable, jb_DOMString * key, jb_DOMString * oldValue);

jb_Undefined StorageEvent_initStorageEvent5(StorageEvent* self , jb_DOMString * type, bool bubbles, bool cancelable, jb_DOMString * key, jb_DOMString * oldValue, jb_DOMString * newValue);

jb_Undefined StorageEvent_initStorageEvent6(StorageEvent* self , jb_DOMString * type, bool bubbles, bool cancelable, jb_DOMString * key, jb_DOMString * oldValue, jb_DOMString * newValue, jb_USVString * url);

jb_Undefined StorageEvent_initStorageEvent7(StorageEvent* self , jb_DOMString * type, bool bubbles, bool cancelable, jb_DOMString * key, jb_DOMString * oldValue, jb_DOMString * newValue, jb_USVString * url, Storage * storageArea);
