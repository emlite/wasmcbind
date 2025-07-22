#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct IDBObjectStore IDBObjectStore;
typedef struct IDBRequest IDBRequest;


typedef struct {
  em_Val inner;
} IDBIndex;


DECLARE_EMLITE_TYPE(IDBIndex, em_Val);

jb_DOMString IDBIndex_name( const IDBIndex *self);

void IDBIndex_set_name(IDBIndex* self, const jb_DOMString* value);

IDBObjectStore IDBIndex_objectStore( const IDBIndex *self);

jb_Any IDBIndex_keyPath( const IDBIndex *self);

bool IDBIndex_multiEntry( const IDBIndex *self);

bool IDBIndex_unique( const IDBIndex *self);

IDBRequest IDBIndex_get(IDBIndex* self , const jb_Any* query);

IDBRequest IDBIndex_getKey(IDBIndex* self , const jb_Any* query);

IDBRequest IDBIndex_getAll(IDBIndex* self );

IDBRequest IDBIndex_getAll(IDBIndex* self , const jb_Any* query);

IDBRequest IDBIndex_getAll(IDBIndex* self , const jb_Any* query, unsigned long count);

IDBRequest IDBIndex_getAllKeys(IDBIndex* self );

IDBRequest IDBIndex_getAllKeys(IDBIndex* self , const jb_Any* query);

IDBRequest IDBIndex_getAllKeys(IDBIndex* self , const jb_Any* query, unsigned long count);

IDBRequest IDBIndex_count(IDBIndex* self );

IDBRequest IDBIndex_count(IDBIndex* self , const jb_Any* query);

IDBRequest IDBIndex_openCursor(IDBIndex* self );

IDBRequest IDBIndex_openCursor(IDBIndex* self , const jb_Any* query);

IDBRequest IDBIndex_openCursor(IDBIndex* self , const jb_Any* query, const IDBCursorDirection* direction);

IDBRequest IDBIndex_openKeyCursor(IDBIndex* self );

IDBRequest IDBIndex_openKeyCursor(IDBIndex* self , const jb_Any* query);

IDBRequest IDBIndex_openKeyCursor(IDBIndex* self , const jb_Any* query, const IDBCursorDirection* direction);
