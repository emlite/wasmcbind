#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WakeLockSentinel WakeLockSentinel;


/**
 * @brief Interface WakeLock
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WakeLock)
 */
DECLARE_EMLITE_TYPE(WakeLock, em_Val);

/**
 * @brief Calls the `request` method. 
*/
jb_Promise WakeLock_request0(WakeLock* self );

/**
 * @brief Calls the `request` method. 
*/
jb_Promise WakeLock_request1(WakeLock* self , WakeLockType * type);

#ifdef __cplusplus
}
#endif
