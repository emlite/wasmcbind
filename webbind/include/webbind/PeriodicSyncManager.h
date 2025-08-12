#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BackgroundSyncOptions BackgroundSyncOptions;


/**
 * @brief Interface PeriodicSyncManager
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicSyncManager)
 */
DECLARE_EMLITE_TYPE(PeriodicSyncManager, em_Val);

/**
 * @brief Calls the `register` method. 
*/
jb_Promise PeriodicSyncManager_register_0(PeriodicSyncManager* self , jb_String * tag);

/**
 * @brief Calls the `register` method. 
*/
jb_Promise PeriodicSyncManager_register_1(PeriodicSyncManager* self , jb_String * tag, BackgroundSyncOptions * options);

/**
 * @brief Calls the `getTags` method. 
*/
jb_Promise PeriodicSyncManager_getTags(PeriodicSyncManager* self );

/**
 * @brief Calls the `unregister` method. 
*/
jb_Promise PeriodicSyncManager_unregister(PeriodicSyncManager* self , jb_String * tag);

#ifdef __cplusplus
}
#endif
