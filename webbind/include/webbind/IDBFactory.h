#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IDBOpenDBRequest IDBOpenDBRequest;
typedef struct IDBDatabaseInfo IDBDatabaseInfo;

DECLARE_EMLITE_TYPE(IDBFactory, em_Val);

IDBOpenDBRequest IDBFactory_open0(IDBFactory* self , jb_String * name);

IDBOpenDBRequest IDBFactory_open1(IDBFactory* self , jb_String * name, long long version);

IDBOpenDBRequest IDBFactory_deleteDatabase(IDBFactory* self , jb_String * name);

jb_Promise IDBFactory_databases(IDBFactory* self );

short IDBFactory_cmp(IDBFactory* self , jb_Any * first, jb_Any * second);

#ifdef __cplusplus
}
#endif
