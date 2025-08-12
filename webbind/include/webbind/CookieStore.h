#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CookieListItem CookieListItem;
typedef struct CookieStoreGetOptions CookieStoreGetOptions;
typedef struct CookieInit CookieInit;
typedef struct CookieStoreDeleteOptions CookieStoreDeleteOptions;


/**
 * @brief Interface CookieStore
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CookieStore)
 */
DECLARE_EMLITE_TYPE(CookieStore, EventTarget);

/**
 * @brief Calls the `get` method. 
*/
jb_Promise CookieStore_get0(CookieStore* self );

/**
 * @brief Calls the `get` method. 
*/
jb_Promise CookieStore_get1(CookieStore* self , CookieStoreGetOptions * options);

/**
 * @brief Calls the `getAll` method. 
*/
jb_Promise CookieStore_getAll0(CookieStore* self );

/**
 * @brief Calls the `getAll` method. 
*/
jb_Promise CookieStore_getAll1(CookieStore* self , CookieStoreGetOptions * options);

/**
 * @brief Calls the `set` method. 
*/
jb_Promise CookieStore_set(CookieStore* self , CookieInit * options);

/**
 * @brief Calls the `delete` method. 
*/
jb_Promise CookieStore_delete_(CookieStore* self , CookieStoreDeleteOptions * options);

/**
 * @brief Gets the `onchange` property. 
*/
jb_Any CookieStore_onchange(const CookieStore *self);

/**
 * @brief Sets the `onchange` property. 
*/
void CookieStore_set_onchange(CookieStore* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
