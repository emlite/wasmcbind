#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CacheQueryOptions CacheQueryOptions;
typedef struct Response Response;
typedef struct Request Request;


/**
 * @brief Interface Cache
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Cache)
 */
DECLARE_EMLITE_TYPE(Cache, em_Val);

/**
 * @brief Calls the `match` method. 
*/
jb_Promise Cache_match0(Cache* self , jb_Any * request);

/**
 * @brief Calls the `match` method. 
*/
jb_Promise Cache_match1(Cache* self , jb_Any * request, CacheQueryOptions * options);

/**
 * @brief Calls the `matchAll` method. 
*/
jb_Promise Cache_matchAll0(Cache* self );

/**
 * @brief Calls the `matchAll` method. 
*/
jb_Promise Cache_matchAll1(Cache* self , jb_Any * request);

/**
 * @brief Calls the `matchAll` method. 
*/
jb_Promise Cache_matchAll2(Cache* self , jb_Any * request, CacheQueryOptions * options);

/**
 * @brief Calls the `add` method. 
*/
jb_Promise Cache_add(Cache* self , jb_Any * request);

/**
 * @brief Calls the `addAll` method. 
*/
jb_Promise Cache_addAll(Cache* self , jb_Array * requests);

/**
 * @brief Calls the `put` method. 
*/
jb_Promise Cache_put(Cache* self , jb_Any * request, Response * response);

/**
 * @brief Calls the `delete` method. 
*/
jb_Promise Cache_delete_0(Cache* self , jb_Any * request);

/**
 * @brief Calls the `delete` method. 
*/
jb_Promise Cache_delete_1(Cache* self , jb_Any * request, CacheQueryOptions * options);

/**
 * @brief Calls the `keys` method. 
*/
jb_Promise Cache_keys0(Cache* self );

/**
 * @brief Calls the `keys` method. 
*/
jb_Promise Cache_keys1(Cache* self , jb_Any * request);

/**
 * @brief Calls the `keys` method. 
*/
jb_Promise Cache_keys2(Cache* self , jb_Any * request, CacheQueryOptions * options);

#ifdef __cplusplus
}
#endif
