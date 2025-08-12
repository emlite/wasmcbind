#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StorageEstimate StorageEstimate;
typedef struct IDBFactory IDBFactory;
typedef struct CacheStorage CacheStorage;
typedef struct FileSystemDirectoryHandle FileSystemDirectoryHandle;


/**
 * @brief Interface StorageBucket
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucket)
 */
DECLARE_EMLITE_TYPE(StorageBucket, em_Val);

/**
 * @brief Gets the `name` property. 
*/
jb_String StorageBucket_name(const StorageBucket *self);

/**
 * @brief Calls the `persist` method. 
*/
jb_Promise StorageBucket_persist(StorageBucket* self );

/**
 * @brief Calls the `persisted` method. 
*/
jb_Promise StorageBucket_persisted(StorageBucket* self );

/**
 * @brief Calls the `estimate` method. 
*/
jb_Promise StorageBucket_estimate(StorageBucket* self );

/**
 * @brief Calls the `setExpires` method. 
*/
jb_Promise StorageBucket_setExpires(StorageBucket* self , jb_Any * expires);

/**
 * @brief Calls the `expires` method. 
*/
jb_Promise StorageBucket_expires(StorageBucket* self );

/**
 * @brief Gets the `indexedDB` property. 
*/
IDBFactory StorageBucket_indexedDB(const StorageBucket *self);

/**
 * @brief Gets the `caches` property. 
*/
CacheStorage StorageBucket_caches(const StorageBucket *self);

/**
 * @brief Calls the `getDirectory` method. 
*/
jb_Promise StorageBucket_getDirectory(StorageBucket* self );

#ifdef __cplusplus
}
#endif
