#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CookieStoreGetOptions CookieStoreGetOptions;


/**
 * @brief Interface CookieStoreManager
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CookieStoreManager)
 */
DECLARE_EMLITE_TYPE(CookieStoreManager, em_Val);

/**
 * @brief Calls the `subscribe` method. 
*/
jb_Promise CookieStoreManager_subscribe(CookieStoreManager* self , jb_Array * subscriptions);

/**
 * @brief Calls the `getSubscriptions` method. 
*/
jb_Promise CookieStoreManager_getSubscriptions(CookieStoreManager* self );

/**
 * @brief Calls the `unsubscribe` method. 
*/
jb_Promise CookieStoreManager_unsubscribe(CookieStoreManager* self , jb_Array * subscriptions);

#ifdef __cplusplus
}
#endif
