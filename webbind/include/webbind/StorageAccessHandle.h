#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "StorageManager.h"
#include "enums.h"

typedef struct Storage Storage;
typedef struct IDBFactory IDBFactory;
typedef struct LockManager LockManager;
typedef struct CacheStorage CacheStorage;
typedef struct FileSystemDirectoryHandle FileSystemDirectoryHandle;
typedef struct BroadcastChannel BroadcastChannel;
typedef struct SharedWorker SharedWorker;


typedef struct {
  em_Val inner;
} StorageAccessHandle;


DECLARE_EMLITE_TYPE(StorageAccessHandle, em_Val);

Storage StorageAccessHandle_sessionStorage( const StorageAccessHandle *self);

Storage StorageAccessHandle_localStorage( const StorageAccessHandle *self);

IDBFactory StorageAccessHandle_indexedDB( const StorageAccessHandle *self);

LockManager StorageAccessHandle_locks( const StorageAccessHandle *self);

CacheStorage StorageAccessHandle_caches( const StorageAccessHandle *self);

jb_Promise StorageAccessHandle_getDirectory(StorageAccessHandle* self );

jb_Promise StorageAccessHandle_estimate(StorageAccessHandle* self );

jb_DOMString StorageAccessHandle_createObjectURL(StorageAccessHandle* self , const jb_Any* obj);

jb_Undefined StorageAccessHandle_revokeObjectURL(StorageAccessHandle* self , const jb_DOMString* url);

BroadcastChannel StorageAccessHandle_BroadcastChannel_(StorageAccessHandle* self , const jb_DOMString* name);

SharedWorker StorageAccessHandle_SharedWorker_(StorageAccessHandle* self , const jb_USVString* scriptURL);

SharedWorker StorageAccessHandle_SharedWorker_(StorageAccessHandle* self , const jb_USVString* scriptURL, const jb_Any* options);
