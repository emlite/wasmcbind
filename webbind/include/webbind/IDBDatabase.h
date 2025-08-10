#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMStringList DOMStringList;
typedef struct IDBTransaction IDBTransaction;
typedef struct IDBTransactionOptions IDBTransactionOptions;
typedef struct IDBObjectStore IDBObjectStore;
typedef struct IDBObjectStoreParameters IDBObjectStoreParameters;

DECLARE_EMLITE_TYPE(IDBDatabase, EventTarget);

jb_String IDBDatabase_name(const IDBDatabase *self);

long long IDBDatabase_version(const IDBDatabase *self);

DOMStringList IDBDatabase_objectStoreNames(const IDBDatabase *self);

IDBTransaction IDBDatabase_transaction0(IDBDatabase* self , jb_Any * storeNames);

IDBTransaction IDBDatabase_transaction1(IDBDatabase* self , jb_Any * storeNames, IDBTransactionMode * mode);

IDBTransaction IDBDatabase_transaction2(IDBDatabase* self , jb_Any * storeNames, IDBTransactionMode * mode, IDBTransactionOptions * options);

jb_Undefined IDBDatabase_close(IDBDatabase* self );

IDBObjectStore IDBDatabase_createObjectStore0(IDBDatabase* self , jb_String * name);

IDBObjectStore IDBDatabase_createObjectStore1(IDBDatabase* self , jb_String * name, IDBObjectStoreParameters * options);

jb_Undefined IDBDatabase_deleteObjectStore(IDBDatabase* self , jb_String * name);

jb_Any IDBDatabase_onabort(const IDBDatabase *self);

void IDBDatabase_set_onabort(IDBDatabase* self, jb_Any * value);

jb_Any IDBDatabase_onclose(const IDBDatabase *self);

void IDBDatabase_set_onclose(IDBDatabase* self, jb_Any * value);

jb_Any IDBDatabase_onerror(const IDBDatabase *self);

void IDBDatabase_set_onerror(IDBDatabase* self, jb_Any * value);

jb_Any IDBDatabase_onversionchange(const IDBDatabase *self);

void IDBDatabase_set_onversionchange(IDBDatabase* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
