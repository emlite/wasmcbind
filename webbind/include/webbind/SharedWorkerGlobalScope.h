#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkerGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SharedWorkerGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SharedWorkerGlobalScope)
 */
DECLARE_EMLITE_TYPE(SharedWorkerGlobalScope, WorkerGlobalScope);

/**
 * @brief Gets the `name` property. 
*/
jb_String SharedWorkerGlobalScope_name(const SharedWorkerGlobalScope *self);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined SharedWorkerGlobalScope_close(SharedWorkerGlobalScope* self );

/**
 * @brief Gets the `onconnect` property. 
*/
jb_Any SharedWorkerGlobalScope_onconnect(const SharedWorkerGlobalScope *self);

/**
 * @brief Sets the `onconnect` property. 
*/
void SharedWorkerGlobalScope_set_onconnect(SharedWorkerGlobalScope* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
