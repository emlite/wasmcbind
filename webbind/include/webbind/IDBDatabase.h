#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct DOMStringList DOMStringList;
typedef struct IDBTransaction IDBTransaction;
typedef struct IDBTransactionOptions IDBTransactionOptions;
typedef struct IDBObjectStore IDBObjectStore;
typedef struct IDBObjectStoreParameters IDBObjectStoreParameters;


typedef struct {
  em_Val inner;
} IDBTransactionOptions;


DECLARE_EMLITE_TYPE(IDBTransactionOptions, em_Val);

IDBTransactionDurability IDBTransactionOptions_durability( const IDBTransactionOptions *self);

void IDBTransactionOptions_set_durability(IDBTransactionOptions* self, const IDBTransactionDurability* value);
typedef struct {
  em_Val inner;
} IDBObjectStoreParameters;


DECLARE_EMLITE_TYPE(IDBObjectStoreParameters, em_Val);

jb_Any IDBObjectStoreParameters_keyPath( const IDBObjectStoreParameters *self);

void IDBObjectStoreParameters_set_keyPath(IDBObjectStoreParameters* self, const jb_Any* value);

bool IDBObjectStoreParameters_autoIncrement( const IDBObjectStoreParameters *self);

void IDBObjectStoreParameters_set_autoIncrement(IDBObjectStoreParameters* self, bool value);
typedef struct {
  EventTarget inner;
} IDBDatabase;


DECLARE_EMLITE_TYPE(IDBDatabase, EventTarget);

jb_DOMString IDBDatabase_name( const IDBDatabase *self);

long long IDBDatabase_version( const IDBDatabase *self);

DOMStringList IDBDatabase_objectStoreNames( const IDBDatabase *self);

IDBTransaction IDBDatabase_transaction(IDBDatabase* self , const jb_Any* storeNames);

IDBTransaction IDBDatabase_transaction(IDBDatabase* self , const jb_Any* storeNames, const IDBTransactionMode* mode);

IDBTransaction IDBDatabase_transaction(IDBDatabase* self , const jb_Any* storeNames, const IDBTransactionMode* mode, const IDBTransactionOptions* options);

jb_Undefined IDBDatabase_close(IDBDatabase* self );

IDBObjectStore IDBDatabase_createObjectStore(IDBDatabase* self , const jb_DOMString* name);

IDBObjectStore IDBDatabase_createObjectStore(IDBDatabase* self , const jb_DOMString* name, const IDBObjectStoreParameters* options);

jb_Undefined IDBDatabase_deleteObjectStore(IDBDatabase* self , const jb_DOMString* name);

jb_Any IDBDatabase_onabort( const IDBDatabase *self);

void IDBDatabase_set_onabort(IDBDatabase* self, const jb_Any* value);

jb_Any IDBDatabase_onclose( const IDBDatabase *self);

void IDBDatabase_set_onclose(IDBDatabase* self, const jb_Any* value);

jb_Any IDBDatabase_onerror( const IDBDatabase *self);

void IDBDatabase_set_onerror(IDBDatabase* self, const jb_Any* value);

jb_Any IDBDatabase_onversionchange( const IDBDatabase *self);

void IDBDatabase_set_onversionchange(IDBDatabase* self, const jb_Any* value);
