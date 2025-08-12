#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MultiCacheQueryOptions MultiCacheQueryOptions;
typedef struct Cache Cache;


/**
 * @brief Interface CacheStorage
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CacheStorage)
 */
DECLARE_EMLITE_TYPE(CacheStorage, em_Val);

/**
 * @brief Calls the `match` method. 
*/
jb_Promise CacheStorage_match0(CacheStorage* self , jb_Any * request);

/**
 * @brief Calls the `match` method. 
*/
jb_Promise CacheStorage_match1(CacheStorage* self , jb_Any * request, MultiCacheQueryOptions * options);

/**
 * @brief Calls the `has` method. 
*/
jb_Promise CacheStorage_has(CacheStorage* self , jb_String * cacheName);

/**
 * @brief Calls the `open` method. 
*/
jb_Promise CacheStorage_open(CacheStorage* self , jb_String * cacheName);

/**
 * @brief Calls the `delete` method. 
*/
jb_Promise CacheStorage_delete_(CacheStorage* self , jb_String * cacheName);

/**
 * @brief Calls the `keys` method. 
*/
jb_Promise CacheStorage_keys(CacheStorage* self );

#ifdef __cplusplus
}
#endif
