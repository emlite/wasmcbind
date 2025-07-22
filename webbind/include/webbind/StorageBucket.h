#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "StorageManager.h"
#include "enums.h"

typedef struct IDBFactory IDBFactory;
typedef struct CacheStorage CacheStorage;
typedef struct FileSystemDirectoryHandle FileSystemDirectoryHandle;


typedef struct {
  em_Val inner;
} StorageBucket;


DECLARE_EMLITE_TYPE(StorageBucket, em_Val);

jb_DOMString StorageBucket_name( const StorageBucket *self);

jb_Promise StorageBucket_persist(StorageBucket* self );

jb_Promise StorageBucket_persisted(StorageBucket* self );

jb_Promise StorageBucket_estimate(StorageBucket* self );

jb_Promise StorageBucket_setExpires(StorageBucket* self , const jb_Any* expires);

jb_Promise StorageBucket_expires(StorageBucket* self );

IDBFactory StorageBucket_indexedDB( const StorageBucket *self);

CacheStorage StorageBucket_caches( const StorageBucket *self);

jb_Promise StorageBucket_getDirectory(StorageBucket* self );
