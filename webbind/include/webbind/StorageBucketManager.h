#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct StorageBucket StorageBucket;
typedef struct StorageBucketOptions StorageBucketOptions;


/**
 * @brief Interface StorageBucketManager
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucketManager)
 */
DECLARE_EMLITE_TYPE(StorageBucketManager, em_Val);

/**
 * @brief Calls the `open` method. 
*/
jb_Promise StorageBucketManager_open0(StorageBucketManager* self , jb_String * name);

/**
 * @brief Calls the `open` method. 
*/
jb_Promise StorageBucketManager_open1(StorageBucketManager* self , jb_String * name, StorageBucketOptions * options);

/**
 * @brief Calls the `keys` method. 
*/
jb_Promise StorageBucketManager_keys(StorageBucketManager* self );

/**
 * @brief Calls the `delete` method. 
*/
jb_Promise StorageBucketManager_delete_(StorageBucketManager* self , jb_String * name);

#ifdef __cplusplus
}
#endif
