#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct IDBOpenDBRequest IDBOpenDBRequest;
typedef struct IDBDatabaseInfo IDBDatabaseInfo;


typedef struct {
  em_Val inner;
} IDBDatabaseInfo;


DECLARE_EMLITE_TYPE(IDBDatabaseInfo, em_Val);

jb_DOMString IDBDatabaseInfo_name( const IDBDatabaseInfo *self);

void IDBDatabaseInfo_set_name(IDBDatabaseInfo* self, const jb_DOMString* value);

long long IDBDatabaseInfo_version( const IDBDatabaseInfo *self);

void IDBDatabaseInfo_set_version(IDBDatabaseInfo* self, long long value);
typedef struct {
  em_Val inner;
} IDBFactory;


DECLARE_EMLITE_TYPE(IDBFactory, em_Val);

IDBOpenDBRequest IDBFactory_open(IDBFactory* self , const jb_DOMString* name);

IDBOpenDBRequest IDBFactory_open(IDBFactory* self , const jb_DOMString* name, long long version);

IDBOpenDBRequest IDBFactory_deleteDatabase(IDBFactory* self , const jb_DOMString* name);

jb_Promise IDBFactory_databases(IDBFactory* self );

short IDBFactory_cmp(IDBFactory* self , const jb_Any* first, const jb_Any* second);
