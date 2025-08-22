#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Storage Storage;
typedef struct IDBFactory IDBFactory;
typedef struct LockManager LockManager;
typedef struct CacheStorage CacheStorage;
typedef struct FileSystemDirectoryHandle FileSystemDirectoryHandle;
typedef struct StorageEstimate StorageEstimate;
typedef struct BroadcastChannel BroadcastChannel;
typedef struct SharedWorker SharedWorker;


/**
 * @brief Interface StorageAccessHandle
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle)
 */
DECLARE_EMLITE_TYPE(StorageAccessHandle, em_Val);

/**
 * @brief Gets the `sessionStorage` property. 
*/
Storage StorageAccessHandle_sessionStorage(const StorageAccessHandle *self);

/**
 * @brief Gets the `localStorage` property. 
*/
Storage StorageAccessHandle_localStorage(const StorageAccessHandle *self);

/**
 * @brief Gets the `indexedDB` property. 
*/
IDBFactory StorageAccessHandle_indexedDB(const StorageAccessHandle *self);

/**
 * @brief Gets the `locks` property. 
*/
LockManager StorageAccessHandle_locks(const StorageAccessHandle *self);

/**
 * @brief Gets the `caches` property. 
*/
CacheStorage StorageAccessHandle_caches(const StorageAccessHandle *self);

/**
 * @brief Calls the `getDirectory` method. 
*/
jb_Promise StorageAccessHandle_getDirectory(StorageAccessHandle* self );

/**
 * @brief Calls the `estimate` method. 
*/
jb_Promise StorageAccessHandle_estimate(StorageAccessHandle* self );

/**
 * @brief Calls the `createObjectURL` method. 
*/
jb_String StorageAccessHandle_createObjectURL(StorageAccessHandle* self , jb_Any * obj);

/**
 * @brief Calls the `revokeObjectURL` method. 
*/
jb_Undefined StorageAccessHandle_revokeObjectURL(StorageAccessHandle* self , jb_String * url);

/**
 * @brief Calls the `BroadcastChannel` method. 
*/
BroadcastChannel StorageAccessHandle_BroadcastChannel_(StorageAccessHandle* self , jb_String * name);

/**
 * @brief Calls the `SharedWorker` method. 
*/
SharedWorker StorageAccessHandle_SharedWorker_0(StorageAccessHandle* self , jb_String * scriptURL);

/**
 * @brief Calls the `SharedWorker` method. 
*/
SharedWorker StorageAccessHandle_SharedWorker_1(StorageAccessHandle* self , jb_String * scriptURL, jb_Any * options);

#ifdef __cplusplus
}
#endif
