#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StorageEstimate StorageEstimate;
typedef struct FileSystemDirectoryHandle FileSystemDirectoryHandle;


/**
 * @brief Interface StorageManager
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/StorageManager)
 */
DECLARE_EMLITE_TYPE(StorageManager, em_Val);

/**
 * @brief Calls the `persisted` method. 
*/
jb_Promise StorageManager_persisted(StorageManager* self );

/**
 * @brief Calls the `persist` method. 
*/
jb_Promise StorageManager_persist(StorageManager* self );

/**
 * @brief Calls the `estimate` method. 
*/
jb_Promise StorageManager_estimate(StorageManager* self );

/**
 * @brief Calls the `getDirectory` method. 
*/
jb_Promise StorageManager_getDirectory(StorageManager* self );

#ifdef __cplusplus
}
#endif
