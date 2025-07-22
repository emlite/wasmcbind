#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DOMStringList DOMStringList;
typedef struct IDBTransaction IDBTransaction;
typedef struct IDBRequest IDBRequest;
typedef struct IDBIndex IDBIndex;
typedef struct IDBIndexParameters IDBIndexParameters;


typedef struct {
  em_Val inner;
} IDBIndexParameters;


DECLARE_EMLITE_TYPE(IDBIndexParameters, em_Val);

bool IDBIndexParameters_unique( const IDBIndexParameters *self);

void IDBIndexParameters_set_unique(IDBIndexParameters* self, bool value);

bool IDBIndexParameters_multiEntry( const IDBIndexParameters *self);

void IDBIndexParameters_set_multiEntry(IDBIndexParameters* self, bool value);
typedef struct {
  em_Val inner;
} IDBObjectStore;


DECLARE_EMLITE_TYPE(IDBObjectStore, em_Val);

jb_DOMString IDBObjectStore_name( const IDBObjectStore *self);

void IDBObjectStore_set_name(IDBObjectStore* self, const jb_DOMString* value);

jb_Any IDBObjectStore_keyPath( const IDBObjectStore *self);

DOMStringList IDBObjectStore_indexNames( const IDBObjectStore *self);

IDBTransaction IDBObjectStore_transaction( const IDBObjectStore *self);

bool IDBObjectStore_autoIncrement( const IDBObjectStore *self);

IDBRequest IDBObjectStore_put(IDBObjectStore* self , const jb_Any* value);

IDBRequest IDBObjectStore_put(IDBObjectStore* self , const jb_Any* value, const jb_Any* key);

IDBRequest IDBObjectStore_add(IDBObjectStore* self , const jb_Any* value);

IDBRequest IDBObjectStore_add(IDBObjectStore* self , const jb_Any* value, const jb_Any* key);

IDBRequest IDBObjectStore_delete_(IDBObjectStore* self , const jb_Any* query);

IDBRequest IDBObjectStore_clear(IDBObjectStore* self );

IDBRequest IDBObjectStore_get(IDBObjectStore* self , const jb_Any* query);

IDBRequest IDBObjectStore_getKey(IDBObjectStore* self , const jb_Any* query);

IDBRequest IDBObjectStore_getAll(IDBObjectStore* self );

IDBRequest IDBObjectStore_getAll(IDBObjectStore* self , const jb_Any* query);

IDBRequest IDBObjectStore_getAll(IDBObjectStore* self , const jb_Any* query, unsigned long count);

IDBRequest IDBObjectStore_getAllKeys(IDBObjectStore* self );

IDBRequest IDBObjectStore_getAllKeys(IDBObjectStore* self , const jb_Any* query);

IDBRequest IDBObjectStore_getAllKeys(IDBObjectStore* self , const jb_Any* query, unsigned long count);

IDBRequest IDBObjectStore_count(IDBObjectStore* self );

IDBRequest IDBObjectStore_count(IDBObjectStore* self , const jb_Any* query);

IDBRequest IDBObjectStore_openCursor(IDBObjectStore* self );

IDBRequest IDBObjectStore_openCursor(IDBObjectStore* self , const jb_Any* query);

IDBRequest IDBObjectStore_openCursor(IDBObjectStore* self , const jb_Any* query, const IDBCursorDirection* direction);

IDBRequest IDBObjectStore_openKeyCursor(IDBObjectStore* self );

IDBRequest IDBObjectStore_openKeyCursor(IDBObjectStore* self , const jb_Any* query);

IDBRequest IDBObjectStore_openKeyCursor(IDBObjectStore* self , const jb_Any* query, const IDBCursorDirection* direction);

IDBIndex IDBObjectStore_index(IDBObjectStore* self , const jb_DOMString* name);

IDBIndex IDBObjectStore_createIndex(IDBObjectStore* self , const jb_DOMString* name, const jb_Any* keyPath);

IDBIndex IDBObjectStore_createIndex(IDBObjectStore* self , const jb_DOMString* name, const jb_Any* keyPath, const IDBIndexParameters* options);

jb_Undefined IDBObjectStore_deleteIndex(IDBObjectStore* self , const jb_DOMString* name);
