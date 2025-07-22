#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct IDBRequest IDBRequest;


typedef struct {
  em_Val inner;
} IDBCursor;


DECLARE_EMLITE_TYPE(IDBCursor, em_Val);

jb_Any IDBCursor_source( const IDBCursor *self);

IDBCursorDirection IDBCursor_direction( const IDBCursor *self);

jb_Any IDBCursor_key( const IDBCursor *self);

jb_Any IDBCursor_primaryKey( const IDBCursor *self);

IDBRequest IDBCursor_request( const IDBCursor *self);

jb_Undefined IDBCursor_advance(IDBCursor* self , unsigned long count);

jb_Undefined IDBCursor_continue_(IDBCursor* self );

jb_Undefined IDBCursor_continue_(IDBCursor* self , const jb_Any* key);

jb_Undefined IDBCursor_continuePrimaryKey(IDBCursor* self , const jb_Any* key, const jb_Any* primaryKey);

IDBRequest IDBCursor_update(IDBCursor* self , const jb_Any* value);

IDBRequest IDBCursor_delete_(IDBCursor* self );
