#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SyncManager
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SyncManager)
 */
DECLARE_EMLITE_TYPE(SyncManager, em_Val);

/**
 * @brief Calls the `register` method. 
*/
jb_Promise SyncManager_register_(SyncManager* self , jb_String * tag);

/**
 * @brief Calls the `getTags` method. 
*/
jb_Promise SyncManager_getTags(SyncManager* self );

#ifdef __cplusplus
}
#endif
