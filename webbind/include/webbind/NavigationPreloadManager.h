#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationPreloadState NavigationPreloadState;


/**
 * @brief Interface NavigationPreloadManager
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NavigationPreloadManager)
 */
DECLARE_EMLITE_TYPE(NavigationPreloadManager, em_Val);

/**
 * @brief Calls the `enable` method. 
*/
jb_Promise NavigationPreloadManager_enable(NavigationPreloadManager* self );

/**
 * @brief Calls the `disable` method. 
*/
jb_Promise NavigationPreloadManager_disable(NavigationPreloadManager* self );

/**
 * @brief Calls the `setHeaderValue` method. 
*/
jb_Promise NavigationPreloadManager_setHeaderValue(NavigationPreloadManager* self , jb_String * value);

/**
 * @brief Calls the `getState` method. 
*/
jb_Promise NavigationPreloadManager_getState(NavigationPreloadManager* self );

#ifdef __cplusplus
}
#endif
