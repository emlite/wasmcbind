#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LockOptions LockOptions;
typedef struct LockManagerSnapshot LockManagerSnapshot;


/**
 * @brief Interface LockManager
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/LockManager)
 */
DECLARE_EMLITE_TYPE(LockManager, em_Val);

/**
 * @brief Calls the `request` method. 
*/
jb_Promise LockManager_request(LockManager* self , jb_String * name, LockOptions * options, jb_Function * callback);

/**
 * @brief Calls the `query` method. 
*/
jb_Promise LockManager_query(LockManager* self );

#ifdef __cplusplus
}
#endif
