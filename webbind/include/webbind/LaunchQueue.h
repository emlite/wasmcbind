#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface LaunchQueue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/LaunchQueue)
 */
DECLARE_EMLITE_TYPE(LaunchQueue, em_Val);

/**
 * @brief Calls the `setConsumer` method. 
*/
jb_Undefined LaunchQueue_setConsumer(LaunchQueue* self , jb_Function * consumer);

#ifdef __cplusplus
}
#endif
